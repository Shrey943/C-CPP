#include <stdio.h>

int main(){

    int per;
    printf("Enter percentage in 10's:");
    scanf("%d",&per);
    switch(per){

        case 90 : printf("Your grade is A+");
        break;
        case 80 : printf("Your grade is A");
        break;
        case 70 : printf("Your grade is B+");
        break;
        case 60 : printf("Your grade is B");
        break;
        case 50 : printf("Your grade is C");
        break;
        case 40 : printf("Your grade is D");
        break;
        case 30 : printf("Your grade is E");
        break;
        default  : printf("Your grade is F");
        break;
    }


}