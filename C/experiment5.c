# include <stdio.h>

int main(){

    char inputChar,x;
    int charValue;

    printf("Enter any character : ");
    scanf("%c",&inputChar);

    charValue = inputChar;            // get ASCII value of input char  
    
    x = 116 - charValue;

    printf("Value of X = %d\n",x);
    printf("Character at ASCII value 116 is : %c\n",inputChar+x);

    return 0;
}