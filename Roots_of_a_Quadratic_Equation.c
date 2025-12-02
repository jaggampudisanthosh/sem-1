 #include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, r1, r2, real, imag;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }
    else if (D == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", r1);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-D) / (2 * a);
        printf("Roots are imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}

