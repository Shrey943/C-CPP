# include <stdio.h>

int main(){

    int inputInt, calc;

    printf("Enter Number : ");
    scanf("%d",&inputInt);

    calc = inputInt%2;
    
    if (calc == 0){
        printf("Entered integer %d is EVEN",inputInt);
    } 
    else{
        printf("Entered integer %d is ODD",inputInt);
    }
    
    return 0;
}