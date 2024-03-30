#include <iostream>
#include <fstream>
#include <string>
#include <limits.h>
using namespace std;

string Sponsor(int n)
{
    if (n < 0 || n > INT_MAX)   return "Invalid Value";
    if (n < 50)     return "Đơn vị đồng hành";
    if (n < 300)    return "Nhà tài trợ đồng";
    if (n < 500)    return "Nhà tài trợ bạc";
    if (n < 1000)   return "Nhà tài trợ vàng";
    return "Nhà tài trợ kim cương";
}

int main()
{
    int num_testcase = 6;
    int count = 1;
    while (count <= num_testcase) {
        string nameFile = "testcase" + to_string(count) + ".txt";
        // Mở file "data.txt" để đọc
        ifstream file(nameFile);
        
        // Kiểm tra nếu file mở thành công
        if (!file.is_open()) {
            cout << "Error opening file!" << endl;
            return 1;
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
    
     
    return 0;
}