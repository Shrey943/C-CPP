#include <iostream>
using namespace std;

int main()
{
    int a = 123;
    int &b = a;

    int *ptr;    //pointer
    int arr[10]; // array

    //Important
    ptr = arr; //arr is already a address of first value so address of operator(&) not needed

    std::cout << "address of a : " << a << std::endl;
    std::cout << "address of b : " << b << std::endl; // Both have same address

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    for (int j = 0; j < 10; j++)
    {
        //Important : We can increase the address of pointer just by increment operator(ptr++) which normally formula is
        //            ptr + sizeof(int)
        std::cout << "Value of (ptr + " << j + 1 << ") : " << *ptr << "\tAddress of (ptr + " << j + 1 << ") : " << ptr << std::endl;
        ptr++;
    }

    return 0;
}