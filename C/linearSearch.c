# include <stdio.h>
 
int main(){

    int n,s,found = 0;

    printf("Enter length of array list : ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i<n ; i++){

        printf("Enter element for position %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter number to be searched :" );
    scanf("%d",&s);

    for (int i = 0 ; i < n ; i++){
    
        if (arr[i] == s){
            printf("Element found at position %d.",i+1);
            found = 1;
            break;
        }
    }

    if (found == 0){
        printf("Element not found");
    }

}