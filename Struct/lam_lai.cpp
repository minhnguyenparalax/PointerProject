//Chương trình quản lý sản phâm gồm các chức năng:
//1. Xem danh sách sản phẩm
//2. Thêm sản phẩm mới
//3. Xóa sản phẩm

#include<iostream>
#include<string>
using namespace std;

struct Product
{
    string name;
    int price;
    int quantity;

};

void show_menu_choice(int choice);
void chose(string label, int &choice);
void show_list_product(string label, Product *products, int size );
void add_new_product(string label, Product *products, int size);
void delete_product(string label,  Product *products, int size);

int main()
{
    int choice;
    int size = 0;
    Product *products = new Product[size];
    while(true)
    {
        
        show_menu_choice(choice);
        
        switch(choice)
        {
            case 1:
                show_list_product("\nXem Danh sach san pham", products, size);
                break;
            case 2:
                add_new_product("\nThem san pham moi", products, size);
                break;
            case 3: 
                delete_product("\nNhap ten san pham can xoa", products, size);
                break;
            
            default:
                cout<<"lua chon khong hop le."<<endl;
            
        }
    }
}


void show_menu_choice(int choice)
{

    cout<<"============MENU===========";
    cout<<"\n1.Xem danh san pham";
    cout<<"\n2.Them san pham moi";
    cout<<"\n3.Xoa san pham";
    chose("\nNhap lua chon: ", choice);

}
void chose(string label, int &choice)
{
    cout<<label;
    cin>>choice;
}
void show_list_product(string label, Product *products, int size )
{

}
void add_new_product(string label, Product *products, int size)
{

}
void delete_product(string label, Product *products, int size)
{
    
}