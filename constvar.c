// Using constants and variables in C

#include <stdio.h>

int main(void){
    int a = 12; // integer variable declaration and definition
    char b[10]; // array of characters variable declaration
    float c = 3.14; // float variable declaration and definition

    sprintf(b, "letra b"); // transforms the b variable array into 'letra a' string

    printf("a = %d; b = %s; c = %.2f", a, b, c); // prints the value of the variable on the screen
    
    return 0; // can be or not used in the main function, but it's mandatory in the rest
}