#include <iostream>
#include <cmath>
#include <string>
#include <sstream> //To convert string to int      for all compilers(old also)
using namespace std;

class Point
{

    int x, y;
    friend float distance(Point, Point);

public:
    Point();
    Point(int, int);
    Point(const Point &);
    string get();
    void changeX(int);
    Point &operator=(const Point &obj)
    {
        return *this;
    }

    // Destructor
    ~Point()
    {
        std::cout << "In destructor" << std::endl;
    }
};

float distance(Point o1, Point o2)
{
    return std::sqrt(std::pow((o2.x - o1.x), 2) + std::pow((o2.y - o1.y), 2));
}

int main()
{
    Point p1(2, 5);

    std::cout << "p1 value : " << p1.get() << std::endl;

    // Nothing will happen as its empty, but may lead to misbehaviour of program on different compilers
    // But  you may use it to freeup dynamic memory by calling expicitly
    // p1.~Point();
    p1.changeX(12);

    //Below creating a block so that, scope of all the elements in block is just under it
    {
        Point p1(10, 10); // I can create a obj with same name here as its created in local scope;
        p1.changeX(20);
        std::cout << "value of local p1 is : " << p1.get() << std::endl;

        //Now  as soon as the block will be overed, local p1 destructor will be called and will destroy all the data memberes of local p1
    }

    std::cout << "p1 value : " << p1.get() << std::endl;

    Point *p9 = new Point; // Dynamic Object
    cout << "Dynamic Object : " << p9->get() << endl;

    return 0;
}

Point ::Point()
{
    x = 0;
    y = 0;
}
Point::Point(int a, int b = 0)
{
    x = a;
    y = b;
}
Point ::Point(const Point &obj)
{
    x = obj.x;
    y = obj.y;
}
string Point ::get()
{
    return "(" + to_string(x) + ", " + to_string(y) + ")";
}

void Point ::changeX(int change)
{
    x = change;
}