#include <stdio.h>


int main(){
    float kmh = 0;
    float ms = 0;

    printf("Qual a velocidade em km/h?: ");
    scanf(" %f", &kmh);

    ms = kmh / 3.6;

    printf("A conversao em metros por segundos e: %0.2f\n", ms);

    return 0;
}