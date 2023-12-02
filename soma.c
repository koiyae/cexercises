#include <stdio.h>

int main(){
    int inteiro1, inteiro2, soma;
    printf("Digite o primeiro inteiro\n");
    scanf("%d", &inteiro1);
    printf("Digite o segundo inteiro\n");
    scanf("%d", &inteiro2);
    soma = inteiro1 + inteiro2;

    printf("A soma é %d\n", soma);

    return 0;
}
