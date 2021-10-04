# include <stdio.h>

int main(){

    char InputChar;

    printf("Enter character : ");
    scanf("%c",&InputChar);

    if (InputChar == 'a' || InputChar == 'e'|| InputChar == 'i'|| InputChar == 'o'|| InputChar == 'u'){
        printf("Entered character is a vowel.");
    }
    else{
        printf("Entered character is a consonant.");
    }          
    return 0;
}