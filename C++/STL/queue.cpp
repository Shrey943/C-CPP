# include <iostream>
# include <string>
# include <bits/stdc++.h>

using namespace std;

int main()
{
    // All operation's time complexity O(1) except swap

    // Can't initialize or declare with default values
    queue<int> queue1;
    queue1.push(1);
    queue1.push(2);
    queue1.push(3);
    queue1.push(4);
    queue1.push(5);
    cout<< "Our queues size: " << queue1.size()<<endl;
    cout<< "Our front: " << queue1.front()<<endl;
    queue1.pop();
    queue1.pop();
    cout<< "Our new front with 2 pop's: "<< queue1.front()<<endl;
    if (!queue1.empty()) cout<< "Our queues back is sext too: "<< queue1.back()<< endl;

    // Stack, queue or any other datastructure have a option of swap, using which we can interchange tha values, just the condition is to have 
    // Same datastrucuture definition, sizes may differ

    queue<int> newq;
    newq.push(99);
    cout<< "Size of our new queue before swapping is: "<<newq.size()<<endl;
    newq.swap(queue1); // We could use any queue's swap function to swap data
    cout<< "Size of our new queue after swapping is: "<<newq.size()<<endl;
    cout<< "Size of our old queue after swapping is: "<<queue1.size()<<endl;

    // We can traverse a queue or stack using for loop BUT we can not use range based loop as it requires a begin function which is not available
    // in stack or queue

    // In stack and queue, you can not traverse the datastructure, to do so, either create a copy and pop all the elements till it becomes empty
    // for (int i = 0; i<newq.size(); i++){
    //     // cout<< newq.front()<< " "; // you can't use this as front remains constant
    // }

    while(!newq.empty()){
        cout<<newq.front()<< " ";
        newq.pop();
    }

    // WE CAN USE DEQUEUE IF WE WANT TO TRAVERSE A QUEUE AS IT SUPPORTS ITERATORS


    return 0;
}