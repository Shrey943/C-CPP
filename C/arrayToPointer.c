# include <stdio.h>

int main(){

    int max  = 5;
    char *names[] = {  // Use can't simply have a array of strings(char array) without 2d arraay 
        "Shrey",       // So its the best method to store strings in array.
        "Darsh",       //** this array just stores the pointers of character(assuming string a char)
        "Rashi",       // **** Important h
        "Rohit",
        "Rahul"
    };
    
    for(int i = 0 ; i<max ; i++){
        printf("The name at %d is : %s \n",i,names[i]);
    }


    return 0;
}