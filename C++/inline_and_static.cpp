#include <iostream>
using namespace std;

inline int square(int a)
{ // Prototype bhi kr skte the use inline laga ke
    return a * a;
};

int &change(int &, int &); // call by reference variable also it returns a reference variable

int user(const int id, int salary = 10000) //prototype mai error de ra iska
{

    // id = 12; // Gives error here only that it can't be changed
    return id + salary;
};

//Itration can be better as its time complexity is O(2^n) now
int fibonacci_series(int n) // 1 1 2 3 5 8 13 ..... function to get nth term
{
    if (n <= 2) // since we know that first and second term is one (based on position, if you want by index, set 1 here)
    {
        return 1;
    }
    return fibonacci_series(n - 1) + fibonacci_series(n - 2);
}

int main()
{
    int a = 5;
    int b = 10;

    cout << "square of " << a << " is " << square(a) << endl;

    change(a, b);
    cout << "new value of a is " << a << " and value of b is " << b << endl;

    // Now, if i assign a new value to change function so, as it returns a reference variable a which is reference of variable a hence value
    // of a would be change
    change(a, b) = 101;
    cout << "new value of a is " << a << " and value of b is " << b << endl;

    std::cout << "\nuser with id 101 and not mentioned salary: " << user(101) << std::endl;
    std::cout << "\nuser with id 101 and 20000 salary: " << user(101, 20000) << std::endl;

    std::cout << "10th element of fibonacci series is : " << fibonacci_series(10) << std::endl;
    return 0;
}

int &change(int &a, int &b)
{

    static int c = a; // static ke kaaran ab ye sirf ek baar run hogi, next time nai
    cout << "\nValue of c is : " << c << endl;
    c = a + b; // But you can change the variable every time, it will remember the latest value
    cout << "\nValue of c is : " << c << endl;
    a = b;
    b = c;
    return a;
}

// int user(const int id, int salary = 10000)
// {

//     // id = 12; // Gives error here only that it can't be changed
//     return id + salary;
// }