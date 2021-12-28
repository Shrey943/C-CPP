# include <iostream>
# include <string>
using namespace std;

class Skills
{
    protected:
        string skillName;
        int experience;
    
    public:
        Skills(string skillName, int experience = 0)
        {
            this.skillName = skillName;
            this.experience = experience; 

        }
        void display(){}  
             
};

class Programmer: Skills
{
    string language;

    public:
        Programmer(string language, int time = 0) : Skills(language + "_Language", time) {
            this.language = language;
        }
        void Display()
        {
            std::cout << "Hello! I'm a professional "<< language << " Programmer with more than "<< experience << "Years of experience in the field." << std::endl;
        }
    
}


class Developer: Skills
{
    string framework;

    public:
        
        Developer(string skill, string frameWork ,int experience = 0) : Skills(skill + "_Developer", experience) {
            this.framework = frameWork;
        }

        void Display()
        {
            std::cout << "Hello! I'm a professional "<< skillName << " Deveoper with more than "<< experience << "Years of experience in the field. I works on" << framework<< " framework."<< std::endl;
        }
    
}
int main()
{
    Programmer p1("C", 2);
    Developer d1("Android", "Android Studio", 3);

    p1.display();
    d1.display();


    return 0;
}



