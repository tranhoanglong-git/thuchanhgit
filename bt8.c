#include <stdio.h>

int main() {
    int x = 5, i, j;
    
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    
    return 0;
}


/* ===== HOẶC NGẮN HƠN NỮA ===== */

// Cách 2: Dùng hàm
void ve(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

// Cách 3: Cực ngắn (1 dòng)
void ve_1dong(int x) {
    for (int i = 1; i <= x; i++, printf("\n"))
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
}

// Cách 4: Nhập x từ bàn phím
int main() {
    int x, i, j;
    scanf("%d", &x);
    for (i = 1; i <= x; i++, printf("\n"))
        for (j = 1; j <= i; j++)
            printf("%d ", j);
    return 0;
}