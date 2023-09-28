#include <bits/stdc++.h>
#include <vector>
using namespace std;


void display(vector<int> &vec){

    for (int i: vec){
        cout<<i<< " ";
    }
    cout<<endl;
}

void fill(vector<vector<int>> &vec_of_vec){ // Took reference, else nothing will get changed

    vector<int> vec;
    
    for (int i = 1; i <=5; i++){
        vec_of_vec.push_back(vec); // This is needed as no vector exist at i-1th positiion at this point of time

        for (int j = 1; j <6; j++){
            vec_of_vec[i-1].push_back(j*10);
        }
    
    }
}

int main (){

    vector<int> vec1 = {0,1,2,3,4,5,6,7};
    vector<int> vec3(5); // array of 5 elements with 0 as initial value
    vector<int> vec4(5, 1); // array of 5 elements with 1 as initial value
    
    display(vec3); // while calling this function, since copy is created, hence we can use reference variable to reduce 
                   // timecomplexity from O(n) to O(1) {if we don't need to change the values, then it's an good idea}
    
    vec4.push_back(10);
    display(vec4);
    
    vector<int> vec2;
    cout<< vec1.size()<< endl; // Constant time O(1)
    cout<< vec2.size()<<endl;  // Size= 0
    vec2.push_back(3);
    vec2.push_back(36);

    // Copy a vector:
    vector<int> vec5 = vec2;
    // vector<int> &vec5 = vec2; // It would create a reference and hence any change in one, affect the other
    vec5.push_back(4);
    display(vec2);
    display(vec5);

    vec5.pop_back();
    vec5.pop_back();
    cout<< "Vec 5 after poping 2 elements"<<endl;
    display(vec5);

    cout<< "front element of vec1 : " << vec1.front()<<endl;
    cout<< "last element of vec1 : " << vec1.back()<<endl;
    cout<< "5th element of vec1 : " << vec1[4]<<endl;
    cout<< "3rd element of vec1 : " << vec1.at(2)<<endl;

    display(vec3);
    vec3.assign({234,234,23,4,23,4});
    display(vec3);

    // Index not accepted in below functions, iterator is important
    // vec3.insert(1, 10); // Insert 10 at index 1
    // vec3.emplace(1, 10); // Insert 10 at index 1
    vec3.insert(++vec3.begin(), 10); // Insert 10 at index 1
    display(vec3);
    // emplace is avail in all the datastructures, it avoid the duplicate copy of data, and does in-place insertion
    // Just an alternative to insert
    vec3.emplace(++vec3.begin(), 9); // Insert 10 at index 1
    display(vec3);
    vec3.erase(++vec3.begin());
    display(vec3);
    cout<< "'size of vec3: '"<< vec3.size()<<endl;
    vec3.clear();
    cout<< "'size of vec3: '"<< vec3.size()<<endl;

    cout<<"Vec2: "; 
    display(vec2);
    cout<<"Vec1: ";     
    display(vec1);

    vec2.swap(vec1); //swap 2 vectors, no matter if the number of elements are same or not

    cout<<endl;
    cout<<"Vec2: "; 
    display(vec2);
    cout<<"Vec1: "; 
    display(vec1);

    // Nested vectors:
    vector<pair<string,int>> v_p(5, {"shrey",0}); // vector of pair
    v_p.push_back({"last", 99});
    
    // for(vector<pair<string, int>>::iterator it = v_p.begin(); it != v_p.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // Always remember, with range for loops, a copy is created, i.e. it is the temp copy of original value, hence no
    // change is reflected on original datastructure.
    for(auto it: v_p){
        cout<<it.first<<" "<<it.second<<endl;
        // it.first--; // Means nothing, as it is just a copy and will be destroyed after this.
    }

    // Array of vector:
    vector<int> v[5];  // An matrix of fixed row but dynamic column
    v[0].push_back(1); 
    v[1].push_back(2); 
    v[2].push_back(3); 
    v[3].push_back(4); 

    // for (int i = 0;  =)

    for (int i = 0; i<sizeof(v)/sizeof(v[0]); i++){
        display(v[i]); // since each element is an vector

    }
    cout <<endl;
    // VECTOR OF VECTOR - Dynamic row and column 

    vector<vector<int>> vec_of_vec; 

    cout<<"Initial size: "<< vec_of_vec.size()<<endl; // Currently size is zero, nothing under it

    fill(vec_of_vec);


    for (int j = 0; j < vec_of_vec.size(); j++){
        display(vec_of_vec[j]);
    }

    cout<< endl;
    // display(vec1);
    // Using iterator, lets reverse the tiversal:
    // rbegin points to last element and rend points to a element before 1st element
    display(vec2);
    for(auto itr = vec2.rbegin(); itr != vec2.rend(); ++itr){
        cout<< *itr<< " ";
    }

    return 0;
}