# include <stdio.h>

int main(){

    int length;
    
    printf("Enter length of array list : ");
    scanf("%d",&length);
    
    int arr[length];   
    int *ptr[length];

    for (int k = 0; k<length ; k++){
        printf("Enter element for position %d : ",k+1);
        scanf("%d",&arr[k]);
    }

    for (int i = 0 ; i<length ; i++)
    {    
        ptr[i] = &arr[i];
    } 

    for (int i = 0 ; i<length ; i++)
    {
        printf("The Address at index %d is : %d\n",i,ptr[i]);        
    }
    
    printf("\n");
    
    for (int j = 0 ; j < length ; j++)
    {
        printf("The value at index %d is : %d\n",j,*ptr[j]);
    } 

    return 0;
}