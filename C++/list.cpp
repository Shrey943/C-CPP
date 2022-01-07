#include <iostream>
#include <list>
#include <string>

using namespace std;

template <class T2>
void display(list<T2> &listObj)
{
    typename list<T2>::iterator it; // *** iterator mai template use krne typename likhna bahut zaruri h,
                                    //     verna mese poocho, 1 ghante se sooch ra tha kya error h:) ***

    for (it = listObj.begin(); it != listObj.end(); it++)
    {
        std::cout << *(it) << ", ";
    }
    std::cout << std::endl;
}

bool is_even(const int &val) // Its a uniary predicate function which takes value of same datatype and returns true or false
{
    // return (val % 2 == 0) ? true : false;
    return (val % 2 == 0);
}
int main()
{
    list<int> list1;          // creats empty list.
    list<float> list2(3);     // creats a list with 3 elements and initializes them as 0
    list<float> list3(list2); // copys list2
    list<string> list4(5, "Shrey");
    list<string> list5(list4.begin(), list4.end()); // list4.end returns 1 more than that of end hence whole list is copied

    list<int>::iterator itr;

    cout << "list4: ";
    display(list4); // See bina datatype likhe bhi apan use kr skte h function, ye toh auto detect bhi krta h

    cout << "list3: ";
    list3.push_back(2.32);
    display(list3);

    list1.push_back(23);

    cout << "list1: ";
    display(list1);

    cout << "list5: ";
    display(list5);

    // Update

    itr = list1.begin();
    *itr = 10;

    list1.push_back(3234);
    list1.push_back(32);
    list1.push_front(101);

    std::cout << "updated List1: ";
    display(list1);

    // ASSIGN

    list1.assign(7, 100); // Overrides existing list and assigns list of 7 element with 100

    cout << "Assigned list1: ";
    display(list1);

    // Reverse
    list3.reverse();
    cout << "reversed list3: ";
    display(list3);

    // Ek aur usful dekho, UNIQUE: Removes duplicate values
    list3.unique();
    cout << "Unique list3: ";
    display(list3);

    list5.unique();
    cout << "Unique list5: ";
    display(list5);

    // Remove and remove if
    cout << "list1 before: ";
    display(list1);
    list1.remove(100); // Removes every 100
    cout << "remove list1: ";
    display(list1);

    // Remove if - Ye mst h Dekhna
    list1.push_back(23);
    list1.push_back(2);
    list1.push_back(450);
    list1.push_back(65);
    list1.push_back(100);
    list1.push_back(1);

    cout << "list1 before remove-if: ";
    display(list1);

    // list1.remove_if(<function as an obj>); // TAKES FUNCTION AS AN ARGUMENT
    list1.remove_if(is_even); // () nai lagana h, as function paas krna h, ()ye lagane se function call hota h
                              // Python mai padha toh tha
    cout << "even removed list1: ";
    display(list1);

    return 0;
}