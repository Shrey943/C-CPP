#include <iostream>
using namespace std;

int square(int);

int main()
{
    int a = 45;
    int b;

    cout << "square of " << a << " is " << square(a);
    return 0;
}

inline int square(int a)
{

    return a * a;
}
