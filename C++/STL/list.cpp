# include <iostream>
# include <string>
# include <bits/stdc++.h>

using namespace std;

void display(list<int> list){
    
    cout<< endl;
    for (auto i: list){
        cout<<i<<" ";
    }
    cout<<endl;    
}

int main()
{
    list<int> ll = {2342345,345,342,5,3,24,5,234,5,324,5,234,5};
    display(ll);   
    ll.push_back(100);
    ll.push_front(00);
    int n = ll.size();
    // ll.insert(ll.begin()+ n, 55); // wrong as linked list is not a continuous memory datastructure
    auto it = ll.begin();
    // So if I want to insert in it+n/2 position, then do I need to have a for loop?
    // No, I can use advance function
    advance(it, n/2);
    ll.insert(it, 5, 55); // This will add 55, 5 times at specified position
    ll.insert(it, 55);
    display(ll);

    // Remove duplicates and sort list: In both below functions, we cam give a comparator to specify criteria
    ll.unique(); // NOTE: It only removes the consecutive duplicates
    display(ll);

    // If we want to remove all the duplicates, then first sort the data using below function and then use unique function
    ll.sort(); // sorts the linked list
    ll.unique();
    display(ll);

    // We can remove elements from linked list in following ways:
    ll.pop_front();
    ll.pop_back();
    ll.remove(5); // removes all the occurances of 5
    // ll.erase(); // Takes the iterator of object to remove or the range of object to remove
    auto itr = ll.begin();
    advance(itr, 3);// Remember: it increments the iterator by 3, i.e. if it was pointing to index 0 then it will point to index 3
    ll.erase(itr);
    display(ll);
    auto itre  =ll.begin();
    advance(itre, 5);
    // Can't use itr or it below as now those iterators do not exist(erased using function by us)
    ll.erase( itre, ++itre);
    display(ll);
    cout<< "Reverse: "<<endl;
    ll.reverse();
    display(ll);

    cout<< "Our list's front is "<< ll.front()<<" and back is "<<ll.back()<<endl;
    // WE can use ll1.merge(ll2) to merge 2 sorted lists to new sorted list
    // list<int> ll1 = {1,42,2,3,234,2,34}; 
    list<int> ll1 = {1,2,3,4,5,95}; 
    list<int> ll2 = {12,23,34,56}; 
    // list<int> ll2 = {98,6,7,64,8,76,9,8,785};
    ll1.merge(ll2); // Since not sorted, hence merged randomly, uses merge sort algo
    display(ll1);
    // NOTE: AFTER MERGE, LL2 DO NOT EXIST 
    display(ll2);

    ll2.assign(ll1.begin(), ll1.end()); // Copies elements and replaces existing.
    // ll1.assign(5, 100); // 5 times 100
    display(ll2);

    // Or simply:
    ll2 = ll;
    display(ll2);
    // We can also use swap
    // We can use splice to transfer elements of one list to another at same index.
cout<<"ll: ";
    display(ll);
    // Anywhere below, wherever iterator is used, we can use a separate variable of iterator to have a better cmd
    // ll2.splice(ll2.end(), ll);// At end ll will be cut and copied, i.e. ll becomes empty
    ll2.splice(ll2.begin(), ll, ll.begin(), ++ll.begin()); // Only first copied, as second iterator is excluded
    display(ll2);
    cout<<"ll: ";
    display(ll);
    // S
    // ll.splice(ll.end(), ll2, ll2.begin()); // only second element copied
    // display(ll);
    // ll.splice(ll.begin(), ll2, ll2.begin(), ++ll2.begin());// first second element copied to ll2
    // display(ll);



    return 0;
}