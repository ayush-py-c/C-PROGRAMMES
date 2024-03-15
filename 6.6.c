#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the HCF using a while loop
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    printf("HCF = %d\n", num1);

    return 0;
}