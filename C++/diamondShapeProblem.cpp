#include <iostream>
#include <string>

using namespace std;

class Student // Just because of virtual keyword, now its an VIRTUAL BASE CLASS
{

    int rollNo;
    string name;

public:
    Student() { std::cout << "In  Student Constructor" << std::endl; }
    void setRollNo(int rollNum) { rollNo = rollNum; }
    int getRollNo() { return rollNo; }
};

class Academic : public virtual Student // WE can write virtual before and after both
{
    int phy, chem, maths; // 80 marks paper

public:
    Academic() { std::cout << "In  Academic Constructor" << std::endl; }
    void setMarks(int phy1, int chem1, int maths1) // Same name parameter gives wrong answer
    {
        phy = phy1;
        chem = chem1;
        maths = maths1;
    }

    int getTotal() { return (phy + chem + maths); }

    void func(int num)
    {
        std::cout << "In Academic func." << std::endl;
    }

    // int getRollNo() { return 100001; }      // If getRollNo is overrided in any class, then overrided fucntion will get derived
};

class Extras : virtual public Student
{

    int attendece, projects, activity; //  5 marks for attendence and projects and 10 for activity

public:
    Extras() { std::cout << "In  Extras Constructor" << std::endl; }
    void setExtras(int attendece1, int projects1, int activity1)
    {
        attendece = attendece1;
        projects = projects1;
        activity = activity1;
    }

    int getTotal() { return attendece + projects + activity; }

    void func(string name)
    {
        std::cout << "In Extras func." << std::endl;
    }
};

// class Result : public Academic, public Extras, public Student            // Ambiguty Error
class Result : public Academic, public Extras
{

    float percentage;
    // Result(){ std::cout << "In  Result Constructor" << std::endl; } // Can't set private

public:
    Result(){ std::cout << "In  Result Constructor" << std::endl; } 
    float getAcademicPercent()
    {
        // return getTotal()/(80*3);                            // Abiguty error
        return ((float)Academic ::getTotal() / (80 * 3)) * 100;
    }
    float getExtrasPercent()
    {

        return ((float)Extras ::getTotal() / (20)) * 100;
    }

    float getPercentage()
    {

        percentage = ((float)(getTotal() + Extras ::getTotal()) / 260) * 100; // Casting to float is very important

        return (percentage);
    }

    int getTotal()
    { // Its one of the way to remove ambiguty

        return Academic::getTotal();
    }

    void getResult()
    {

        cout << endl;
        std::cout << "Student Result : " << std::endl;
        std::cout << "Roll Number : " << getRollNo() << std::endl; // Would give error without virtual keyword
        std::cout << "Academic Total : " << getTotal() << "  Out of 240." << std::endl;
        std::cout << "Co-Curruicular Total : " << Extras ::getTotal() << "  Out of 20." << std::endl;
        std::cout << "Grand Total Percentage : " << getPercentage() << " % " << std::endl;
    }
};

int main()
{
    Result s1;

    s1.setRollNo(101);
    s1.setMarks(67, 76, 80);
    s1.setExtras(3, 5, 9);

    std::cout << "rollNum : " << s1.getRollNo() << std::endl;
    std::cout << "Academic Percent : " << s1.getExtrasPercent() << std::endl;
    std::cout << "Extra Percent : " << s1.getAcademicPercent() << std::endl;
    s1.getResult();

    // s1.func("sdafasdf");         // Fucntion Overriding ka concept work nai krta multiinheritance mai, isme ye number of parameter ya
    // Parameter type se nai pata lagata.

    return 0;
}