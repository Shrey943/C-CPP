# include <stdio.h>

int main(){

    char name[20],ch;
    printf("Enter name : ");
    int i = 0;
    while (ch != '\n' ){

        ch = getchar();
        name[i]= ch;
        ++i; 

    }
    name[i]='\0';
    printf("Name : %s ",name);

    return 0;
}