# include <iostream>
# include <string>
# include <bits/stdc++.h>

using namespace std;

int main()
{   // Iterators kuch nai re bs pointers h different types of containres ke liye
    // most used iterator are begin() {that points to the starting element} and end() {that points to the next of the last element(after last element)}
    // Syntax: 
    // <datatype>::iterator = iterator function 

    vector<int> vec = {1,2,3,4,5,6,7,8,9,0};

    vector<int>::iterator it = vec.begin();

    cout<< *it<< endl; // we can access value like that
    
    // NOTE: below line only works on cointainers with contineous block of memory, as +1 moves it to next memory
    cout<< *(it+1) <<endl; // points to next element of vector

    // While we can use it++ with any container as it points to the next element, no matter where it is stored
    cout<< *(++it) <<endl; // Also this time value is incremented and reassigned to it, hence next time calling it would print 3rd element
    cout<< *(++it) <<endl; 

    // We can also decrement the iterator:
    cout<< "decremented: "<<*(--it)<<endl;

    vector<pair<int, int>> p = {{1, 2}} ;

    vector<pair<int, int>>::iterator itr = p.begin();
        // Since iterator is like a pointer hence, currently itr contains the address of 1st element which is a pair
        // Hence we can access values in either of following ways:

    cout << (*itr).first<< " " << itr->second << endl;


    // WE can use auto to avoid typing long name of datatypes:
    auto itr2 = p.begin();
    cout << itr2->first<<endl;

    // In loop:
    // vector<int>::iterator {this is just the datatype of iterator, hence can be replaced with auto}
    // for (vector<int>::iterator i = vec.begin(); i!= vec.end(); i++){
    for (auto i = vec.begin(); i!= vec.end(); i++){
        cout<<  *i<< " ";
    }
    cout<<endl;

    // RANGE LOOP:

    // Now notice one thing, calling below lines actually creates and copy of pair, w is the copy of original value,
    // Hence any change in w will not affect original data
   
    // for (auto w: p){ // since p vector contains pairs, hence auto will convert to pair
        // w.first++;   // Value is only incremented locally, not in the data structure 
    
    // to avoid overwork, or if we need to have changes in data while itrating, we must use reference varianble
    for (auto &w: p){ // since p vector contains pairs, hence auto will convert to pair
        w.first++; // Each value is incremented by one 
        cout<< w.first << " "<< w.second<< endl;
    }

    

    return 0;
} 