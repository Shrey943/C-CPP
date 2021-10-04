#include <stdio.h> 

void swap(int *ptr1, int *ptr2) ;

int main() 
{ 
    int j,k;
    int length;

    printf("Enter length of array list : ");
    scanf("%d",&length);
    
    int arr[length];   

    for (int i = 0; i<length ; i++){

        printf("Enter element for position %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for (j = 0; j < length-1; j++)       //No need to change last element
      
       for (k = 0; k < length-j-1; k++)  
           if (arr[k] > arr[k+1]) 
              swap(&arr[k], &arr[k+1]);

    printf("Sorted array: \n"); 
    
    for (int i=0; i < length; i++) {
        printf("%d ", arr[i]); 
    }

    printf("\n"); 

    return 0; 
}
 
void swap(int *ptr1, int *ptr2) 
{ 
    int temp = *ptr1; 
    *ptr1 = *ptr2; 
    *ptr2 = temp; 
} 
  
