#include <iostream>
#include <cmath>
#include <string>
#include <sstream> //To convert string to int      for all compilers(old also)
using namespace std;

class Point
{

    int x, y; // Constructor needs to be created only in public section
    friend float distance(Point, Point);

public:
    Point(); // Default Constructor
    // Point(int a);           // Constructor Overlaoding - this is also a way of doing what's done down
    Point(int a, int b = 0) // Constructor with default argument
    {
        x = a;
        y = b;
    }
    Point(string a, int b = 0)
    {
        // stringstream anyVariableName(a);         // Converting string to int
        // anyVariableName >> x;

        x = stoi(a); // Works on compiler 11 and above
        y = b;
    }

    //Copy Constructor : REMEMBER if it haven't be created, then too you can use it as every class has a default copy constructor
    // Point(const Point &obj) // If its created then this will run in place of default constructor.
    // {                       // Notice one thing, object isn't passed, its the reference to object and so it do not get changed, const is important
    //     x = obj.x;
    //     y = obj.y;
    //     std::cout << "copy constructor called for " << get() << std::endl;
    // }

    std::string get()
    {
        return "(" + to_string(x) + ", " + to_string(y) + ")";
    }
    void changeX(int change)
    {
        x = change;
    }

    // Below is the operator overlaoding of assignment operator just for info
    Point &operator=(const Point &obj)
    { // returning reference is nothing but returning the address other wise it would return a copy

        //Since i had overrided and didn't assigned any value to any member hence assignment operator would do nothing
        std::cout << "WE Are inside assignment operator. As we did nothing it will return the same obj. " << std::endl;
        std::cout << "IT is for obj : " << obj.x << std::endl;
        std::cout << "IT is for obj : " << obj.y << std::endl;
        std::cout << "value of x for obj we are in : " << x << std::endl;
        std::cout << "value of y for obj we are in : " << y << std::endl;
        std::cout << "obj address  :" << &obj << std::endl;

        std::cout << "wtf is this : " << this << std::endl;
        return *this;
    }
};

Point ::Point()
{
    x = 0;
    y = 0;
};
// Point::Point(int a)     // Ye bhi kr skte h
// {
//     x = a;
//     y = 0;
// }

float distance(Point o1, Point o2)
{
    //Using formula √[(x2-x1)^2 + (y2-y1)^2]

    return std::sqrt(std::pow((o2.x - o1.x), 2) + std::pow((o2.y - o1.y), 2));
}

int main()
{
    // Implicit call to constructor
    Point p1(1, 1);

    //Explicit call to constructor
    Point p2 = Point(2, 2);

    //Default constructor
    Point p3; // if default constructor was not created, then, this line would give an error
    /*
    
    
    
    Below is another example of explicit call to constructor, it creates a nameless temperory object which is created and destroyed 
    simentaniously, 
    Temporary Objects are sometimes Important to do some work or any process in constructor and not let it consume obj memory after the 
    work's done*/

    Point();
    /*



    */
    Point p4(12);

    //Dynamic initialization
    string str;
    std::cout << "Enter value of x: ";
    cin >> str;

    Point p5(str); // based on parameter datatype, it selects the constructor (see no. of arguments are same)

    //Copy constructor - Very Important *****

    Point p6(p1); // Will work even you havent created a copy constructor // Copy constructor will be invoked

    Point p7 = p2; // Copy constructor will be invoked

    //Changing any thing on p7 will not affect any thing on p2
    p7.changeX(3);

    /* above and below line are not same */
    Point p8; // default constructor called
    std::cout << "address of p3 : " << &p3 << std::endl;
    p8 = p1; // Copy constructor will NOT be invoked, Instead an assignment operator will be called, which returns this object by coping stuffs
    std::cout << "address of p8 : " << &p8 << std::endl;

    //Both are different objects, hence would not affect one another.
    p3.changeX(3);
    p8.changeX(2); // If you are still confused between two, then its explained in notes.

    // Doesn't give error but also does nothing. AS of i can see
    // p8.~Point();
    // p1.~Point();
    // p1.changeX(12);

    std::cout
        << "Distance Between point " << p1.get() << " and " << p2.get() << " is : " << distance(p1, p2) << std::endl;
    std::cout << "Distance Between point " << p2.get() << " and " << p3.get() << " is : " << distance(p2, p3) << std::endl;
    std::cout << "Distance Between point " << p3.get() << " and " << p4.get() << " is : " << distance(p3, p4) << std::endl;
    std::cout << "Distance Between point " << p4.get() << " and " << p5.get() << " is : " << distance(p4, p5) << std::endl;
    std::cout << "Distance Between point " << p1.get() << " and " << p6.get() << " is : " << distance(p1, p6) << std::endl;
    std::cout << "Distance Between point " << p7.get() << " and " << p2.get() << " is : " << distance(p7, p2) << std::endl;
    std::cout << "Distance Between point " << p8.get() << " and " << p3.get() << " is : " << distance(p8, p3) << std::endl;

    return 0;
}
