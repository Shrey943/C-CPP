#include <unordered_map>
#include <iostream>
#include <string> 
using namespace std;

int main(){

    unordered_map<char, int> mp;
    string s = "abcde";
    int i = 0;
    for(char ch: s){
        // cout<<ch<<endl;
        mp[ch] = i;
        i++;
    }
    cout<< mp.count('a')<<endl;
    // cout<< mp.find('a')<<endl;

    
    return 0;    
} 