#include <stdio.h>

int main(){
    
    int a;

    printf("Enter Number :");
    scanf("%d",&a);
    if(a<0){

        printf("NUMBER IS NEGATIVE");

    }
    else if(a==0) {

    printf("NUMBER IS ZERO");
    }  
    else if(a>0){

        printf("NUMBER IS POSITIVE");

    }
    else{
    
        printf("ENTER NUMBER ONLY");
    }   
    
      

}