
#include<stdio.h>

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int numbers[] = {1, 2, 3};
    int numCount = sizeof(numbers) / sizeof(numbers[0]);
    int sumFactorial = 0;

    for(int i = 0; i < numCount; i++) {
        int factorial_num = factorial(numbers[i]);
        sumFactorial += factorial_num;
    }

    printf("The sum of the factorials is %d\n", sumFactorial);

    return 0;
}



