#include <iostream>
using namespace std; // written so we need not to write std:: again and again

int a = 123; // Global(scope) variable

namespace shrey
{
    int a = 234; // namespace variable, can be accessed using namespace only, also since can access anytime at any part hence kind of globally
}

int main()
{
    int a = 345;
    cout << a << "\n";
    cout << shrey::a; //syntax to access namespace
    return 0;
}