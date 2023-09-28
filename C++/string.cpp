# include <iostream>
# include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str); // Takes line as input, or we could had simply used cin to enter word

    str.push_back('S');
    cout<<"After pushing: "<<str<<endl;
    str.pop_back();
    cout<<"After popin: "<<str<<endl;
    str.append(" Shrey");
    cout<<"After appending a whole string : "<<str<<endl; 

    cout<<"Length of our string is: "<< str.length()<<endl; // O(1)
    
    // substr(starting position, length to copy)
    // string sub = str.substr(str.begin(), 5); // Do not use iterator, use index instead
    string sub = str.substr(0, 5); // Excluding 5
    cout<< "Substring from zero to 4: "<<sub<<endl;
    string sub2 = str.substr(6); // Sub from 6 to end
    cout<< "Substring from 6 to end: "<<sub2<<endl;

    // Find a substring in string: Returns the 
    cout<< "Is Shrey present? Then what position? "<< str.find("Shrey")<< endl; // we can also specify starting position to start searching from  
    cout<< "Is Jain present? "<< ((str.find("Jain") != string::npos)?"Yes": "No")<< endl; // it returns a npos(highest) value if not found

    // It provides us the functionality of iterators like begin, end, rbegin, rend
    cout<< "reverse traversal: "<<endl;
    auto it = str.rbegin();
    while(it != str.rend()){
        cout<<*it;
        it++;
    }
    cout<<endl;

    // Also have swap function
    str.swap(sub);
    cout<<"Old String: "<<str;





    return 0;
}