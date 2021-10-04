# include <stdio.h>

int main(){

    int a , b;

    printf("Enter value of a : ");
    scanf("%d",&a);
    
    printf("Enter value of b : ");
    scanf("%d",&b);

    printf("Bitwise AND operation of %d and %d is : %d\n",a,b,a&b);

    printf("Bitwise OR operation of %d and %d is : %d\n",a,b,a|b);
    
    printf("Logical AND operation of %d and %d is : %d\n",a,b,a&&b);
    
    printf("Bitwise OR operation of %d and %d is : %d\n",a,b,a||b);
 
    return 0;
}