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

    friend istream& operator>>(istream &is, Product& products)
    {
        cout<<"Nhap ten: ";
        getline(is, products.name);
        cout<<"Nhap gia: ";
        is>>products.price;
        cout<<"Nhap so luong: ";
        is>>products.quantity;
        return is;
    }

    friend ostream& operator<<(ostream &os, Product& products)
    {
        cout<<"\nten: ";
        os<<products.name;
        cout<<"\ngia: ";
        os<<products.price;
        cout<<"\nso luong: ";
        os<<products.quantity;
        return os;
    }

};

void show_menu_choice(int &choice);
void chose(string label, int &choice);
void show_list_product(string label, Product* &products, int size );
void add_new_product(string label, Product *products, int size);
void delete_product(string label,  Product *products, int size);

int main()
{

    //cout<<p1<<endl;
    int choice;
    int size = 0;
    Product *products = new Product[size];
    while(true)
    {
        
        show_menu_choice(choice);
        system("cls");
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


void show_menu_choice(int &choice)
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
void show_list_product(string label, Product* &products, int size )
{
    if(size == 0)
    {
        cout<<"Khong co san pham nao"<<endl;
    }
    else
    {
        cout<<"\nDanh sach san pham la: ";
        for(int i = 0; i<size; i++)
        {
            cout<<products[i]<<endl;
        }
    }
    
}
void add_new_product(string label, Product *products, int size)
{

}
void delete_product(string label, Product *products, int size)
{
    
}