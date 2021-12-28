#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    Fraction(int numerator = 0, int denominator = 1)
    {

        this->numerator = numerator; // Remember this is a pointer
        this->denominator = denominator;
    }

    // Unary operator overloading

    void operator+() // Unary operator: require only 1 operand
    {
        // this function will add 1 to it's own fraction number like (1/2) + 1  = 3/2

        numerator = numerator + denominator; // check kr le bhai ye hi hota h jb 1 add krte h, deno same rahega
    }

    // Binary operator overloading : Now since its a binary operator it needs to return the result (Takes 1 argument, one is itself)

    Fraction operator+(Fraction const &obj) // Remember: Whenever you take any object of class as argument, always have it as constant. So that
    {                                       //           you dont need to worry about messing up things

        std::cout << "This is for the fraction: ";
        this->print();

        Fraction newObj;

        newObj.denominator = denominator * obj.denominator;
        newObj.numerator = (numerator * obj.denominator) + (denominator * obj.numerator);

        return newObj;
    }

    // Fraction operator+(Fraction const &c1, Fraction const &c2)  // Gives error, as an frnd function kr skte ho tum aisa
    // {
    //     return Fraction(c1.numerator + c2.numerator, c1.denominator + c2.denominator);
    // }

    friend Fraction operator+(Fraction &c1, Fraction &c2); // Aisa krne mai this c1 ban jata h

    void print()
    {
        std::cout << "The Numerator is : " << numerator << " And the denominator is : " << denominator << std::endl;
    }

    // Conversion operator overloading
    operator float() const // It returns float value of the fraction ** It is a Unary operator hence don't take arguments.**
    {
        return float(numerator) / float(denominator); // used float function to convert int to float, hence result is also float.
    }
};

Fraction operator+(Fraction &c1, Fraction &c2) // REMEMBER: const toh yaha bhi use krna chahiye tha but fir member function use nai kr paate
{
    std::cout << "This is for the fraction: ";
    c1.print(); // agar c1 constant hota toh ye fucntion call nai hota.

    Fraction newObj;

    newObj.denominator = c1.denominator * c2.denominator;
    newObj.numerator = (c1.numerator * c2.denominator) + (c1.denominator * c2.numerator);

    return newObj;
}

int main()
{
    Fraction f1(11, 12);
    f1.print();

    +f1;
    f1.print();

    Fraction f2(1, 2), f3(4, 5), f4;

    // *** f2 ke liye call hoga function
    f4 = f2 + f3; // Noticed? default assignment operator is called.

    f4.print();

    cout << "Float value of the fraction is: " << float(f1) << endl; // Use of Conversion operator 
    return 0;
}