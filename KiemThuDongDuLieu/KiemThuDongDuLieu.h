#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

float Min3Number(float a, float b, float c)
{
   float min = a;
   if (min > b) min = b;
   if (min > c) min = c;
   return min;  
}

void KiemThuDongDuLieu()
{
    int num_testcase = 4;
    int count = 1;
    while (count <= num_testcase) {
        string nameFile ="KiemThuDongDuLieu/testcase" + to_string(count) + ".txt";
        // Mở file "data.txt" để đọc
        ifstream file(nameFile);
        
        // Kiểm tra nếu file mở thành công
        if (!file.is_open()) {
            cout << "Error opening file!" << endl;
            return ;
        }

        // Đọc 3 số thực từ file
        float a=1, b=2, c=3;
        file >> a >> b >> c;

        cout<<"File: "<<nameFile<<" chứa 3 số: "<<a<<"; "<<b<<"; "<<c
            <<" và số nhỏ nhất trong 3 số là: "<<Min3Number(a, b, c)<<endl;
        // Đóng file
        file.close();
        count++;
    }
}