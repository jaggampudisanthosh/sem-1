#include <stdio.h>

int main(void) {
    int n,i, upto;

    printf("Enter the number whose table you want: ");
    if (scanf("%d", &n) != 1) return 0;

    printf("Enter how many multiples to print (e.g. 10): ");
    if (scanf("%d", &upto) != 1) upto = 10;

    printf("\nMultiplication table of %d up to %d:\n", n, upto);
    for ( i = 1; i <= upto; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

