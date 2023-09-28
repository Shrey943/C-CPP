# include <iostream>
# include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    unique(nums.begin(),nums.end(), [](int a, int b, int c){if (a-c == 2)return true;});

    return 0;
}