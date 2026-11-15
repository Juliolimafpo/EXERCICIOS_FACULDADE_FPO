#include <stdio.h>
#include <math.h>

int main(){
    float num = 0;
    float aoQuadrado = 0;
    float raiz = 0;

    printf("Digite um numero positivo: ");
    scanf(" %f", &num);

    if(num > 0){
        aoQuadrado = num * num;
        
        printf("o numero ao quadrado: %0.2f", aoQuadrado);

        raiz = sqrt(num);
        printf("\na raiz quadrada do numero e: %0.2f", raiz);
    }else{
        printf("erro, numero invalido");
    }

    return 0;
}