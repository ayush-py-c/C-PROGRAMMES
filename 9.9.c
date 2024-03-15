#include <stdio.h>

int main() {
    int n = 4;
    int start = 9; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%d ", start + j);
        }
        printf("\n");
        start = start + n - i;
    }

    return 0;
}