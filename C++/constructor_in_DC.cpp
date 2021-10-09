#include <iostream>
using namespace std;

class A
{
    int a;

protected:
    int member;
    A()
    {
        std::cout << "In class A constructor." << std::endl;
        a = 0;
    }
    A(int a1)
    {
        std::cout << "In class A constructor with 1 parameter." << std::endl;
        a = a1;
    }
};

class B : private A
{
    int b;

public:
    B()
    {
        std::cout << "In class B constructor." << std::endl;
    }

    B(int a) : A(a) // To supply any parameter to base constructors, you needed this constructor. also if you didn't specify the parameter of
    {               // A then default constructor of A will be called

        std::cout << "In class B constructor with 1 parameter." << std::endl;
        b = a;
    }
};
class C : private B // Even A and B are inherited privatly, constructor can be called BUT the constructor must be declared publically or protected
{
    int c;

    // C()                     // CONSTRUCTOR NEEDS TO BE PUBLIC
    // {
    //     std::cout << "In class C constructor." << std::endl;
    // }

// protected:       // Protected bhi nai chalega 
public:
    C()
    {
        std::cout << "In class C constructor." << std::endl;
    }

    // C(int a) : B(a), A(a)        // Can't access A
    C(int a) : B(a)
    {
        std::cout << "In class C constructor with 1 parameter." << std::endl;
        c = a;
    }
};

class D : B , virtual C{  // virtual ke karan ab pehle C ka constructor run karega(aur since C A,B ki child h toh A then B then C ka constructor )
    int d;

    public:
        D(int b1,int c1,int d1) : C(c1), B(b1) // Yaha C ya B pehle likhne se kuch nai hota
        { 
            std::cout << "In class D constructor with 3 parameter." << std::endl;
            d = d1;
        }
};

int main()
{
    C obj(8990);

    cout << endl;

    D obj1(1,2,3);
    

    return 0;
}
