#include <stdio.h>

int main() {
    int num = 10;
    
    printf("Even numbers between 10 and 50:\n");
    
    while (num <= 50) {
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
        num++;
    }
    
    return 0;
}