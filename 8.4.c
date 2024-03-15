#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display from n to 1
    printf("Numbers from %d to 1:\n", n);
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    // Display from 1 to n
    printf("Numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}