# include <stdio.h>

int callByVal(int a, int b);
int callByRef(int *ptrA, int *ptrB);

int main(){

    int a ;
    int b ;
    int sumByVal, sumByRef;
    int *ptrA = &a;
    int *ptrB = &b;

    printf("Enter first value: ");
    scanf("%d", &a);
    printf("\nEnter second value: ");
    scanf("%d", &b);

    printf("\nInitial value : a = %d , b = %d\n",a,b);
    
    sumByVal = callByVal(a , b);
    
    printf("\nSum of new a and b : %d\n",sumByVal);
    printf("new value of a is %d\n",a);

    sumByRef = callByRef(ptrA,ptrB);
    printf("Sum of new a and b : %d\n",sumByRef);
    printf("Value of a is %d\n",a);

    return 0;
}

int callByVal(int a , int b){
    printf("Fuction called by value\n");
    a = 5;
    b = 4;
    int sum = a+b;
    return sum;
}

int callByRef(int *ptrA,int *ptrB){
    printf("Fuction called by reference\n");
    *ptrA = 5;
    *ptrB = 4;
    int sum = *ptrA+*ptrB;
    return sum;
}