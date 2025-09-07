//Chương trình quản lý sản phâm gồm các chức năng:
//1. Xem danh sách sản phẩm
//2. Thêm sản phẩm mới
//3. Xóa sản phẩm

#include<iostream>
#include<string>
using namespace std;

//1.Struct
struct Product
{
    string name;
    int price;
    int quantity;

    friend istream& operator>>(istream &is, Product& products)
    {
        cout<<"Nhap ten: ";
        is.ignore();
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

//2.Các hàm nguyên mẫu
void show_menu_choice(int &choice);
void chose(string label, int &choice);
void show_list_product(string label, Product* &products, int size );
void add_new_product(string label, Product *&products, int &size);
void delete_product(string label,  Product *products, int size);


//3.Main
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
        cout<<"Ban co muon tiep tuc khong(1/0): ";
        bool is_continue;
        cin>>is_continue;
        
        if(!is_continue)
        {

            cout<<"Deo co nhu cau. Oke!"<<endl;
            break;
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
void add_new_product(string label, Product* &products, int &size)
{
    //Khởi tạo biến new_product 
    //Nhập các thuộc tính cho new_product
    //Khởi tạo mảng tmp_product có kích cỡ new_size = size +1
    //Copy giá trị các phần tử của mảng products tương ứng sang mảng new_product
    //Gán new_products[new_size-1] = new_product (phần tử mới)
    //Giải phóng delete[] mảng product
    //Con trỏ product không trỏ vào Product[size] mà trỏ vào Product[new_size]
    //kích size tăng thêm 1 đơn vị, size = new_size

    Product new_products;
    cout<<"\nNhap san pham"<<endl;
    cin>>new_products;

    int new_size = size+1;
    Product *tmp_products = new Product[new_size];
    for(int i = 0; i<size; i++ )
    {
        tmp_products[i] = products[i];
    }
    tmp_products[new_size-1] = new_products;

    delete[] products;
    products = tmp_products;
    size= new_size;

}
void delete_product(string label, Product *products, int size)
{
    cout<<"Nhap ten san pham can xoa: "<<endl;
    string delete_name;
    cin>>ignore();
    
}