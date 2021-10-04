#include <iostream>
#include <conio.h>

using namespace std;

int findBiggest(int,int,int);
int main()
{
    int num1, num2, num3; 
    cout<<"Enter the first number to compare: ";
    cin>>num1;
    cout<<"Enter the second number to compare: ";
    cin>>num2;
    cout<<"Enter the third number to compare: ";
    cin>>num3;
    int result=findBiggest(num1,num2,num3);
    cout<<"\nBiggest number is: "<<result;
   getch();
    return 0;
}
int findBiggest(int num1, int num2, int num3){
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