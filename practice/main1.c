//房屋
#include <stdio.h>

int main() {
    int h = 4; 

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }
    
    for (int i = 1; i <= 2 * h - 1; i++) {
        printf("*");
    }
    
    printf("\n");
    
    for (int i = 1; i <= h; i++) {
        printf("*");

        for (int j = 1; j <2 * h - 2 ; j++) {
            printf(" ");
        }

        printf("*\n");
    }
    
    for (int i = 1; i <= 2 * h - 1; i++) {
        printf("*");
    }
    
    return 0;
}
