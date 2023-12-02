#include <stdio.h>

int main (void){
    int num1, num2;
    printf("Entre com dois inteiros e eu lhe direi\n");
    printf("as relações que eles satisfazem: ");

    scanf("%d%d", &num1, &num2);

    if (num1 == num2){
        printf("%d é maior que %d\n", num1, num2);
    }

    if (num1 != num2){
        printf("%d não é igual a %d\n", num1, num2);   
    }

    if (num1 < num2){
        printf("%d é menor que %d\n", num1, num2);
    }

    if (num1 > num2){
        printf("%d é maior que %d\n", num1, num2);
    }

    if (num1 <= num2){
        printf("%d é menor ou igual a %d\n", num1, num2);
    }

    if (num1 >= num2){
        printf("%d é maior ou igual a %d\n", num1, num2);
    }
    
    return 0;
}