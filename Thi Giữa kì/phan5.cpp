#include <iostream>
#include <string>

int main() {
    // Khai báo mảng chuỗi chứa MSSV
    std::string mssv_dhv[] = {"", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};

    // Khai báo con trỏ trỏ đến mảng MSSV
    std::string* ptrArrayMSSV = mssv_dhv;

    // Biến cờ để giữ phần tử lớn nhất
    std::string largest_mssv = "";

    // Duyệt qua từng phần tử của mảng
    for (int i = 0; i < 5; ++i) {
        // So sánh MSSV hiện tại với phần tử lớn nhất đã tìm thấy
        if (*(ptrArrayMSSV + i) > largest_mssv) {
            largest_mssv = *(ptrArrayMSSV + i);
        }
    }

    // In phần tử chứa MSSV lớn nhất ra màn hình
    std::cout << "Phan tu chua MSSV lon nhat: " << largest_mssv << std::endl;

    // Tìm địa chỉ của phần tử chứa MSSV lớn nhất
    std::string* ptr_largest_mssv = nullptr;
    for (int i = 0; i < 5; ++i) {
        if (*(ptrArrayMSSV + i) == largest_mssv) {
            ptr_largest_mssv = ptrArrayMSSV + i;
            break;
        }
    }

    // In địa chỉ của phần tử chứa MSSV lớn nhất ra màn hình
    std::cout << "Dia chi cua phan tu chua MSSV lon nhat: " << ptr_largest_mssv << std::endl;

    return 0;
}
