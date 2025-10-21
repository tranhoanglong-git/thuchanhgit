#include <stdio.h>

// ===== HÀM IN BẢNG CỬU CHƯƠNG =====
void bang_cuu_chuong() {
    int n, i;
    
    printf("Nhập số chương: ");
    scanf("%d", &n);
    
    printf("\n===== BẢNG CỬU CHƯƠNG %d =====\n", n);
    
    for (i = 1; i <= 10; i++) {
        printf("%d × %d = %d\n", n, i, n * i);
    }
}


// ===== PHIÊN BẢN ĐẸP HƠN =====
void bang_cuu_chuong_dep() {
    int n, i;
    
    printf("============================\n");
    printf("   BẢNG CỬU CHƯƠNG\n");
    printf("============================\n");
    printf("Nhập số chương (1-10): ");
    scanf("%d", &n);
    
    printf("\n╔════════════════════════╗\n");
    printf("║   BẢNG CỬU CHƯƠNG %d   ║\n", n);
    printf("╠════════════════════════╣\n");
    
    for (i = 1; i <= 10; i++) {
        printf("║  %d × %-2d = %-3d        ║\n", n, i, n * i);
    }
    
    printf("╚════════════════════════╝\n");
}


// ===== PHIÊN BẢN CỰC NGẮN =====
void cuu_chuong() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
        printf("%d × %d = %d\n", n, i, n * i);
}


// ===== IN NHIỀU BẢNG CỬU CHƯƠNG =====
void nhieu_bang() {
    int n, i, j;
    
    printf("Nhập số chương (vd: 5 để in từ 1-5): ");
    scanf("%d", &n);
    
    printf("\n");
    for (i = 1; i <= n; i++) {
        printf("=== BẢNG %d ===\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d × %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}


// ===== IN NGANG (NHIỀU BẢNG) =====
void in_ngang() {
    int n, i, j;
    
    printf("In bảng cửu chương từ 1 đến: ");
    scanf("%d", &n);
    
    printf("\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d×%d=%-3d  ", j, i, j * i);
        }
        printf("\n");
    }
}