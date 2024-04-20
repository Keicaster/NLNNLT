#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Struct để lưu trữ thông tin về MSSV
struct Student {
    std::string mssv;
    int number;
    int tail;

    // Constructor
    Student(std::string mssv) : mssv(mssv) {
        number = std::stoi(mssv.substr(0, 4));
        tail = std::stoi(mssv.substr(7, 4));
    }
};

// Hàm so sánh để sắp xếp các sinh viên theo yêu cầu
bool compareStudents(const Student& s1, const Student& s2) {
    if (s1.number != s2.number) {
        return s1.number < s2.number;
    }
    return s1.tail < s2.tail;
}

int main() {
    // Khai báo và khởi tạo mảng chuỗi chứa MSSV ban đầu
    std::string mssv_dhv[] = {"", "2301CT1234", "2302CT3456", "2305CT1010", "2305CT3999", "2304CT0002"};
    int n = sizeof(mssv_dhv) / sizeof(mssv_dhv[0]);

    // Tạo một vector để lưu trữ thông tin của các sinh viên
    std::vector<Student> students;

    // Đổ dữ liệu từ mảng ban đầu vào vector students
    for (int i = 0; i < n; ++i) {
        if (!mssv_dhv[i].empty()) {
            students.push_back(Student(mssv_dhv[i]));
        }
    }

    // Sắp xếp vector students theo yêu cầu
    std::sort(students.begin(), students.end(), compareStudents);

    // In mảng MSSV ban đầu
    std::cout << "Mang MSSV ban dau:\n";
    for (const auto& mssv : mssv_dhv) {
        if (!mssv.empty()) {
            std::cout << mssv << std::endl;
        } else {
            std::cout << "(Du lieu bi thieu)" << std::endl;
        }
    }

    // In mảng đã sắp xếp
    std::cout << "\nMang MSSV da sap xep:\n";
    for (const auto& student : students) {
        std::cout << student.mssv << std::endl;
    }

    return 0;
}
