#include <iostream>
#include <vector>

using namespace std;

// template function to display any datatype vector
template <class T>
void display(vector<T> &vec) // taking reference of a vector class object with T datatype
{
    std::cout << endl
              << "Vector of size " << vec.size() << " : ";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << ", "; // We can access elements normally as that of array.
        // vec.at(i) // i = index, ye bhi use kr skte h element access krne
    }
    cout << endl;
}

int main()
{
    int size, element; // size Just needed to take input from user, else no need

    // Ways to create vector
    vector<int> vec1;

    vector<char> vec2(5); // creates empty vector of size 5.
    vec2.push_back('A');  // Empty place ek element jaise hi cout hoga, you can update them, but push back un 5 ke baad hoga
    vec2.insert(vec2.end(), 5, 'Z');

    cout << "Vec2: ";
    display(vec2);

    vector<char> vec3(vec2); // Creates a copy of vec2

    cout << "Vec3: " << endl;
    display(vec3);

    vector<float> vec4(5, 4.5); // Creates a vector of size 5 initialized as 4.5
    display(vec4);

    vec2.erase(vec2.begin(), vec2.begin() + 5);
    vec3.clear();
    vec3.insert(vec3.begin(), vec2.begin() + 2, vec2.begin() + 5); // Inserting a vector to another vector

    cout << "Vec2: ";
    display(vec2);
    cout << "Vec3: ";
    display(vec3);

    // SWAPPPPPP OF VECTORS:
    vec2.swap(vec3);
    cout << "Vec2: ";
    display(vec2);
    cout << "Vec3: ";
    display(vec3);
    

    // std::cout << "Is vec1 empty?: " << vec1.empty() << std::endl;
    // std::cout << "Is vec2 empty?: " << vec2.empty() << std::endl; // FAlse because its filled with nothing of size 5
    // display(vec2);

    // cout << "How many elements do you want to insert now?: ";
    // cin >> size;
    // cout << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     std::cout
    //         << "Enter element for position " << i + 1 << " : ";
    //     cin >> element;
    //     vec1.push_back(element); // insertion at back(end)
    // }

    // display(vec1);
    // cout << "Capacity: " << vec1.capacity() << endl;

    // cout << endl
    //      << "Poping the last element-> " << endl;
    // vec1.pop_back();
    // display(vec1);

    // // Lets see max size kya h(returns ki apna vector is pc mai kitne elements store kr skta h)
    // // std::cout << "Max Size: " << vec1.max_size() << std::endl; // Ye toh bahut zyada h

    // // INSERTION (at specific position):
    // // Now since there are no index, we will use iterators

    // vector<int>::iterator iter = vec1.begin(); // To store a iterator(index hi smjho re) we need to crate it likethis
    //                                            // begin() function returns an iterator pointing to first element.

    // std::cout << "Insertion at beginning: " << std::endl;
    // vec1.insert(iter, 55);
    // display(vec1);

    // // Ek mst cheez aur dekho, kitne same elements is position se insert krne h ye bhi kr skte h apan
    // std::cout << "Inserting 943, 500 times at position 3:" << std::endl;
    // vec1.insert(iter + 2, 500, 943);
    // display(vec1);

    // /*

    //     *****Iterator no longer valid after inserting any number n times, we need to create new one *****

    // */

    // // To insert at any other position just add to iter(iter ko 0 index maan, aur apne hisaab se plus kr le)
    // int position;
    // std::cout << "At which position you want to insert new element: ";
    // cin >> position; // starts with 1

    // // YE DEKHO......
    // vec1.insert(vec1.begin() + (position - 1), 101); // iter 0 h and position 1 se chaalu h hence

    // display(vec1);

    // // Erase Element:
    // vec1.erase(vec1.begin() + 3); // Erasing 4th element
    // display(vec1);

    // vec1.erase(vec1.begin(), vec1.begin() + 3); // Erase first 3 elements
    // display(vec1);

    // // Clear Element:

    // vec1.clear(); // Erase all
    // display(vec1);

    return 0;
}