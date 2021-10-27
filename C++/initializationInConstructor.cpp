#include <iostream>

using namespace std;

class A
{
    int a, b, c;
    int d;
    int e;

public: // Public is needed to initialize in this way
    // A(int p, int q, int r, int s) : a(p), b(q), c(r)
    // A(int p, int q, int r, int s) : d(p), b(q), c(r), a(p + 12)
    // A(int p, int q, int r, int s) : a(p), b(q), c(r)
    A(int p, int q, int r) : e(p), a(r), d(e + a)
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
        cout << "Value of d: " << d << endl;
        cout << "Value of e: " << e << endl;

        // cout << "Last argument entered is: " << s << endl;
    }
};

int main()
{
    A obj1(1, 2, 3);

    return 0;
}
