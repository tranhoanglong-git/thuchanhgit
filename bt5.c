#include <stdio.h>

// ===== HÀM TÍNH TIỀN ĐIỆN (CHỈ DÙNG VOID) =====
void tinh_tien_dien() {
    int so_dien;
    float tien = 0;
    
    printf("Nhập số điện (kWh): ");
    scanf("%d", &so_dien);
    
    if (so_dien <= 100) {
        tien = so_dien * 500;
    }
    else if (so_dien <= 350) {
        tien = 100 * 500 + (so_dien - 100) * 550;
    }
    else if (so_dien <= 650) {
        tien = 100 * 500 + 250 * 550 + (so_dien - 350) * 650;
    }
    else {
        tien = 100 * 500 + 250 * 550 + (so_dien - 350) * 650;
    }
    
    printf("Tổng tiền: %.0f VNĐ\n", tien);
}


// ===== PHIÊN BẢN CHI TIẾT =====
void tinh_tien_dien_chi_tiet() {
    int so_dien;
    float tien = 0;
    
    printf("=============================\n");
    printf("  TÍNH TIỀN ĐIỆN\n");
    printf("=============================\n");
    printf("Nhập số điện (kWh): ");
    scanf("%d", &so_dien);
    
    printf("\n===== CHI TIẾT HÓA ĐƠN =====\n");
    
    if (so_dien <= 100) {
        printf("Bậc 1: %d kWh × 500 = %.0f\n", so_dien, so_dien * 500.0);
        tien = so_dien * 500;
    }
    else if (so_dien <= 350) {
        printf("Bậc 1: 100 kWh × 500 = 50,000\n");
        printf("Bậc 2: %d kWh × 550 = %.0f\n", so_dien - 100, (so_dien - 100) * 550.0);
        tien = 100 * 500 + (so_dien - 100) * 550;
    }
    else if (so_dien <= 650) {
        printf("Bậc 1: 100 kWh × 500 = 50,000\n");
        printf("Bậc 2: 250 kWh × 550 = 137,500\n");
        printf("Bậc 3: %d kWh × 650 = %.0f\n", so_dien - 350, (so_dien - 350) * 650.0);
        tien = 100 * 500 + 250 * 550 + (so_dien - 350) * 650;
    }
    else {
        printf("Bậc 1: 100 kWh × 500 = 50,000\n");
        printf("Bậc 2: 250 kWh × 550 = 137,500\n");
        printf("Bậc 3: %d kWh × 650 = %.0f\n", so_dien - 350, (so_dien - 350) * 650.0);
        tien = 100 * 500 + 250 * 550 + (so_dien - 350) * 650;
    }
    
    printf("============================\n");
    printf("TỔNG TIỀN: %.0f VNĐ\n", tien);
    printf("============================\n");
}


// ===== PHIÊN BẢN CỰC NGẮN =====
void tinh_tien() {
    int kw;
    float t;
    scanf("%d", &kw);
    if (kw <= 100)
        t = kw * 500;
    else if (kw <= 350)
        t = 50000 + (kw - 100) * 550;
    else
        t = 187500 + (kw - 350) * 650;
    printf("%.0f VNĐ\n", t);
}