#include <stdio.h>

int main(){

    int a,b,c;
    printf("Enter 3 Numbers : ");
    scanf("%d%d%d",&a,&b,&c);
  
    if(a<b){

        if (b>c){
            printf("\nB IS THE GREATEST NUMBER AND A IS THE SMALLEST NUMBER");
        }
        else{
            printf("\nC IS THE GREATEST NUMBER AND A IS THE SMALLEST NUMBER");
        }
    }

    else if(a>b) {
        
        if (a>c){
            printf("\nA IS THE GREATEST NUMBER AND B IS THE SMALLEST NUMBER");
        }
        else{
            printf("\nC IS THE GREATEST NUMBER AND B IS THE SMALLEST NUMBER");
        }
    }  
    else{
  
        if (c>a){
            printf("\nC IS THE GREATEST NUMBER AND A,B BOTH ARE EQUAL AND SMALLEST NUMBER");
        }
        else if(c<a){
            printf("\nA AND B BOTH ARE EQUAL AND GREATEST NUMBER, WHILE C IS SMALLEST NUMBER");
        }
        else{
            printf("\nALL NUMBERS ARE EQUAL");
        }
    }
    
    return 0;
    
}