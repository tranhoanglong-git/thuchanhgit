#include <stdio.h>

// ===== CÁCH 1: DÙNG VÒNG LẶP (ĐƠN GIẢN NHẤT) =====
int giai_thua(int n) {
    int kq = 1, i;
    for (i = 1; i <= n; i++)
        kq *= i;
    return kq;
}

// ===== CÁCH 2: DÙNG ĐỆ QUY (NGẮN NHẤT) =====
int giai_thua_dequy(int n) {
    if (n <= 1)
        return 1;
    return n * giai_thua_dequy(n - 1);
}

// ===== CÁCH 3: ĐỆ QUY 1 DÒNG =====
int gt(int n) {
    return n <= 1 ? 1 : n * gt(n - 1);
}

// ===== MAIN =====
int main() {
    int n;
    
    printf("Nhập n: ");
    scanf("%d", &n);
    
    printf("\n%d! = %d\n", n, giai_thua(n));
    
    return 0;
}


/* ===== VÍ DỤ SỬ DỤNG ===== */

// Tính giai thừa từ 1 đến 10
void test() {
    printf("Bảng giai thừa:\n");
    for (int i = 0; i <= 10; i++)
        printf("%d! = %d\n", i, giai_thua(i));
}

// Kiểm tra với số lớn (dùng long long)
long long giai_thua_lon(int n) {
    long long kq = 1;
    for (int i = 1; i <= n; i++)
        kq *= i;
    return kq;
}

// Tính giai thừa có kiểm tra lỗi
int giai_thua_an_toan(int n) {
    if (n < 0) {
        printf("Lỗi: n phải >= 0\n");
        return -1;
    }
    if (n > 12) {
        printf("Cảnh báo: Kết quả có thể tràn số!\n");
    }
    
    int kq = 1;
    for (int i = 1; i <= n; i++)
        kq *= i;
    return kq;
}