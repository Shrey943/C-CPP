# include <iostream>
# include <string>
# include <bits/stdc++.h>

using namespace std;
void display(priority_queue<int> pq){
    while(pq.size()){ // Will iterate till size becomes zero
    cout<<pq.top()<<" "; // Can only access top element
    pq.pop();           // O(log n)
    }
    cout<<endl;
}
int main()
{
    priority_queue<int> pq;
    pq.push(3); // O(log n)
    pq.push(5);
    pq.push(2);
    pq.push(5);
    pq.push(1);
    pq.push(7);
    pq.push(2);
    pq.push(34);

    display(pq);    

    int arr[] = {1, 2,3, 4, 5};
    priority_queue<int> pq2(arr, arr+5); // Yep like that too
    display(pq2);

    // Below is the syntax for priority queue from low to high (min heap)
    priority_queue<int, vector<int>, greater<int>> pq3; // The vector in argument is just the syntax and had to do nothing with initialization.
    pq3.push(5);
    pq3.push(2);
    pq3.push(5);
    pq3.push(1);

    while(pq3.size()){ // Will iterate till size becomes zero
    cout<<pq3.top()<<" "; // Can only access top element
    pq3.pop();           // O(log n)
    }
    cout<<endl;

    return 0;
}