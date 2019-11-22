#include <stdio.h>


int main (void){

    float decimal;

    char texto[100] = "Joao";

    int inteiro;

    inteiro = 45;

    decimal = 7.55;

    FILE *ptr;
    // Funcao para abrir um arquivo
    ptr = fopen("Letra_A.txt", "w" );

    fprintf(ptr, "%s %i %.2f", texto, inteiro, decimal);

    fclose(ptr);

    FILE *ler;

    ler = fopen("Letra_A.txt", "r" );

    float decimalr;

    char textor[100];

    int inteiror;

    fscanf(ler, "%s %i %f", &textor, &inteiror, &decimalr);
    printf("-----------------------------------\n");
    printf("Leitura: ");
    printf("%s %i %.2f", textor, inteiror, decimalr);
    printf("\n-----------------------------------");
    printf("\nFIM DA LEITURA    \n-----------------------------------");
    fclose(ler);

    return 0;
}