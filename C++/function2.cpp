#include <iostream>
using namespace std;
void call_by_value_fun(int original);
int main()
{
    int original;
    cout << "Enter original value: ";
    cin >> original;
    call_by_value_fun(original);
    cout << "\nFinal value is: " << original << endl;
    return 0;
}

void call_by_value_fun(int original)
{
    cout << "Enter value you want it to change: ";
    cin >> original;

}