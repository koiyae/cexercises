#include <stdio.h>

/* count lines in input */

int main(void) {
    int c, nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        }
    }
    printf("%d\n", nl);
}