/*
    Apenas um pequeno app para lembrar como trabalhar com arquivos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

FILE *f;
FILE *g;


void abrir_arq(){

    f = fopen("caracteresDeEntrada.txt","r+");
    if (f == NULL){
        f = fopen("caracteresDeEntrada.txt","w+");
        if(f == NULL){
            printf("\nNão foi possível criar o arquivo.\n");
            exit(1);
        }
    }

    g = fopen("caracteresDeSaida.txt","r+");
    if (g == NULL){
        g = fopen("caracteresDeSaida.txt","w+");
        if(g == NULL){
            printf("\nNão foi possível criar o arquivo.\n");
            exit(1);
        }
    }

}

void fechar_arq(){
    fclose(f);
    fclose(g);
}


// Função para ler o conteúdo de um arquivo e retorná-lo como uma string
char *lerArquivo(FILE *f) {
    fseek(f, 0, SEEK_END);
    long tamanho = ftell(f);
    rewind(f);

    char *conteudo = (char *)malloc(tamanho + 1);
    if (conteudo == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    fread(conteudo, 1, tamanho, f);
    conteudo[tamanho] = '\0'; // Adicione um terminador nulo no final

    return conteudo;
}

// Função para escrever conteúdo em um arquivo
void escreverArquivo(FILE *f, const char *conteudo) {
    fprintf(f, "%s", conteudo);
}

int main() {

    abrir_arq();

    //Lendo do arquivo
    char *conteudo = lerArquivo(f); 
    printf("Conteúdo do arquivo:\n%s\n", conteudo);

    // Escreve no arquivo
    escreverArquivo(g, conteudo);
    printf("\nNovo conteúdo escrito no arquivo.\n");

    free(conteudo); // Libera a memória alocada para o conteúdo

    fechar_arq();

    return 0;
}
