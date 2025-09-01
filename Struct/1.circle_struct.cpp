// // //42
// // bài 1
// // Nhập vào dữ liệu bán kính hình tròn
// // Tính và in ra màn hình chu vi và diện tích hình tròn đó
// Ví dụ:
// Nhap ban kinh: 3
// Chu vi hinh tron: 18.84
// Dien tich hinh tron: 28.26

#include<iostream>
#include<string>

using namespace std;

struct Circle
{
    float r;

    friend istream& operator>>(istream &is, Circle &circle)
    {
        //Nhap ban kinh
        is>>circle.r;
        return is;
    }

    float chu_vi()
    {
        return r*2*3.14;
    }
    float dien_tich()
    {
        return r*r*3.14;
    }
};

int main()
{
    Circle x;
    cout<<"Nhap ban kinh hinh tron: ";
    cin>>x.r;
    cout<<"Chu vi hinh tron: ";
    cout<<x.chu_vi();

    cout<<"\nDien tich hinh tron la: "<<x.dien_tich();
    return 0;

}