 #include <stdio.h>

int main() {
    int n,i;

     printf("Enter n value:");
    scanf("%d", &n);

    int arr[n];

     printf("Enter elements in an array  :");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];

     
    for( i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

 
    printf(" smallest element in an array is %d", smallest);

    return 0;
}

