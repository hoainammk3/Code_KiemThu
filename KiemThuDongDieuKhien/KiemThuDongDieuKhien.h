#pragma once
#include "../KiemThuChucNang/KiemThuChucNang.h"

void KiemThuDongDieuKhien()
{
    int num_testcase = 6;
    int count = 1;
    while (count <= num_testcase) {
        string nameFile = "KiemThuDongDieuKhien/testcase" + to_string(count) + ".txt";
        // Mở file "data.txt" để đọc
        ifstream file(nameFile);
        
        // Kiểm tra nếu file mở thành công
        if (!file.is_open()) {
            cout << "Error opening file!" << endl;
            return;
        }

        // Đọc 3 số thực từ file
        int n;
        file >> n;

        // In ra các giá trị đã đọc
        if(Sponsor(n) != "Invalid Value")
            cout << "Nhà tài trợ đóng góp " << n << " triệu VNĐ đạt " << Sponsor(n) << endl;
        else cout << Sponsor(n) << endl;
        // Đóng file
        file.close();
        count++;
    }
    
}