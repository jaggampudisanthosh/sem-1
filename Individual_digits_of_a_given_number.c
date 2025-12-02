 #include <stdio.h>

int main() {
    int num, temp, divisor = 1;
    printf("Enter n value:");
    scanf("%d", &num);

    temp = num;

    while(temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    while(divisor > 0) {
        printf("%d \n", num / divisor);
        num %= divisor;
        divisor /= 10;
    }

    return 0;
}

