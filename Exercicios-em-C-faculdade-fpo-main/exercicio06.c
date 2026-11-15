#include <stdio.h>



int main(){

    float raio = 0;
    double pi = 3.141592;

    printf("Digite o raio de um circulo: ");
    scanf(" %f", &raio);

    double area = pi * (raio * raio);

    printf("\nA area do circulo e: %0.2lf\n", area);

    return 0;
}