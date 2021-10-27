#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
        std::cout << "In default constructor." << std::endl;
    }
    Complex(int a, int b) : real(a), imag(b)
    {
        std::cout << "In constructor" << std::endl;
    }
    void getData()
    {
        std::cout << "Number is: " << real << " + " << imag << "i" << std::endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imag = b;
    }
};
int main()
{
    Complex c1;
    c1.getData();

    Complex *c2 = new Complex; // Calls default constructor
    (*c2).setData(89, 69);     // parenthesis is required because precedency of dot is greater than * toh pehle * call ho isiliye ()
    c2->getData();             // . operator ki jagah arrow operator bhi use kr skte h.

    Complex *c3 = new Complex(1, 2); // Calls constructor
    c3->getData();

    Complex ptr1[10]; // calls 10 default constructor, but in static memory

    Complex *ptr = new Complex[10]; // Calls 10 default constructor, but objects are in dynamic memory

    for (int i = 0; i < 10; i++)
    {
        ptr[i].setData(i, i + 2); // ptr[i], gives value at i index hemce arrow operator isn't used
        // Is method mai, ptr ki value change nai hogi
    }

    delete c2;
    c2->getData(); // gives garbage values.

    for (int i = 0; i < 10; i++)
    {
        ptr->getData(); // Call a function through pointer, uper isiliye dereference operator nai laga kyo ki square brackets, ander ki value dete h
        ptr++;          // na ki pointer, aur ptr++ kr  ke bhi kr skte ho
        // Is method mai ptr ki value increment ho rai h, mtlb at last of loop ptr will point to nothing. 
    }

    return 0;
}