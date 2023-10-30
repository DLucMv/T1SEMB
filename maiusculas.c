#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strupr(char *str)
{
    int posW = 0, posR = 0;
    unsigned char *p = (unsigned char *)str;
    
    while (*p) {
        *p = toupper(*p);
        p++;
    }
   
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

int main(){
    char texto[] = "este eh um texto minusculo";

    strupr(texto);

    printf(texto);

}