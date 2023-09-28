# include <iostream>
# include <string>
# include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p1 = {23, "shrey"};
    cout<<p1.first<<" " <<p1.second<<endl;

    pair<string, int> p2 = make_pair("Shrey", 1000); // To use make_pair, initialize here only
    // make_pair("shrey", 100); WRONG
    cout<<p2.first<<" " <<p2.second<<endl;

    pair<string, string> p3; // INITIALIZED WITH ZERO
    p3 = {"This", "That"}; // BEST WAY
    cout<<p3.first<<" " <<p3.second<<endl;

    p3.first = "Try";
    p3.second = "THis";
    cout<<p3.first<<" " <<p3.second<<endl;


    return 0;
}