#include <stdio.h>


int main (void){


     char coluna1[100] = "| Coluna 1 |";
     char coluna2[100] = " Coluna 2 |";
     char coluna3[100] = " Coluna 3 |";
     char coluna4[100] = " Coluna 4 |";

    FILE *ptr;
    // Funcao para abrir um arquivo
    ptr = fopen("Letra_B.txt", "w" );

    fprintf(ptr, "%s %s %s %s", coluna1, coluna2, coluna3, coluna4);

    fclose(ptr);






    return 0;
}