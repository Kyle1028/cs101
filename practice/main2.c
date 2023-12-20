//倒三角and正三角
#include <stdio.h>

int main() {
    int h = 4; 
    for (int i = h; i >= 1; i--) {
        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 2; i <= h; i++) {
        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
