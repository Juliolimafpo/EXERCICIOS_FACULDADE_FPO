#include <stdio.h>

int main(){
    int inteira = 0;
    float decimal = 0;
    char caractere = ' ';

    printf("Digite uma caractere: ");
    scanf(" %c", &caractere);
    printf("Digite um numero inteiro: ");
    scanf(" %d", &inteira);
    printf("Digite um numero decimal: ");
    scanf(" %f", &decimal);

    
   
    printf("===============================================\n");
    printf("%c %d %0.2f\n ", caractere, inteira, decimal);
    printf("===============================================\n");
    printf("\n%c \n%d \n%0.2f\n\n", caractere, inteira, decimal);
    printf("===============================================\n");
    printf("%c\t %d\t \t%0.2f\n ", caractere, inteira, decimal);
    return 0;
}