#include <stdio.h>

int main(){

    int a,b,c;
    printf("Enter 3 Numbers : ");
    scanf("%d%d%d",&a,&b,&c);
  
    if(a<b){
        if (b>c){
            printf("B IS THE GREATEST NUMBER AND A IS SMALLEST NUMBER");
        }
        else{
            printf("C IS THE GREATEST NUMBER AND A IS SMALLEST NUMBER");
        }
    }

    else if(a>b) {
        if (a>c){
            printf("A IS THE GREATEST NUMBER AND B IS SMALLEST NUMBER");
        }
        else{
            printf("C IS THE GREATEST NUMBER AND B IS SMALLEST NUMBER");
        }
    }  
    else{
        if (c>a){
            printf("C IS THE GREATEST NUMBER AND A AND BOTH ARE SMALLEST NUMBER");
        }
        else if(c<a){
            printf("A AND B BOTH ARE EQUAL AND GREATEST NUMBER, WHILE C IS SMALLEST NUMBER");
        }
        else{
            printf("ALL NUMBERS ARE EQUAL");
        }
    }
    
    return 0;
    
}