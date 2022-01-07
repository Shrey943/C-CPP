# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int increment(int num)
{
    return num+1;
}

int add(int num1, int num2)
{
    return num1 + num2;
} 

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout<<endl;
}

int main()
{
    int arr1[] = {23, 234, 235, 654, 9, 3};
    int arr2[] = {230, 24, 25, 65, 94, 43};
    int arrOutput[6];
    int size = 6;

    // Unary operation: 
    transform(arr1, arr1 + size, arr1, increment); // since we want new array in arr1 only
    display(arr1, size);

    // Hann, agar unary ko binary yaa binary ko unary operator pakaaoge toh error aayegi

    // Binary operation: 
    transform(arr1, arr1 + size, arr2,arrOutput, add); // since we want new array in arr1 only
    display(arrOutput, size);

    return 0;
}