#include <stdio.h>

// ===== HÀM NHẬP ĐIỂM =====
void nhapdiem() {
    float van, toan, anh, diem_ck;
    
    // Nhập điểm
    printf("Nhập điểm Văn: ");
    scanf("%f", &van);
    
    printf("Nhập điểm Toán: ");
    scanf("%f", &toan);
    
    printf("Nhập điểm Anh Văn: ");
    scanf("%f", &anh);
    
    // Tính điểm cuối kỳ
    diem_ck = (van * 2 + toan * 2 + anh) / 5;
    
    // In kết quả
    printf("\n========== KẾT QUẢ ==========\n");
    printf("Điểm Văn: %.1f\n", van);
    printf("Điểm Toán: %.1f\n", toan);
    printf("Điểm Anh Văn: %.1f\n", anh);
    printf("Điểm cuối kỳ: %.2f\n", diem_ck);
    printf("Học lực: ");
    
    // Xét học lực
    if (diem_ck < 3)
        printf("YẾU\n");
    else if (diem_ck < 5)
        printf("TRUNG BÌNH\n");
    else if (diem_ck < 8)
        printf("KHÁ\n");
    else
        printf("GIỎI\n");
    
    printf("=============================\n");
}