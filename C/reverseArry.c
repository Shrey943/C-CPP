# include <stdio.h>

void reverse(int arr[],int len){
    for (int i= 0 ; i<len/2 ; i++){
        int temp = arr[i];
        arr[i]= arr[len-i-1];
        arr[len-i-1]  = temp;
        // printf("%u \t",arr[i]);
    }
}

int main(){

    int arr[] = {12,23,43,3423,54,6,64,4,6464,5};
    reverse(arr,10); 
     for (int i=0;i<10;i++){
        printf("%d \t",arr[i]);
        printf("%u \t",arr[i]);
        printf("%u \t",arr[i]);

    } 
    return 0;
}