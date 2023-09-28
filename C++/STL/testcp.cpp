# include <iostream>
# include <string>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit() {
        vector<int> gas = {1,2,3,4,5};
        vector<int> cost =  {3,4,5,1,2};
        int start = -1;
        int n = gas.size();
        int intank = 0;
        int i= 0, j =0;
        cout<<"outside while: "<<j << " " <<n;
        while(j<n){
            cout<<"inside while for j: "<<endl;
            if (gas[j]<cost[j]){ j++; continue;}
            cout<<"Out";
            start, i = j;
            intank = gas[i];
            do{
                if(intank >= cost[i]){
                    intank  = intank - cost[i] + gas[(i+1)%n];
                    i = (i+1)%n;
                }else{
                    break;
                }
            }while (i != start);
            if (i == start){
                return start;
            }
            j++;
        }
        // if (j == n || start == -1){
        //     return -1;
        // }
        return -1;
    }
    //     int intank = 0;
    //     for(i = 0; i< gas.size(); i++){
    //         if (gas[i] >= cost[i]){
    //             start = i;
    //             intank = gas[i];
    //             break;
    //         }
    //     }
    //     if (start == -1){
    //         return -1;
    //     }
    //     // i = (start+1)%gas.size();
    //     do{
    //         if(intank >= cost[i]){
    //             intank  = intank - cost[i] + gas[(i+1)%gas.size()];
    //             i = (i+1)%gas.size();
    //         }else{
    //             intank = 0;
    //             break;
    //         }
    //     }while (i != start) ;
    // return start;
    // }
};
int main()
{
    Solution s;
    // vector
    s.canCompleteCircuit();
    return 0;
}