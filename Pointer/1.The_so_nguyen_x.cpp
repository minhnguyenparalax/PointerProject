//Tao mang dong co n phan tu
//Nhập vào số nguyên x và thêm x vào cuối mảng vừa tạo


#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void input_interger(string label, int &n);
void input_array(string label, int* arr, int size);
void print_array(int *arr, int size);
void push(int* &arr, int &size, int new_element);
int main()
{
    int n;
    input_interger("Nhap so luong phan tu n = ", n);

    int *numbers = new int[n];
    input_array("Nhap mang: ", numbers , n );

    cout<<"In mang: "<<endl;
    print_array(numbers, n);


    cout<<"\nThem so x vao cuoi mang: ";
    int x;
    cin>>x;
    push(numbers, n, x);

    cout<<"\nMang sau khi them x là: ";
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
        cout<<"arr["<<i<<"] = ";
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

void push(int* &arr, int &size, int new_element)
{
    // Tạo một mảng mới có size +1
    //Copy mảng cũ sang mảng mới
    //Gán giá trị của new_element vào vị trí new_arr[size]

    int *new_array = new int[size+1];

    for(int i = 0; i<size; i++)
    {
        new_array[i] = arr[i];
    }

    new_array[size] = new_element;

    delete[] arr;
    arr = new_array;
    size++;
    
    

}