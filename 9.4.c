#include <stdio.h>

int main() {

    for (int i = 1; i <= 4; i++) {
        int num = 4 - i + 1;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}