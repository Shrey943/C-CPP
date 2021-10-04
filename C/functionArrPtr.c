# include <stdio.h>
void arrPtr(int *ptr,int n){
    for (int i=0;i<=n;i++){
        printf("Array : %u \t",*ptr);
        ptr++;
    } 
 
}

int main(){

    int arr[] = {23,32,3242,3423,423,4,24};
    // int *arr_ptr = &arr;
    arrPtr(arr,7);
    // printf("%d",arr[2]);
    return 0;
}