#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    int &n3 = n1; // Its a reference variable (dhyaan se dekh, n3 ke address ko n1 ke equal kr raye) mtlb dono judwa h. ek change hoga toh
                  // Dusra bhi hoga
    cout << "Enter number 1: ";
    cin >> n1;

    cout << "\nEnter number 2: ";
    cin >> n2;

    cout << "\nNumber 1 : " << n1 << "\tNumber 2 : " << n2 << endl;
    n1 = 43;
    n3 = 100;
    cout << "\nNumber 3 : " << n3 << endl; // Dono 100 ho gaye
    cout << "\nNumber 1 : " << n1 << "\tNumber 2 : " << n2 << endl;

    /* Take Multiple inputs */
    int a, b, c, d;
    std::cout << "Enter values for a b c d" << std::endl;
    cin >> a >> b >> c >> d;     //mst way h
    std::cout << a << ", " << b << ", " << c << ", " << d << std::endl;

    cout<<float(5/2);
    return 0;
}