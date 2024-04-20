#include <iostream>
#include <string>

int main() {
    // Khai báo và khởi tạo mảng chuỗi chứa MSSV
    std::string mssv_dhv[5] = {"", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};

    // Hiển thị danh sách MSSV trước khi thay đổi
    std::cout << "Danh sach MSSV DHV truoc khi thay doi:\n";
    for (const auto& mssv : mssv_dhv) {
        if (!mssv.empty()) {
            std::cout << mssv << std::endl;
        } else {
            std::cout << "(Du lieu bi thieu)" << std::endl;
        }
    }

    // Yêu cầu người dùng nhập MSSV của mình
    std::cout << "\nNhap MSSV cua ban: ";
    std::cin >> mssv_dhv[0];

    // Hiển thị lại danh sách MSSV sau khi đã nhập
    std::cout << "\nDanh sach MSSV DHV sau khi thay doi:\n";
    for (const auto& mssv : mssv_dhv) {
        if (!mssv.empty()) {
            std::cout << mssv << std::endl;
        } else {
            std::cout << "(Du lieu bi thieu)" << std::endl;
        }
    }

    return 0;
}
