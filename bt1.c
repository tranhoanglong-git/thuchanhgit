# Nhập tháng từ người dùng
thang = int(input("Nhập tháng (1-12): "))

# Xác định số ngày trong tháng
if thang == 1 or thang == 3 or thang == 5 or thang == 7 or thang == 8 or thang == 10 or thang == 12:
    so_ngay = 31
elif thang == 4 or thang == 6 or thang == 9 or thang == 11:
    so_ngay = 30
elif thang == 2:
    # Nhập năm để xác định tháng 2 có 28 hay 29 ngày
    nam = int(input("Nhập năm: "))
    if (nam % 4 == 0 and nam % 100 != 0) or (nam % 400 == 0):
        so_ngay = 29  # Năm nhuận
    else:
        so_ngay = 28  # Năm không nhuận
else:
    so_ngay = "Tháng không hợp lệ"

print(f"Số ngày trong tháng {thang} là: {so_ngay}")
