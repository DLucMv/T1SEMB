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
FILE *m; // entrada formatado

char linha[8000];   // Tamanho máximo de cada linha (ajuste conforme necessário)
                    // Nesse caso o vetor de entrada

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

    m = fopen("textoFormatado.txt", "r+");
    if (m == NULL) {
        m = fopen("textoFormatado.txt", "w+");
        if (m == NULL) {
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
    fclose(m);
}

//Funcao para conversao de string para maiuscula e eliminacao de espacos
char *strupr(char *str)
{
    unsigned char *p = (unsigned char *)str;
    
    /*while (*p) {
        *p = toupper(*p);
        p++;
    }*/
   
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
    
    return str;
}

//ler usando fgets
char *lerArquivo(FILE *arquivo) {
     if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    char buffer[8000];
    char *conteudo = NULL;
    size_t tamanho = 0;

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        
        if (tamanho + strlen(linha) < 8000) {
            strcat(buffer, linha);
            tamanho += strlen(linha);
        } else {
            // O buffer está cheio, lidar com isso de acordo com sua necessidade
            // Se necessário, pode truncar o conteúdo ou tomar outras medidas
            printf("Tamanho máximo do buffer excedido.\n");
            break;
        }
    }

    conteudo = strdup(buffer);

    return strdup(conteudo);
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

void escreverArquivo(FILE *arquivo, const char *conteudo) {
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    char buffer[8000];  // Defina TAMANHO_BUFFER conforme necessário
    int pos_buffer = 0;  // Posição atual no buffer

    for (size_t i = 0; conteudo[i] != '\0'; i++) {
        char caractere = conteudo[i];

            buffer[pos_buffer] = caractere;
            pos_buffer++;

            if (pos_buffer == 8000 - 1) {
                // O buffer está cheio, escreve no arquivo e reinicia o buffer
                buffer[pos_buffer] = '\0';
                fprintf(arquivo, "%s", buffer);
                pos_buffer = 0;
            }

    }

    strupr(buffer); // Converte para maiúsculas e remove espaços

    buffer[pos_buffer] = '\0';
    fprintf(arquivo, "%s", buffer);

}

void formatarTexto(){

    f = fopen("textoDeEntrada.txt", "r+");
    if (f == NULL) {
        f = fopen("textoDeEntrada.txt", "w+");
        if (f == NULL) {
            printf("\nNão foi possível criar o arquivo de entrada.\n");
            exit(1);
        }
    }

    m = fopen("textoFormatado.txt", "r+");
    if (m == NULL) {
        m = fopen("textoFormatado.txt", "w+");
        if (m == NULL) {
            printf("\nNão foi possível criar o arquivo de entrada.\n");
            exit(1);
        }
    }

    escreverArquivo(m, lerArquivo(f));

    fclose(f);
    fclose(m);
}

void encriptArquivo() {

    abrir_arquivos();

    char *chaveCriptografia = lerChave(h);

    if (m == NULL || g == NULL) {
        printf("Erro ao abrir os arquivos de entrada e saída.\n");
        exit(1);
    }

    while (fgets(linha, sizeof(linha), m) != NULL) {
        char TextEncrypted[8000];
        int i = 0, j, lenText = strlen(linha);
        int lenkey = strlen(chaveCriptografia);
        char newkey[8000];

        for (i = 0; i < lenText ; i++) {
            j = i % lenkey;
            newkey[i] = chaveCriptografia[j];
        }
        newkey[lenText] = '\0';

        for (i = 0; i < lenText; i++) {
            TextEncrypted[i] = 
            (linha[i] > 64 && linha[i] < 91) ? ((linha[i] + newkey[i]) % 26) + 65 : 
            (linha[i] > 96 && linha[i] < 123) ? ((linha[i] - 97 + newkey[i] - 97) % 26) + 97 : linha[i];
        }

        TextEncrypted[lenText] = '\0';

        fprintf(g, "%s\n", TextEncrypted);
    }

    fechar_arquivos();
    
}

void decriptArquivo() {
    abrir_arquivos();

    char *chaveDescriptografia = lerChave(h);

    if (g == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        exit(1);
    }

    while (fgets(linha, sizeof(linha), g) != NULL) {
        char TextDecrypted[8000];
        int i = 0, j, lenText = strlen(linha);
        int lenkey = strlen(chaveDescriptografia);
        char newkey[8000];

        for (i = 0; i < lenText ; i++) {
            j = i % lenkey;
            newkey[i] = chaveDescriptografia[j];
        }
        newkey[lenText] = '\0';

        for (i = 0; i < lenText; i++) {
            TextDecrypted[i] = 
            (linha[i] > 64 && linha[i] < 91) ? ((linha[i] - newkey[i] + 26) % 26) + 65 : 
            (linha[i] > 90 && linha[i] < 123) ? ((linha[i] - newkey[i] + 26) % 26) + 97 : linha[i];
        }

        TextDecrypted[lenText] = '\0';

        fprintf(l, "%s\n", TextDecrypted);
    }

    fechar_arquivos();
    
}

int main() {

    formatarTexto();
    encriptArquivo();
    decriptArquivo();

    return 0;
}
