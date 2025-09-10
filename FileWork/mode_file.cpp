#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fs;

    //ios::in Mở file ở chế độ đọc nếu file đã tồn tại
    //fs.open("test.txt", ios::in);

    //ios::out Ghi đè nội dung lên file cũ, hoặc tạo file mới nếu ko tồn tại
    //fs.open("test1.txt", ios::out);

    //ios::trunc Mở file ở chế độ ghi và xóa hết nội dung file, nếu file ko tồn tại thì tạo file
    //fs.open("test.txt", ios::out | ios::trunc);
    

    //ios::app: Them vào cuối chứ ko xóa dữ liệu cũ
    fs.open("test2.txt", ios::out | ios::app);
    if(!fs.is_open())
    {
        cout<<"Khong mo duoc:";
        return 1;
    }

    cout<<"Hg";
    fs.close();

    
    return 0;
}