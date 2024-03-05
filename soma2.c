#include <stdio.h>

int main(void){
    int num1, num2, num3, soma;

    printf("Insira aqui o primeiro número: \n");
    scanf("%d", &num1);
    printf("Insira aqui o segundo número: \n");
    scanf("%d", &num2);
    printf("Insira aqui o terceiro número: \n");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("A soma é %d\n", soma);
}