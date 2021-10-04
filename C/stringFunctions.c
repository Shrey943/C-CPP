# include <stdio.h>
# include <string.h>

int main(){

    char string[54];
    printf("\nEnter string :");
    gets(string);

    //Copy function :-
    
    char copy[54];

    strcpy(copy,string);

    printf("\nCopied string is ");
    puts(copy);

    //length function :-
    
    printf("\nLength of string is %d",strlen(string));

    //Concatenate 2 strings :-
    
    char string2[54];

    printf("\nEnter another string :");
    gets(string2);

    printf("\nConcatenated string is ");
    puts(strcat(string,string2));

    //Compare 2 strings
    int n ;
    n = strcmp(string,string2);
    if (n>0){
        printf("\n%s have higher ASCII value.",string);
    }
    else if(n<0){
        printf("\n%s have higher ASCII value.",string2);
    }
    else{
        printf("\nBOTH VALUES ARE EQUAL.");
    }
    return 0;
}