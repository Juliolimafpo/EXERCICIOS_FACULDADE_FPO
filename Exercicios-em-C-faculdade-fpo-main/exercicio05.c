#include <stdio.h>


int main(){
    double f = 0;
    double c = 0;

    printf("Digite a temperatura em graus celsius: ");
    scanf(" %lf", &c);

    f = c* (9.0/5.0) + 32.0;

    printf("a conversao em fahrenheit e: %0.2f", f);

    return 0;
}