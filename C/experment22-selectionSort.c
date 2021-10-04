#include <stdio.h> 
  
void swap(int *ptr1, int *ptr2); 
  
int main() 
{ 
    int i, j, min; 
    int length;

    printf("Enter length of array list : ");
    scanf("%d",&length);
    
    int arr[length];   
    
    for (int k = 0; k<length ; k++){

        printf("Enter element for position %d : ",k+1);
        scanf("%d",&arr[k]);
    }

    for (i = 0; i < length-1; i++) 
    { 
        min = i; 
        for (j = i+1; j < length; j++) 
          if (arr[j] < arr[min]) 
            min = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[min], &arr[i]); 
    }  
    printf("Sorted array: \n"); 
    
    //print Array
    
    for (int j =0; j < length; j++) 
        printf("%d ", arr[j]); 
    printf("\n"); 
    
    return 0; 
} 
  
void swap(int *ptr1, int *ptr2) 
{ 
    int temp = *ptr1; 
    *ptr1 = *ptr2; 
    *ptr2 = temp; 
} 
