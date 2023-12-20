//兩個交錯直角三角形
#include <stdio.h>

int main() {
    int h = 4; 
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i ; k++) {
            printf("*");
        }

        printf("\n");
    }
    for (int i = h; i >= 1; i--) {
        for (int j = 1; j <= h; j++) {
            printf(" ");
        }

        for (int k = 1; k <= i ; k++) {
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}
