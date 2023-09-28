# include <iostream>
# include <string>
# include <bits/stdc++.h>
using namespace std;

// Below is the implementation of Kadane's Algorithm, which gives us the maximum sum of a subarray possible in given array.
int LargestSumSubarray(vector<int>& arr){

    // The main concept behind this algo is, that a positive number is always greater than any negative number
    // Hence a subarray would rather start from a positive number, or would just be a single element which is largest positive number.
    // (+ve > 0 > -1 > -5 ) remember right?

    // Now we just use 2 variables:
    // max_so_far: which store the maximum value of subarray(could be a single element) found till now.
    // sum_till_now: it keeps the track of  sum of subarray, It's just an helping hand for max_so_far to calculate sum of subarray.
    //               If it's value is -ve(<0) then, we assign it 0. Because, we don't need to keep the sum of -ve subarray, as told earlier, that
    //               either the subarray would start from a +ve value, or would just be a single greaterest -ve element.

    // Time complexity = O(n)
    // Space complexity = O(1)

    int max_so_far = INT_MIN; // As this needs to be compared
    int sum_till_now = 0;     // As it would contain sum 

    for (int i = 0; i < arr.size(); i++){

        // This will hold the sum of subarray if it's positive else would hold the current -ve element 
        sum_till_now += arr[i];
        
        // We compared before updation of max, to check if it is bigger than our max
        if (sum_till_now > max_so_far){
            max_so_far = sum_till_now;
        }
        // If it's -ve, then we simply update it to zero
        if (sum_till_now < 0){
            sum_till_now = 0;
        }
    }
    // As it would hold the maximum sum
    return max_so_far;

}

int main()
{
    vector<int> vec = {-2, -3, 4, -1, -2, 1, 5, -3};

    cout<<"Largest Sum of subarray is: "<<LargestSumSubarray(vec);

    return 0;
}