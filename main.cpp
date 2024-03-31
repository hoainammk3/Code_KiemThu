#include "KiemThuChucNang/KiemThuChucNang.h"
#include "KiemThuDongDieuKhien/KiemThuDongDieuKhien.h"
#include "KiemThuDongDuLieu/KiemThuDongDuLieu.h"

int main()
{
    cout<<"==================Kiểm Thử Chức Năng (bảng quyết định)================="<<endl;
    KiemThuChucNang();
    cout<<endl;

    cout<<"==========Kiểm Thử Dòng Điều Khiển=============="<<endl;
    KiemThuDongDieuKhien();
    cout<<endl;

    cout<<"============Kiểm Thử Dòng Dữ Liệu=============="<<endl;
    KiemThuDongDuLieu();
    cout<<endl;
}