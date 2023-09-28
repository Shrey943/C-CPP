# include <iostream>
# include <string>
# include <bits/stdc++.h>

using namespace std;

// Next Greater Element
vector<int> NGE(vector<int> vec){

    stack<int> stack; // will store the index of elements
    vector<int> results(vec.size()); // will store the index, we initialized vector so we can directly access using index

    cout<<"Outside loops: "; 
    // We will play everything with index to make it easier.
    for (int i = 0; i< vec.size(); i++){
        while(!stack.empty() && vec[i] > vec[stack.top()]) //as stack top will store the index to elements
        {
            // NOTE: Below u are accessing element of a vector by index, hence must need to initialize elements or use push_back;
            results[stack.top()] = i;
            stack.pop();
        }
        stack.push(i);
    }
    while(!stack.empty()){
        results[stack.top()]  = -1;
        stack.pop();
    }
    return results;
}

int main()
{
    // Int ka banao chaahe string ka banao, store toh LIFO ke hissab se hi hona h toh fark nai padta
    // In stack and Queue, there is nothing such as default values, hence we can not initialize any values as following
    // stack<int> stack(324);
    // stack<int> stack  = {234,2,32,4,3,2,34,4} ;

    // NOTE: all operations: O(1)
    // Correct way:
    // stack<int> stack1;
    // if (stack1.empty()) stack1.push(234);
    // stack1. push(2);
    // stack1.push(4);
    // stack1.push(5);
    
    // cout<<"cuurent top of the stack: "<< stack1.top()<<endl;
    // cout<<"let's pop it!"<<endl;
    // if (stack1.size()> 0) stack1.pop(); // Better option is to use empty(), used size to demonstrate the function
    // cout<<"New top: "<<stack1.top()<<endl;


    // Question: find the next greater element of the array, return an array that corresponds to the next greater element of array(-1 if none)
    // Example:   ex: 1,4,2,23,4,2,8,3  -> 4,23,23,-1,8,8,-1  time complexity limit: O(1)
    
    // We can solve it using stack 
    vector<int> input = {1,4,2,23,4,2,8,3};
    vector<int> output = NGE(input);

    cout<<"Next greater elements are: "<< endl;
    for(int j = 0; j < input.size(); j++){
        // NOTE: Since output[j] also contains -1, then input[-1] will point to a garbage value, hence need to take care of that
        cout<<input[j]<< " : "<< ((output[j] == -1) ? -1 : input[output[j]]) << endl;
    }


    return 0;
}