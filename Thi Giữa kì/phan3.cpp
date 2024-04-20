#include <iostream>
#include <string>

int main() {
    // Khai báo và khởi tạo mảng chuỗi chứa MSSV
    std::string mssv_dhv[5] = {"", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};

    // In danh sách MSSV theo thứ tự mặc định của mảng
    std::cout << "Danh sach MSSV DHV:\n";
    for (int i = 0; i < 5; ++i) {
        if (!mssv_dhv[i].empty()) {
            std::cout << mssv_dhv[i] << std::endl;
        } else {
            std::cout << "(Du lieu bi thieu)" << std::endl;
        }
    }

    return 0;
}
