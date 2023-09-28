# include <iostream>
# include <string>
# include <bits/stdc++.h>
using namespace std;

void display(map<string, int> map){

    cout<< "Size of map: "<< map.size()<< endl; // O(1)
    // for(auto it = map.begin(); it != map.end(); it++){
    //     cout<<it->first << " "<< it->second<< endl;
    // }
    for (auto &it: map){ // Used reference to avoid making copy, 'it' will be a pair 
        cout << it.first << " " << it.second<< endl;
    }
}

void display(unordered_map<string, int> map){

    cout<< "Size of map: "<< map.size()<< endl; // O(1)
    // for(auto it = map.begin(); it != map.end(); it++){
    //     cout<<it->first << " "<< it->second<< endl;
    // }
    for (auto &it: map){ // Used reference to avoid making copy, 'it' will be a pair 
        cout << it.first << " " << it.second<< endl;
    }
}
void display(map<int, int> map){

    cout<< "Size of map: "<< map.size()<< endl;
    // for(auto it = map.begin(); it != map.end(); it++){
    //     cout<<it->first << " "<< it->second<< endl;
    // }
    for (auto &it: map){ // Used reference to avoid making copy, 'it' will be a pair 
        cout << it.first << " " << it.second<< endl;
    }
}
int main()
{   
    // Any type of map, stores pair internally.

    map<string, int> map1 = {{"s", 4375809}, {"h", 3425}, {"m", 2345}};
    display(map1);

    // All the op's below will take logn time
    map<int, int> map2;
    map2[1] = 999;
    map2.insert({3, 888});
    map2[2];
    map2[-3]++; // yes valid, value will automatically assigned to 0 and then will be incremented by 1
    display(map2);

    //iterator can be increamented by ++ and it will point to next element
    map1.insert({"Shrey", 100});      // O(logn) * size of string

    auto it = map1.find("Shrey3");    // O(logn) returns iterator 
    
    if (it == map1.end()){
        cout<<"Not found"<<endl;
    }else{
        cout<<"found";
    }
    
    it = map1.find("m");
    cout<< it->first<< endl;

    // By iterator: remember to check if it!=map.end() as it would throw an error 
    map1.erase(it); // O(1) as iterator is provided
    // By Value:
    map1.erase("h"); // O (logn) requires logn time as it needs to search the element.

    // Just the difference between emplace and insert is that in insert, we create copy of pair {"sdf", 99}, then send it, while here directly 
    // values are sent.
    map1.emplace("sdf", 99); // O(logn)
    // map1.emplace("s", 101); // DOes nothing

    display(map1);

    map1.clear();
    display(map1);

    // swap(map1, map2); // Can't as datatypes are different.
    // display(map2);

    // Display map in desencending order:
    cout<<"Displaying results in reverse order";
    for (auto itr  = map2.rbegin(); itr!=map2.rend(); itr++){
        cout<<itr->first<< " "<< itr->second<< endl;
    }

    // Count: we can use this in alternate to find. It returns the count of key, as all the keys are unique in maps, it returns 1 if present 
    //        else return 0.
    display(map2);
    cout << "Count of the number 1: "<< map2.count(1)<<endl;
    cout << "Count of the number 5: "<< map2.count(5)<<endl;

    map<vector<int>, int> map3; // This will compile in the case of map, but won't in the case of unordered map
    map3.insert({{32,234234,234}, 99});  
    // display(map3);


    // unordered map - implemented using hash table, gives a constant time complexity advantage, stores unique keys only
    unordered_map<string, int> unmap = {{"shrey", 101}};
    cout<<"is our map empty: "<< unmap.empty()<<endl;
    unmap["rudraKatni"] = 1000; // O(1) time operation, regardless of the size of string '
    unmap.insert({"sejal", 109});
    auto ite = unmap.find("rudraChomu"); //O(1)
    if (ite == unmap.end()){
        cout<<"user not found in life!!"<<endl;
    }else
    { 
        cout<<"ho hi nai skta."<<endl;
    }
    unmap["adf"] = 234;
    unmap["adfssad"] = 423;
    display(unmap);
    ite = unmap.find("adf");
    unmap.erase(ite); // O(1)
    unmap.erase("adfssad");
    unmap.erase("djfl"); // Will throw an error, hence need to check through find, before calling it!
    display(unmap);

    cout<<"count of shrey is: "<<unmap.count("shrey")<<endl;

    // Returns the number of bucket in which key is store in
    cout<<unmap.bucket("shrey")<<endl;

    // equal_range: returns a pair, whose first value is a iterator to the first element of range, and second is the iterator to the next element of the last occurance.
    // for example, if we have a arrat like 13 1 123 1 11423 1231 1423 1432 1 1 5, and we use equal_range(1) then it will return iterator from 
    // index 1 & 10(since last 1 is at 9)
    



    return 0;
}