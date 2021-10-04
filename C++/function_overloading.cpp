#include <iostream>

using namespace std;

float volume(int a)
{
    return a * a * a;
};

float volume(int l, int b, int h)
{
    return l * b * h;
};

float volume(double r) //since normal 2.4 is double
{
    return (4 / 3) * (3.14) * r * r * r;
};

int main()
{
    // cout << "Volume of cube with side 4 is " << volume(4.0) << endl; // Now it will run function with double as argument
    cout << "Volume of cube with side 4 is " << volume(4) << endl;
    cout << "Volume of cuboid with l = 2, b= 4, h= 5 is " << volume(2, 4, 5) << endl;
    cout << "Volume of sphere with radius 2.5 is " << volume(2.5) << endl;

    // If i give any float value then it will give error on which to convert, int or float

    return 0;
}