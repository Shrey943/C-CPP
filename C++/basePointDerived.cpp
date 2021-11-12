#include <iostream>
using namespace std;

class Base
{
    int test;
public:
    int baseVar;
    Base()
    {
        baseVar = 0;
        std::cout << "HEllo mf world, I'm speaking from BAse constructor." << std::endl;
    }
    void show()
    {
        std::cout << "Value of Base Variable: " << baseVar << std::endl;
    }
};
class Derived : public Base
{
public:
    int derivedVar;
    Derived()
    {
        baseVar = 0;
        derivedVar = 1;
        std::cout << "HEllo mf world, I'm speaking from DERIVED constructor." << std::endl;
    }
    void show()
    {
        std::cout << "Value of Derived Variable: " << derivedVar << std::endl;
    }
};
int main()
{
    Base baseObj;
    Derived derObj;

    derObj.show();

    Base *basePointer;
    Derived *derPointer;

    basePointer = &derObj; // YE DEKHO, APAN BASE KE POINTER KO DERIVED KA OBJECT PAKDA SKTE H

    basePointer->baseVar = 10;
    basePointer->show();

    // basePointer->test = 10; // Aisa nai h bhai ki agar base ka pointer h toh private bhi access kr le

    // basePointer->derivedVar = 5; // Ye nai kr skte bhai, Base class ka pointer h toh sirf base class ke members ko hi
    // Access kr skte h

    cout << "Base Variable of derived object: " << derObj.baseVar << endl; //  Ye dikhaane ki bhaiya jo bhi changes hue h uper vo sb isi object mai h

    derPointer = &derObj;

    // derPointer = &baseObj; // ERROR

    derPointer->show();
    derPointer->baseVar = 12; // Ye kr skta hu yaar mai

    cout << "Base var using derived pointer: " << derPointer->baseVar << endl;

    return 0;
}