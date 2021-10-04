#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    std::cout << "value of 4/5 is " << 4 / 5 << std::endl;        // gives zero
    std::cout << "value of 4/5 is " << (float)4 / 5 << std::endl; // gives 0.8

    std::cout << std::endl;

    std::cout << "size of 3.12: " << sizeof(3.12) << std::endl;  // bydefault its double, size = 8
    std::cout << "size of 3.12: " << sizeof(3.12f) << std::endl; // size 4
    std::cout << "size of 3.12: " << sizeof(3.12F) << std::endl; // size 4
    std::cout << "size of 3.12: " << sizeof(3.12l) << std::endl; // size 12
    std::cout << "size of 3.12: " << sizeof(3.12L) << std::endl; // size 12

    std::cout << std::endl;

    // Using manipulators - setw reserves 5 block of space for results so results are right justified

    std::cout << "size of 3.12: " << setw(5) << sizeof(3.12) << std::endl;  // bydefault its double, size = 8
    std::cout << "size of 3.12: " << setw(5) << sizeof(3.12f) << std::endl; // size 4
    std::cout << "size of 3.12: " << setw(5) << sizeof(3.12F) << std::endl; // size 4
    std::cout << "size of 3.12: " << setw(5) << sizeof(3.12l) << std::endl; // size 12
    std::cout << "size of 3.12: " << setw(5) << sizeof(3.12L) << std::endl; // size 12

    std::cout << std::endl;

    std::cout << "int to char : " << char(3) << std::endl;       // converts to char with aiscc value of 3
    std::cout << "char to int : " << int('3') << std::endl;      // gives aiscc value of '3' that is 51(in interger form)
    std::cout << "character to int : " << int('a') << std::endl; // gives aiscc value of 'a'

    return 0;
}