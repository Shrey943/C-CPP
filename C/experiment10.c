# include <stdio.h>

int main(){

    int n;

    printf("How many rows do you want in triangle : ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++){

        for(int k = 1 ; k <= 2*i-1 ; k++){  // To print triangle in odd sequence 
            printf("*");
        }

        printf("\n");
    }

    return 0;
}