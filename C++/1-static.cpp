#include <iostream>
#include <string>
using namespace std;

class Admission
{

    static int total_students; // These variables are created only once in memory and are shared by all instances
    static int boys;
    static int girls;
    static int other;

    string name;
    int std;
    char gender;
    int admin_no;

public:
    void new_admission();
    void detail();
    static string ratio()
    {
        int numerator = boys % girls;
        int denominator = girls;

        if (numerator == 0)
        {
            numerator = boys / girls;
            if (numerator == 0)
            {
                numerator = 1;
            }
            denominator = 1;
            return std::to_string(numerator) + " : " + std::to_string(denominator);
        }
        return std::to_string(boys) + " : " + std::to_string(girls);
    };
    static void schoolDetails() // Static functions keval aur keval static members ko hi access kr skte h.(name nai kr skte)
    {
        std::cout << "School have total of " << total_students << " students." << std::endl;
        std::cout << "School have " << boys << " boys and " << girls << " girls." << std::endl;
        std::cout << "With a gender ratio of " << ratio() << std::endl;
    }
};

int Admission::total_students; // ye krna hi padta h, koi initial value dena h static variable ki toh yaha hi dena padega uper nai h allow
int Admission::boys;           // By default zero mil rai h toh kuch nai kr ra mai
int Admission::girls;
int Admission::other;

void Admission::new_admission()
{

    std::cout << "Enter student's name: ";
    cin >> name;
    std::cout << "Enter student's gender(M/F/O): ";
    cin >> gender;
    std::cout << "Enter student's class: ";
    cin >> std;

    if (gender == 'M' || gender == 'm')
    {
        boys++;
    }
    else if (gender == 'F' || gender == 'f')
    {
        girls++;
    }
    else if (gender == 'O' || gender == 'o')
    {
        other++;
    }
    else
    {
        std::cout << "Enter a valid gender" << std::endl;
    }

    admin_no = ++total_students;
    cout << "Admission done! students admission number is " << admin_no << endl;
}

void Admission ::detail()
{

    cout << endl
         << "Student's admission number: " << admin_no << endl;
    cout << "Student's name: " << name << endl;
    cout << "Student's class: " << std << endl;
}

int main()
{

    Admission student1, student2, student3, student4, student5, student6;
    student1.new_admission();
    student1.detail();
    student2.new_admission();
    student2.detail();
    student3.new_admission();
    student4.new_admission();
    student5.new_admission();
    student6.new_admission();
    student6.detail();
    cout << endl;
    Admission().schoolDetails();

    return 0;
}