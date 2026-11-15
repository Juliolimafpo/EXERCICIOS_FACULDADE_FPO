#include <stdio.h>

int main(){
    char o = ' ';
    char l = ' ';
    char a = ' ';

    printf("digite a primeira letra: ");
    scanf(" %c", &o);

    printf("\ndigite a segunda letra: ");
    scanf(" %c", &l);

    printf("\ndigite a terceira letra: ");
    scanf(" %c", &a);


    printf("\n%c \n%c \n%c", o, l, a);
    
    return 0;
}
