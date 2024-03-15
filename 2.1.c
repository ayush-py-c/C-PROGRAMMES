//find the smallest number amoung the four numbers
#include <stdio.h>

int main() {
    float num1, num2, num3, num4, smallest;

    // Input the four numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    printf("Enter the fourth number: ");
    scanf("%f", &num4);

    // Assume the first number is the smallest
    smallest = num1;

    // Check and update if any of the other numbers is smaller
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    if (num4 < smallest) {
        smallest = num4;
    }

    printf("The smallest number is: %.2f\n", smallest);

    return 0;
}