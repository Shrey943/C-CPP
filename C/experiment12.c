#include <stdio.h>
int main() {
    
    int n, mainNum, remainder;
    int result = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
    
    mainNum = n;

    do{
        
        remainder = mainNum % 10; 
        result = result + (remainder * remainder * remainder);  
        mainNum = mainNum/10;

    } while (mainNum > 0);
    

    if (result == n)
        printf("%d is an Armstrong number.", n);
    
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}