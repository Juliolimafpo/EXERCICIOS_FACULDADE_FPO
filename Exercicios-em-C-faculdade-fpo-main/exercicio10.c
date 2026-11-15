#include <stdio.h>


int main(){
    int soma = 0;
    int num = 0;
    float media = 0;

    for(int i = 1; i <= 10; i++){   
        printf("Digite um numero: ");
        scanf(" %d", &num);
        soma = soma + num;
    }

    media = soma / 10.0;
    printf("%0.2f", media);

    return 0;

}