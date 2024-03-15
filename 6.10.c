#include <stdio.h>

int main() {
    int num, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Digits from left to right: ");
    
    while (num > 0) {
        digit = num % 10;  // Get the rightmost digit
        printf("%d ", digit);  // Print the digit
        num = num / 10;  // Remove the rightmost digit
    }
    
    printf("\n");
    
    return 0;
}