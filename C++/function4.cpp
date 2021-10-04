#include <iostream>
 
using namespace std;

inline int inline_fun(int x) {
   return x*x*x;
}

int main() {
   int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "\nCube of "<< num <<" is: " << inline_fun(num) << endl;
    return 0;
   return 0;
}



