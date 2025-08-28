//Tạo Mảng động có n phần tử nguyên
//Nhập một số nguyên dương x
//Xóa phần tử ở vị trí x
//Ví dụ:
//n = 4
//Nhap mang: 1 2 3 4
//x = 1
//Mang sau khi xoa: 1 3 4

#include<iostream>
#include<string>
using namespace std;

void input_interger(string label, int &n);
void input_array(string label, int *arr, int size);
void print_array(int *arr, int size);
void delete_position(int *arr, int &size, int position );

int main()
{
    //Nhap so luong phan tu n
    int n;
    input_interger("Nhap n = ", n);

    //Nhap mang
    int *numbers = new int[n];
    input_array("\nNhap mang:\n", numbers, n);

    //In mang
    cout<<"In mang:\n";
    print_array(numbers, n);

    //Xoa mang
    int x;
    cout<<"\nNhap vi tri can xoa: ";
    cout<<"\nx = ";
    cin>>x;
    delete_position(numbers, n, x);

    //In mang sau khi xoa
    print_array(numbers, n);
    return 0;
}

void input_interger(string label, int &n)
{
    cout<<label;
    cin>>n;
}

void input_array(string label, int *arr, int size)
{
    cout<<label;
    for(int i = 0; i<size; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
}

void print_array(int *arr, int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void delete_position(int *arr, int &size, int position)
{
    for(int i = position; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size = size -1;

}