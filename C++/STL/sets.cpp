# include <iostream>
# include <string>
# include <bits/stdc++.h>

using namespace std;


void display(auto set){ // It works, but avoid using this
    cout << endl;
    for (auto i : set){ // Since set do not contain any pair, hence i will be just an int
        cout<<i<< " "; 
    }
    cout<<endl;
}
void display(multiset<set<int>> set){ // It works, but avoid using this
    cout << endl;
    for (auto i : set){ // Since set do not contain any pair, hence i will be just an int
        for (auto j: i){
            cout<<j<<" ";
        }
        cout<<endl; 
    }
    cout<<endl;
}

// void display(set<string> set){
//     cout << endl;
//     for (auto i : set){ // Since set do not contain any pair, hence i will be just an int
//         cout<<i<< " "; 
//     }
//     cout<<endl;
// }

bool compare (int data1, int data2){
    return (data1%2 == 0) ? true : false; //ternery mai if NAHI likhte h
}



int main()
{
    // datatype can be a vector, pair, set, map, etc.
    set<int> s1 = {4,3,2,1,5,7,4,2}; // You can add 2 duplicates, but it will only contain one 
    s1.insert(0); // logn
    display(s1);

    auto it = s1.find(5); // O(logn)
    if (it != s1.end()) 
        s1.erase(it); // O(1)

    s1.erase(3); // O(logn) as first it needs to check 
    s1.erase(34); // No error is produced

    display(s1);
    
    set<string, greater<string>> s2; // Now the values are stored in decreasing order
    s2.insert("shrey");
    s2.insert("abc");
    s2.insert("jain");
    // Well to be honest, we don't need greater, as we can use rbegin and rend to traverse in reverse order of set.
    display(s2);

    // NOTE: instead of this, we can even give a function to compare values and store it in stored manner as we want
    // set<datatype, compareFunc>; // need not to call the function
    set<int, decltype(&compare)> s3(&compare);
    s3.insert(2);
    s3.insert(4);
    s3.insert(67);
    display(s3);

    cout<<"Unordered Set: "<<endl;
    // unordered set:
    unordered_set<int> us;
    us.insert(123);
    us.insert(23);
    us.insert(1);
    us.insert(999);
    cout<<"size: "<<us.size()<<endl;
    us.find(0);
    cout<< "count of 999: "<<us.count(999)<<endl;
    auto o = us.hash_function(); // returns hash functor object using which set was created
    display(us);

    cout<<"Multi set: "<<endl;
    //multiset
    multiset<string> mm = {"shrey", "jain", "is", "a", "good", "a"};
    mm.insert("shrey"); // O(logn)
    display(mm);
    auto ite  = mm.find("shrey"); // O(logn) Returns the iterator to first match(though nxt match is just the nxt iterator)
    mm.erase(ite); // O(1) removes only the element of iterator, i.e. only one element is deleted, duplicates are still present
    display(mm);
    mm.erase("a"); // O(logn) removes all the occurances of a
    display(mm);

    cout<<"Multiset with set: "<<endl;
    multiset<set<int>> mms = {{1,34,5,3}, {213,43}, {43,213}};
    display(mms);


    cout<<"Unordered Multiset: "<<endl;
    // Can't use advance data structures in unordered map 
    unordered_multiset<int> umm = {7,5234,5,34,5,34,5,342,5,324,5};
    display(umm);
    umm.erase(umm.find(5)); // erase's only the first occurance of 5 as find will return the iterator of only first occurance
    display(umm); 

    // Ab isme pata chalega real kaam of count function
    cout<<"Count of 5 is: "<< umm.count(5)<< endl;
    
    // NOTICE: IMPORTANT
    // umm.erase(umm.find(2342)); // DON'T USE THIS IF ELEMENT IS NOT PRESENT(It won't give error, but program misbehaves, so never use it, use a if condition)
    // Using above method can be a worse than just an error, as it will be difficult to find the error
    
    //Better option
    auto itr = umm.find(2342) ;
    if (itr!= umm.end()) 
        umm.erase(itr) ;
    else
        cout<<"Not found"<<endl; 

    // Nesting in maps and sets is of very use and can be done as follows:
    set<pair<int, string>> sp; 
    // Now when any type of nesting is used in maps or sets, since elements needs to be sorted, it internally compare them based upon the 
    // corresponding values of the used datatype, for example: in pair, it compares the first, if it is equal then compare the second(if second)
    // or first is string, then it is compared based on lexographical order.
    // similarly, if vector is used then elements will be compared index wise, moving from 0 to next if found equal.
    sp.insert({1, "shrey"});
    sp.insert({2, "sjdkfl"});
    sp.insert({3, "werq"});
    sp.insert({1, "chosu"});

    // reference is important as if used vector then timecomplexity will be O(n) for each iteration of loop, i.e. O(n^2) as copy is created
    for (auto &i: sp){
        cout<< i.first<< " "<<i.second<<endl;
    }

    //Now when we used vector of vector, then we needed to give definition of internal vectors before assigning them, as vectors are empty initially
    // But if we use vector as datatype, then we can directly use the methods of vector as it is already initialized internally
    map<pair<int, string>, vector<int>> vec_map;
    for (int j = 0; j<5; j++) {

        // vec_map[j+1].push_back({47,423,5,34,6554,36,35});// you can't push back a vector to a vector
        for (int k =0; k<5;k++)
            vec_map[{j+1, "shrey"}].push_back(k*j);
    }

    for (auto &pp : vec_map){
        cout<< "Key: "<<pp.first.first<< " "<< pp.first.second<< "  Value: ";
        for (auto &vec_val : pp.second)
            cout<<vec_val <<" ";
        cout<<endl;
    }

    return 0;
}