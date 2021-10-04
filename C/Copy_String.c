# include <stdio.h>
# include <string.h>


int main(){

    char ch[54],copy[56];
    printf("Enter string to be copied:");
    gets(ch);
    strcpy(copy,ch);
    printf("Copied string is ");
    puts(copy);

    return 0;
}