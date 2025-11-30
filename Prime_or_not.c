 #include <stdio.h>

int main() {
    int n,i;
    printf("Enter a number:");
    scanf("%d", &n);

    if(n <= 1) {
        printf("Not Prime");
        return 0;
    }

    int isPrime = 1;
    for( i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

