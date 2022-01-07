#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int increment(int arrNum, int n) // Accha agar meko, different numbers se increment krna h toh ? jaise ye toh bs 1
// {                                // se krta h, AGar 5 se bhi increment krna h toh kya? Han ek parameter de deta hu
//     return num + n;              // Neeche dekho
// }

class increment
{
    int n;
    public:
        increment(int num) : n(num){}
        
        // parenthesis operator ko hi overload kr diya, mtlb ye () krne mai call nai hoga

        int operator() (int arrNum) const
        {
            return (arrNum + n);
        }
};

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {23, 234, 235, 654, 9, 3};
    int arr2[] = {230, 24, 25, 65, 94, 43};
    int arrOutput[6];
    int size = 6;

    
    // transform(arr1, arr1 + size, arr1, increment(?)); // But yaar agar uper jaise kia toh yaha kya likhu???
                                                         // Kyoki agar parenthesis lagaya toh function call ho jayega
                                                         // And syntax error bhi hogi.


    // Bss isi problem ko dur krne functor banaye h.


    /*

    Functor are the objects that can be treated as they are function or function pointers.

    */

    transform(arr1, arr1 + size, arr1, increment(5)); // increment by 5 
    display(arr1, size);

    // Above increment(5) is equal to:

    // increment Obj(5);
    // Obj.operator(); function call..

    return 0;
}