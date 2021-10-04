# include <stdio.h>
# include <string.h>

int main(){

    char s1[10],s2[10];
    int diff;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    diff = strcmp(s1,s2);

    if (diff<0){
        printf("\n %s is grater than %s in AISCII value.",s2,s1);
    }
    else if (diff>0){
        printf("\n %s is grater than %s in AISCII value.",s1,s2);
    }
    else{

        printf("\n Both are equal in AISCII value.");
    }




    

    return 0;
}