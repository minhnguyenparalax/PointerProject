// Tạo mảng động của n phần tử
// Nhập vào số nguyên dương x và y
// Thêm y vào vị trị x
// Ví dụ:
// n = 4
// Nhap mang: 1 2 3 4
// y = 7
// x = 1
// Mang sau khi them: 1 7 2 3 4

#include<iostream>
#include<string>

using namespace std;

void input_interger(string label, int &n);
void input_array(string label, int *arr, int size);
void print_array(int *arr, int size);
void input_postition(string label, int &position);
void insert_element(int *arr, int &size, int position, int element);


int main()
{ 
    //Nhap n
    int n;
    input_interger("Nhap n = ", n);

    //Nhap mang
    int *numbers = new int[n];
    input_array("\nNhap mang:\n", numbers, n);

    //In mang
    cout<<"\nIn mang: ";
    print_array(numbers, n);

    //Nhap vi tri
    int x;
    input_postition("\nNhap vi tri x = ", x);

    //Chen phan tu moi vao vi tri x
    int y;
    cout<<"\nNhap y = ";
    cin>>y;
    insert_element(numbers,n,x,y);

    //In mang moi sau khi chen
    cout<<"\nMang moi sau khi chen:";
    print_array(numbers,n);


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
}
void print_array(int *arr, int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void input_postition(string label, int &position)
{
    cout<<label;
    cin>>position;
}
void insert_element(int *arr, int &size, int position, int element)
{
    for(int i = size; i>= position; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    size++;
    
}