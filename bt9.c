#include <stdio.h>

int main() {
    int n, i, current, expected;
    
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    
    do {
        printf("Bat dau nhap day so tu 1 den %d:\n", n);
        expected = 1; // Số mong đợi tiếp theo
        int valid = 1; // Cờ kiểm tra tính hợp lệ
        
        for (i = 1; i <= n; i++) {
            printf("Nhap so thu %d: ", i);
            scanf("%d", &current);
            
            if (current != expected) {
                printf("Sai! Ban nhap %d nhung dang mong doi %d.\n", current, expected);
                printf("Vui long nhap lai tu dau!\n\n");
                valid = 0;
                break;
            }
            expected++; // Tăng số mong đợi lên 1
        }
        
        // Nếu nhập đúng hết
        if (valid && expected == n + 1) {
            printf("Chuc mung! Ban da nhap dung day so tu 1 den %d.\n", n);
            break;
        }
        
    } while (1); // Lặp vô hạn cho đến khi nhập đúng
    
    return 0;
}