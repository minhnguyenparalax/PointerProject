#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    // Cấp phát bộ nhớ động cho mảng số thực
    double* arr = new double[n];

    // Nhập dữ liệu
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> *(arr + i); // hoặc arr[i]
    }

    // Tính trung bình cộng
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    double mean = sum / n;

    // Tính độ lệch chuẩn
    double variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(*(arr + i) - mean, 2);
    }
    double stddev = sqrt(variance / n);

    // In kết quả
    printf("Trung binh cong: %.2f\n", mean);
    printf("Do lech chuan: %.2f\n", stddev);

    // Giải phóng bộ nhớ
    delete[] arr;

    return 0;
}
