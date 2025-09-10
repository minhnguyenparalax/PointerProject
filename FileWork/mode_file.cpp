#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fs;

    //ios::in Mở file ở chế độ đọc nếu file đã tồn tại
    //fs.open("test.txt", ios::in);

    //ios::out Ghi đè nội dung lên file cũ, hoặc tạo file mới nếu ko tồn tại
    fs.open("test.txt", ios::out);
    
    if(!fs.is_open())
    {
        cout<<"Khong mo duoc:";
        return 1;
    }

    cout<<"Hi";
    fs.close();

    
    return 0;
}