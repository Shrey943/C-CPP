#include <iostream>
#include <string>
using namespace std;

class Topper;

class Student
{
    static int totalStudents;
    int scholarId; // setted private as we do not want others to direcly acces and change it, they are fixed
    string name;
    friend class Topper; //Yes, you can make a child class, friend of its own parent 

protected:
    int scholarship; // WE can change acccess it in derived class

public:
    int sem;
    Student()
    {
        std::cout << "in student constructor" << std::endl;
        name = "unknown";
        scholarId = 2100000 + (++totalStudents);
    };

    Student(string InputName, int sem = 1)
    {
        std::cout << "in student constructor" << std::endl;
        name = InputName;
        sem = sem;
        // totalStudents++;
        scholarId = 2100000 + (++totalStudents);
    }

    void setName(string name);
    int getScholarId();
    string getName();
};

int Student::totalStudents = 0;

void Student::setName(string name)
{
    name = name;
}

int Student ::getScholarId()
{
    return scholarId;
}
string Student ::getName()
{
    return name;
}

// class Topper : Student // By default, visibility setted to private
// class Topper : protected Student // Now all the protected and public members of Student are protected members of Topper.
class Topper : public Student // Done so that i can access constructor also.
{
    int rank;

public:
    void setRank(int rank);
    int getScholarship(Student obj);
    void getDetail();
    Topper()
    {
        std::cout << "in topper constructor" << std::endl;
    };
};

void Topper::setRank(int rank)
{

    rank = rank;
    scholarship = 50000 * (11 - rank) / 100;
}

int Topper::getScholarship(Student obj)
{
    std::cout << "object private name : " << obj.name << std::endl;
    return scholarship;
}

void Topper ::getDetail()
{

    std::cout << getName() << " with scholar id " << getScholarId() << " with rank " << rank << " is eligible for the scholarship of Rs. "
              << scholarship << std::endl;
}

int main()
{
    Student s1("Shrey");

    std::cout << "name : " << s1.getName() << std::endl;
    std::cout << "scholar id  : " << s1.getScholarId() << std::endl;

    Topper t1;  // Since it doesnot take any argument, we need a constructor in student also that works without argument
    t1.sem = 3; // as it is public
    // t1.scholarship; // Can't access here
    t1.setRank(1);
    t1.getScholarship(s1);

    t1.getDetail();
    return 0;
}