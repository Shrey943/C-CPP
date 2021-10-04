# include <stdio.h>

int main(){

    int a , b ;

    printf("\nEnter value of a : ");
    scanf("%d",&a);

    printf("\nEnter value of b : ");
    scanf("%d",&b);
    
    printf("\n\nAddition of %d and %d is : %d\n",a,b,a+b);

    printf("Substraction of %d and %d is : %d\n",a,b,a-b);
    
    printf("Multiplication of %d and %d is : %d\n",a,b,a*b);
    
    printf("Division of %d and %d is : %f\n",a,b,(float)a/b);   //casting output to float
    
    printf("Modulous of %d and %d is : %d\n",a,b,a%b);   
    
    return 0;
}