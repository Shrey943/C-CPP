#include <iostream>
using namespace std;

//Forward declaration
class Complex;

class Calculator
{
    int num;

public:
    // int add(Calculator o1, Complex o2)
    // {                                // Important below
    //     return o1.num + o2.num;     // This will not work here as compiler dont know wheather Complex class will have a num attribute or not
    // }
    friend int add(Calculator, Complex);
};

class Complex
{
    int real;
    int imag;
    int num;
    // friend Complex setSum(Complex, Complex); //Works here also

    /* Very Important Below, it would give an error as it dont know what Calculator is hence forward declaration was important*/

    // friend int Calculator ::add(Calculator, Complex);  //Friend function  of class

    friend int add(Calculator, Complex);
    friend class Calculator;

public:
    void set();
    void get();
    friend Complex setSum(Complex, Complex);
};

Complex setSum(Complex o1, Complex o2)
{ // Object as a parameter and return value

    Complex o3;

    // real = 1234;    // INVALID

    o3.real = o1.real + o2.real; // Without being friend you can't do this
    o3.imag = o1.imag + o2.imag;

    return o3;
}

int add(Calculator o1, Complex o2)
{
    return o1.num + o2.num;
}

int main()
{
    Complex n1, n2, n3;
    n1.set();
    n1.get();
    // n2.setSum(n1, n2); // Invalid as setsum is not a member
    n2.set();
    n2.get();
    // n3.setSum(n1, n2); // Invalid as setsum is not a member
    n3 = setSum(n1, n2);
    n3.get();

    return 0;
}

void Complex::set()
{

    std::cout << "Enter the real part: ";
    cin >> real;
    std::cout << "Enter the imaginary part: ";
    cin >> imag;
}

void Complex::get()
{
    std::cout << endl
              << "Sum of both complex numbers is: " << real << " + " << imag << "i" << std::endl
              << std::endl;
}
