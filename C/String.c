# include <stdio.h>
# include <string.h>

int main(){

    char ch[54],copy[54];

    printf("Enter string :");
    gets(ch);

    strcpy(copy,ch);

    printf("Entered string is ");
    puts(copy);

    return 0;
}