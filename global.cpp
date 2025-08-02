#include <iostream>

int global_var = 1;
int a,b,c;
int *p;

int main()
{
    
    std::cout << "Main scope: " << global_var << std::endl;

    int global_var = 3;
    { // Phạm vi 1
        int global_var = 4;
        std::cout << "Scope 1: " << global_var << std::endl;
    }

    { // Phạm vi 2
        std::cout << "Scope 2: " << global_var << std::endl;
    }
s
    return 0;
}