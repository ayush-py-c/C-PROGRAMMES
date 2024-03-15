#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int number = 1;
        for (int j = 0; j < n - i - 1; j++) {
            printf("   "); 
        }
        for (int j = 0; j <= i; j++) {
            printf("%6d", number); 
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}