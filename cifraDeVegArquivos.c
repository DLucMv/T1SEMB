/*
    Escrito por: 
        Davison Lucas Mendes Viana
        Marcelo de Araújo
    
    Disciplina: Sistemas embarcados - IFCE
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

FILE *f; // entrada
FILE *g; // encriptado
FILE *h; // chave
FILE *l; // desencriptado

//Detecção da Plataforma do sistema operacional
int so(){
    int SO;
#ifdef __linux__
    SO=0;
#endif
#ifdef _WIN32
    SO=1;
#endif
    return SO;
}

// Cria todos os arquivos, coso estes não existam.
void abrir_arquivos() {
    f = fopen("textoDeEntrada.txt", "r+");
    if (f == NULL) {
        f = fopen("textoDeEntrada.txt", "w+");
        if (f == NULL) {
            printf("\nNão foi possível criar o arquivo de entrada.\n");
            exit(1);
        }
    }


    g = fopen("textoEncriptado.txt", "r+");
    if (g == NULL) {
        g = fopen("textoEncriptado.txt", "w+");
        if (g == NULL) {
        printf("\nNão foi possível criar o arquivo de saída.\n");
        exit(1);
        }
    }


    h = fopen("chave.txt", "r+");
    if (h == NULL) {
        h = fopen("chave.txt", "w+");
        if (h == NULL) {
            printf("\nNão foi possível criar o arquivo de chave.\n");
            exit(1);
        }
    }

    l = fopen("textoDesEncriptado.txt", "r+");
    if (l == NULL) {
        l = fopen("textoDesEncriptado.txt", "w+");
        if (l == NULL) {
            printf("\nNão foi possível criar o arquivo de entrada.\n");
            exit(1);
        }
    }
}

//Fecha todos os arquivos abertos
void fechar_arquivos() {
    fclose(f);
    fclose(g);
    fclose(h);
    fclose(l);
}

//Funcao para conversao de string para maiuscula e eliminacao de espacos
char *strupr(char *str)
{
    int posW = 0, posR = 0;
    unsigned char *p = (unsigned char *)str;
    
    while (*p) {
        *p = toupper(*p);
        p++;
    }

    
    for(posR = 0; posR < strlen(str) - 1 ; posR++) {
        if(str[posR] == ' ')
            continue;
        str[posW] = str[posR];
        posW++;
    }
    str[posW] = '\0';
    
   /*
   char *p1 = str;
   char *p2 = str;

    while (*p1) {
        if (*p1 != ' ') {
            *p2 = *p1;
            p2++;
        }
        p1++;
    }
    *p2 = '\0';
    */
    return str;
}

// Ler usando fseek
/*
char *lerArquivo(FILE *arquivo) {
    fseek(arquivo, 0, SEEK_END);
    long tamanho = ftell(arquivo);
    rewind(arquivo);

    char *conteudo = (char *)malloc(tamanho + 1);
    if (conteudo == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    fread(conteudo, 1, tamanho, arquivo);
    conteudo[tamanho] = '\0';

    // Aplica a função strupr para converter para maiúsculas
    strupr(conteudo);

    return strdup(conteudo);
}
*/

//ler usando fgets
char *lerArquivo(FILE *arquivo) {
     if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    char linha[100];  // Tamanho máximo de cada linha (ajuste conforme necessário)
    char *conteudo = NULL;
    size_t tamanho = 0;

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        
        tamanho += strlen(linha);
        conteudo = (char *)realloc(conteudo, tamanho + 1);
        if (conteudo == NULL) {
            printf("Erro na alocação de memória.\n");
            exit(1);
        }

        strcat(conteudo, linha);
    }

    return conteudo;
}

char *lerChave(FILE *arquivo) {
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de chave.\n");
        exit(1);
    }

    char chave[100];
    if (fgets(chave, sizeof(chave), arquivo) == NULL) {
        printf("Erro ao ler a chave do arquivo.\n");
        exit(1);
    }

    // Remova a quebra de linha da chave, se presente
    char *quebraLinha = strchr(chave, '\n');
    if (quebraLinha != NULL) {
        *quebraLinha = '\0';
    }

    strupr(chave);

    return strdup(chave);
}

/*
void escreverArquivo(FILE *arquivo, const char *conteudo) {
    char *conteudoFormatado = (char *)malloc(strlen(conteudo) + 1);
    if (conteudoFormatado == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    strcpy(conteudoFormatado, conteudo);
    strupr(conteudoFormatado); // Converte para maiúsculas e remove espaços

    fprintf(arquivo, "%s", conteudoFormatado);

    free(conteudoFormatado);
}
*/

void encriptArquivo() {
    abrir_arquivos();

    char *chaveCriptografia = lerChave(h);

    if (f == NULL || g == NULL) {
        printf("Erro ao abrir os arquivos de entrada e saída.\n");
        exit(1);
    }

    char linha[100]; // Tamanho máximo de cada linha (ajuste conforme necessário)

    while (fgets(linha, sizeof(linha), f) != NULL) {
        char TextEncrypted[100];
        int i = 0, j, lenText = strlen(linha);
        int lenkey = strlen(chaveCriptografia);
        char newkey[100];

        for (i = 0; i < lenText - 1; i++) {
            j = i % lenkey;
            newkey[i] = chaveCriptografia[j];
        }
        newkey[lenText] = '\0';

        for (i = 0; i < lenText - 1; i++) {
            TextEncrypted[i] = (linha[i] + newkey[i]) % 26 + 65;
        }

        TextEncrypted[lenText] = '\0';

        fprintf(g, "%s\n", TextEncrypted);
    }

    fechar_arquivos();
    free(chaveCriptografia); // Libera a memória alocada para a chave
}


void decriptArquivo() {
    abrir_arquivos();

    char *chaveDescriptografia = lerChave(h);

    if (g == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        exit(1);
    }

    char linha[100];  // Tamanho máximo de cada linha (ajuste conforme necessário)

    while (fgets(linha, sizeof(linha), g) != NULL) {
        char TextDecrypted[100];
        int i = 0, j, lenText = strlen(linha);
        int lenkey = strlen(chaveDescriptografia);
        char newkey[100];

        for (i = 0; i < lenText - 1; i++) {
            j = i % lenkey;
            newkey[i] = chaveDescriptografia[j];
        }
        newkey[lenText] = '\0';

        for (i = 0; i < lenText - 2; i++) {
            TextDecrypted[i] = (linha[i] - newkey[i] + 26) % 26 + 65;
        }

        TextDecrypted[lenText] = '\0';

        fprintf(l, "%s\n", TextDecrypted);
    }

    fechar_arquivos();
    free(chaveDescriptografia); // Libera a memória alocada para a chave
}


int main() {

    encriptArquivo();
    decriptArquivo();

    return 0;
}
