#include <stdio.h>

int main() {
    int num, i = 2;
    printf("Enter a number: ");
    scanf("%d", &num);

    int isPrime = 1; 

    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0; 
            break;
        }
        i++;
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}