#include <iostream>
#include <conio.h>

using namespace std;

int findBiggest(int,int,int);//function prototype
int main()
{
    double num1, num2,num3; //declare the variables
    cout<<"Enter the first number to compare: ";
    cin>>num1;//get input from user for num1
    cout<<"Enter the second number to compare: ";
    cin>>num2;//get input from user for num2
    cout<<"Enter the third number to compare: ";
    cin>>num3;//get input from user for num3
    int result=findBiggest(num1,num2,num3);//function call
    cout<<"\nBiggest number is: "<<result;//display the output
   getch();
    return 0;
}
int findBiggest(int num1, int num2, int num3){//function definition
    int biggest;
    if(num1>=num2){
            if(num1>=num3){
                return num1;
            }
            else{
                return num3;
            }
    }
    else{
        if(num2>num3){
            return num2;
        }
            else{
                return num3;
            }
        }
}