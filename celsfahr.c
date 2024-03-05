#include <stdio.h>

/* prints Fahrenheit-Celsius 20 table until 300 
    for fahr = 0, 20, 40, ..., 300 */

main(){
    int fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}