#include <stdio.h>

int main(){
    int num = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf(" %d", &num);

    for (int i = 0; i <= num; i++){
        if (num > 0){
            printf("%d\n", i);
        }
        else{
            printf("numero invalido");
        }
    }
    return 0;
}