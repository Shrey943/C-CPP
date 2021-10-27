#include <iostream>
using namespace std;

class A
{

    int a, b;

public:
    A(int a, int b)
    {
        // a = a; // Ab dekho, C++ local variables ko sbse jyada priority deta h toh iske liye dono a equal h(local waale hi) aur apne main
        // b = b; // a mai garbage value hi rahegi

        // Kitna accha hota na agar apne haath mai vo object hota jisne call kia h is function ko, fir apan easily change kr dete
        // Above problem ko dur karne this kaam aata

        // this.a = a; // BUT, this ek pointer h object ka toh direct dot se access nai kr skte apan
        this->a = a;
        this->b = b; // Vese toh apan parameters mai name change kr ke kaam chala skte the but aisa krne se systematic rehta h kaaam
    }

    // But this ka bs yahi use nai h, neeche dekho ek mst use

    A *swap()
    {
        int temp = a;
        a = b;
        b = temp;
        return this;
    }

    A &swap2() // Ab A type ke object ka reference return kr raye
    {
        int temp = a;
        a = b;
        b = temp;
        return *this; // Returning the value inside pointer, boletoh object
    }

    void getData()
    {
        std::cout << "Value of a is: " << a << " and value of b is: " << b << std::endl;
    }
};

int main()
{
    A a(1,2); 

    a.getData();

    a.swap()->getData(); // Ye dekh bete, yahi karne swap likha tha :sunglasses:

    a.swap2().getData(); // Aur pointer ki jagah object ka reference hi return kr ke ye kr skte h apan
    return 0;
}