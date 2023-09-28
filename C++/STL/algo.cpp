#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void display(int vec[], int n)
{
    cout << endl;
    for (int i = 0; i< n; i++){ // We can use range loop for array when calling in main code, but in function, it is little tricky, so just avoid using it in functions, in case of arrays
        cout <<vec[i]<< " ";
    }
    cout << endl;
}

int main()
{
    // Every algorithm 1 thing in common, that is, a starting address which is included and a ending address, which is excluded.

    int arr[] = {1, 324, 14235, 67, 658, 6255, 34, 21, 5, 24, 24, 6, 7,7,5,24784, 8, 7, 346, 23, 56342, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Array's don't have iterator's hence needs to be operated through pointers
    // Remember: arr is itself a pointer to first element and arr+1 will point to 2nd element, similarly arr+n-1 will point to last element,
    // and arr+n will point to next memory block of the last element. Hence we will be using it as end iterator.
    int *endp = arr + n; // pointer next to last element

    
    // LAMDA: Lamda are the one liner functions that we use to define our funtions on a single line
    //        We can define lamda functions using following syntax: [](parameters){function body;}
    //        We can call lamda functions directly after the declaration as below
    cout<< [](int a, int b){return a*b;}(43,54)<< endl;
    // Or we can even store these functions to a variable as below and use them later
    auto sum =  [](int a, int b){return a+b;};
    cout<< "sum of 65 & 45 is: "<< sum(65, 45);


    // SORT: Uses INTRO sort, combination of quick, heap and insertion sort -- O(nlogn){worst case time complexity}
    // sort(starting_iterator, ending_iterator(excluded), comparator_func(optional))

    sort(arr, arr + n); // This is the normal way, we can use below inbuilt functions of begin and end too to sort algo 
    // sort(begin(arr), end(arr));

    // sort(vec.begin(), vec.end(), greater<int>); // sort a vector in descending order
    
    display(arr, n);

    // We can apply a custom sorting function to define our own conditions, known as comparators
    // We can use lamda or normal functions, as we like
    // In comparators, we need to return the expression we want to be true. if we want a<b(ascending order) then return true for this condition 
    // or simply return the condition we want to be true, i.e. return a<b

    // 2 consecutive elements are sent to comparator, hence needs to work on those only(parameters must be 2 elements of the array)
    // sort(arr, endp, [](int a, int b){return (a*a)>b;}); // sorting based on condition that square of a must be greater than b
    display(arr, n);

    // Lower Bound & Upper Bound (Only works with sorted data structure)
    
    // Lower Bound is nothing but the iterator/pointer of first occurance of the element entered. It returns the iterator/pointer of the 
    // next greater element, if given number not found.

    // Upper Bound is nothing but the iterator/pointer of the next greater element of the element searched.

    // NOTE: I used nxt greater element in place of next element as in sorted list, next element will always be greater.
    
    // lower and upper bounds will be same if element is not present in the given array/vector.
    //  - O(n) time complexity hence use only with array and vector
    // for stack and map, use in-built upper and lower bound

    // Since functions return pointers, we need to use start operator to get the value
    cout<<"lower bound of 24 is: "<< *lower_bound(arr, endp, 24)<< endl;
    cout<<"Upper bound of 24 is: "<< *upper_bound(arr, endp, 24)<< endl;

    cout<<"Lower bound of 245 is "<<*lower_bound(arr, endp, 245)<< " while the uppder bound is: "<< *upper_bound(arr, endp, 245)<<endl;

    // Binary Search: returns true or false
    cout<<"Is 234 present using binary search? "<<((binary_search(arr, endp, 234)) == 1 ? "Yes" : "No")<<endl;

    // Unique: Removes all the consecutive duplicates, Apply on sorted array to remove all the duplicates. 
    cout<<"Only Unique: "<<endl;
    unique(arr, endp);
    display(arr, n);

    // Remember: Array needs to be sorted for above functions to work correctly. And in log n time in case of array, and vector.


    // Below line will destroy the sorting in ascending order.
    sort(arr, endp, [](int a, int b){return (a*a)>b;});
    display(arr, n);

    // Min Element: returns pointer
    cout<< "Min Element from 3rd to last element is: "<< *min_element(arr+2, endp)<<endl; // Will start searching from 3rd element

    // Max Element: return pointer
    cout<< "Max Element from first to second last element is: "<< *max_element(arr, endp-1)<<endl; // will stop before last element

    // Count: (for sets and maps, use their own functions as they do not have continuous memory, hence will require much time)
    cout<< "Count of 5 is: "<< count(arr, endp, 5)<<endl;

    // Find
    cout<< "Is 234 present? "<< (find(arr, endp, 234) != endp ? "Yes" : "No")<< endl;
    cout<< "Is 8 present? "<< (find(arr, endp, 8) != endp ? "Yes" : "No")<< endl;

    // reverse:
    cout<<"Let's partially reverse it from 5th element to last 3rd element!" <<endl;
    reverse(arr+5, endp-2); // Reversing partially
    display(arr, n);

    // accumulate: find's the sum of whole array, It take initial sum as last parameter(compulasory)
    cout<<"Sum of whole array is: "<<accumulate(arr, endp, 5)<< endl; // Sum will start from 5, i.e. netSum = totalsum + 5 

    cout<< "Distace: "<<endp-arr<<endl;
    cout<<"Size: "<<n<<endl;

    vector<int> vec(arr, endp);
    cout<<"Distance: "<<(vec.end()- vec.begin())<<endl;

    // all_of : Checks given condition for all the elements of array and return true only if condition true for all elements
    // any_of : Checks given condition for all the elements of array and return true if condition true for any of the element
    // none_of : Checks given condition for all the elements of array and return true only if condition false for all elements

    // Take only one parameter as it's not comparing, it's checking  the individual elements.
    cout<<"Is all the elements greater than 0? "<<all_of(arr, endp, [](int a){return a>0;})<<endl;
    cout<<"Is any the elements greater than 50k? "<<any_of(arr, endp, [](int a){return a>50000;})<<endl;
    cout<<"Is all the elements less than 100k? "<<none_of(arr, endp, [](int a){return a>100000;})<<endl;

    return 0;
}