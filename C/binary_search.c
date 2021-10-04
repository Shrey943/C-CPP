# include <stdio.h>
 
int main(){
    
    int mid,low,high;
    int n,s;
    printf("Enter length of array list : ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i<n ; i++){

        printf("Enter elements in sorted manner : ");
        scanf("%d",&arr[i]);
    }
    printf("\n Enter number to be searched :" );
    scanf("%d",&s);

    low = 0;
    high = n-1; 
    mid  = (low + high)/2;

    while (low <= high){

        if(arr[mid]<s){
            low = mid+1;
            mid = (low + high)/2;
        }
        else if(arr[mid]>s){
            high = high -1;
            mid = (low + high)/2;
        }
        else{
            printf("\nElement found at position %d",mid+1);
            break;
        }
    }

    if (high<low){
        printf("\nElement not found.");
    }
    

}