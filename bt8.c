#include <stdio.h>

int main() {
    int x = 5, i, j;
    
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    
    return 0;
}ccccccccccccccccccccc