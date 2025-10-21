#include <stdio.h>

// ===== CÁCH 1: ĐỌN GIẢN NHẤT =====
void fibonacci(int n) {
    int a = 0, b = 1, c;
    
    printf("Dãy Fibonacci < %d:\n", n);
    
    // In số đầu tiên
    if (a < n)
        printf("%d ", a);
    
    // In các số tiếp theo
    while (b < n) {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

// ===== CÁCH 2: NGẮN GỌN =====
void fibo(int n) {
    int a = 0, b = 1, c;
    while (a < n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

// ===== MAIN =====
int main() {
    int n;
    
    printf("Nhập n: ");
    scanf("%d", &n);
    
    fibonacci(n);
    
    return 0;
}


/* ===== CÁC BIẾN THỂ KHÁC ===== */

// Biến thể 1: In n số Fibonacci đầu tiên
void fibo_n_so(int n) {
    int a = 0, b = 1, c, i;
    printf("%d %d ", a, b);
    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

// Biến thể 2: Dùng mảng
void fibo_mang(int n) {
    int fib[100];
    fib[0] = 0;
    fib[1] = 1;
    
    printf("%d %d ", fib[0], fib[1]);
    
    int i = 2;
    while (1) {
        fib[i] = fib[i-1] + fib[i-2];
        if (fib[i] >= n)
            break;
        printf("%d ", fib[i]);
        i++;
    }
    printf("\n");
}

// Biến thể 3: Đệ quy (chậm, không khuyến khích)
int fibo_dequy(int n) {
    if (n <= 1)
        return n;
    return fibo_dequy(n-1) + fibo_dequy(n-2);
}

void in_fibo_dequy(int max) {
    int i = 0, f;
    while ((f = fibo_dequy(i)) < max) {
        printf("%d ", f);
        i++;
    }
    printf("\n");
}

// Biến thể 4: Tính số Fibonacci thứ n
int fibo_thu_n(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c, i;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Biến thể 5: Kiểm tra số có phải Fibonacci không
int la_fibo(int num) {
    int a = 0, b = 1, c;
    if (num == 0 || num == 1)
        return 1;
    while (b < num) {
        c = a + b;
        a = b;
        b = c;
    }
    return (b == num);
}