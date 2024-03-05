#include <stdio.h>

int main (void){
    int a, b, c, d;

    printf("Digite três números: \n");
    scanf("%d%d%d", &a, &b, &c);

    d = a + b + c;

    printf("O resultado da soma é: %d\n", d);
    printf("Seja feliz!\n");
}