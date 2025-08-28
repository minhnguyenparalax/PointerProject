// //Tạo mảng động có n phần tử
// //Sắp xếp mảng đó theo thư tự tăng dần và in ra
// Ví dụ:
// n = 4
// Nhap mang: 4 3 2 1
// Mang sau khi sap xep: 1 2 3 4

#include<iostream>
#include<string>
using namespace std;
void input_interger(string label, int &n);
void input_array(string label, int *arr, int size);
void print_array(int *arr, int size);
void sort_array(int *arr, int size);

int main()
{
    int n;
    input_interger("\nNhap n = ", n);
    int *numbers = new int[n]; 
    input_array("\nNhap mang: ",numbers, n);
    cout<<"\nIn mang:\n";
    print_array(numbers,n);
    sort_array(numbers, n);
    cout<<"\nMang sau khi sap xep:\n";
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
    for(int i = 0; i<size; i++)
    {
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
void sort_array(int *arr, int size)
{
    for(int i = size-1; i>0; i--)
    {
        for(int j = 0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                //a[j+1] = a[j];
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;

            }

        }
    }

}