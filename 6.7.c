#include <stdio.h>

int main() {
    int number, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        // Increment the count for each digit
        count++;
        // Remove the last digit from the number
        number /= 10;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}