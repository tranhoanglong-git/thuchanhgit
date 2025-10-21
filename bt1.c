#include <iostream>
using namespace std;

void in_so_ngay_thang() {
    int thang, nam;
    
    // Nhập tháng từ người dùng
    cout << "Nhập tháng (1-12): ";
    cin >> thang;
    
    // Xác định số ngày trong tháng
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        cout << "Số ngày trong tháng " << thang << " là: 31" << endl;
    } 
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        cout << "Số ngày trong tháng " << thang << " là: 30" << endl;
    } 
    else if (thang == 2) {
        // Nhập năm để xác định tháng 2 có 28 hay 29 ngày
        cout << "Nhập năm: ";
        cin >> nam;
        
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            cout << "Số ngày trong tháng " << thang << " năm " << nam << " là: 29" << endl; // Năm nhuận
        } else {
            cout << "Số ngày trong tháng " << thang << " năm " << nam << " là: 28" << endl; // Năm không nhuận
        }
    } 
    else {
        cout << "Tháng không hợp lệ!" << endl;
    }
}

int main() {
    // Gọi hàm in số ngày trong tháng
    in_so_ngay_thang();
    
    return 0;
}
