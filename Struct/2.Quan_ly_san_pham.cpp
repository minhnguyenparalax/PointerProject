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
    float price;
    int soluong;

    friend istream& operator>>(istream &is, Product& products)
    {
        cout<<"Nhap ten: ";
        is.ignore();
        getline(is, products.name);

        cout<<"Nhap gia: ";
        is>>products.price;

        cout<<"Nhap so luong: ";
        is>>products.soluong;
        return is;
    }

    friend ostream& operator<<(ostream &os, Product& products)
    {
        cout<<"\nten: ";
        os<<products.name;

        cout<<"\ngia: ";
        os<<products.price;

        cout<<"\nso luong: ";
        os<<products.soluong;
        return os;
    }


};


int show_menu();
void print_products(Product *products, int size);
void add_product(Product* &products, int &size);
void delete_product(Product* &products, int &size);

int main()
{

    int size = 0;
    Product *products = new Product[size];
    

    while(true)
    {
        
        int chose = show_menu();
        system("cls");
        switch(chose)
        {
            case 1:
                print_products(products, size);
                break;
            case 2:
            //them san pham
                add_product(products, size);
                break;
            case 3:
            //Xoa san pham
                delete_product(products, size);
                break;
            case 0:
                cout<<"Bye Bye!";
                return 0;
            default:
                cout<<"Lua chon khong hop le."<<endl;

        }
        cout<<"Ban co muoon tiep tuc khong?(1/0):";
        bool is_continue;
        cin>> is_continue;

        if(!is_continue)
        {
            cout<<"Cut!";
            break;
        }
    }
    
}

int show_menu()
{
    int chose;
    system("cls");
    cout<<"\n";
    cout<<"===========MENU=========="<<endl;
    cout<<"1.Xem Danh sach san pham"<<endl;
    cout<<"2.Them san pham"<<endl;
    cout<<"3.Xoa san pham"<<endl;
    
    cout<<"0.Thoat chuong trinh"<<endl;

    cout<<"Lua chon cua ban la: ";
    cin >> chose;

    return chose;
}


void print_products(Product *products, int size)
{
    if(size == 0)
    {
        cout<<"Chua co san pham nao"<<endl;
    }

    else
    {
        cout<<"Danh sach san pham: "<<endl;
        for(int i = 0; i<size; i++)
        {
            cout<<products[i]<<endl;
        }
    }
}

void add_product(Product* &products, int &size)
{
    Product new_product;
    cout<<"Nhap thong tin san pham moi: "<<endl;
    cin >> new_product;

    int new_size = size + 1;
    Product *tmp_product = new Product[new_size];

    for(int i = 0; i<size; i++)
    {
        tmp_product[i] = products[i];
    }
    tmp_product[new_size-1] = new_product;
    delete[] products;
    products = tmp_product;
    size = new_size;
    cout<<"them san pham thanh cong!"<<endl;
}

void delete_product(Product* &products, int &size)
{
    cout<<"Nhap ten san pham can xoa:"<<endl;
    string delete_name;
    cin.ignore();
    getline(cin, delete_name);

    int delete_index = -1;
    for(int i =0; i<size; i++)
    {
        if(!delete_name.compare(products[i].name))
        {
            delete_index = i;
            break;
        }
    }

    if(delete_index == -1)
    {
        cout<<"Khong tim thay san pham!"<<endl;
        return;
    }

    for(int i =delete_index; i<size -1; i++)
    {
        products[i] = products[i+1];
    }
    size--;

    Product* tmp_product = new Product[size];
    for(int i =0; i<size; i++)
    {
        tmp_product[i] = products[i];
    }
    delete[] products;

    products = tmp_product;

    cout<<"Xoa thanh cong"<<endl;

}