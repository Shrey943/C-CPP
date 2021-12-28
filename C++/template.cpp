#include <iostream>
#include <string>
using namespace std;

struct TestDataType
{
    int id;
    string name;
};

template <class T = int> // Default datatype
class Vector
{
    int length;

public:
    T *arr;

    Vector(T size)
    {

        length = size;
        this->arr = new T[length];
    }

    template <class T2>    // Example of function template
    T sum(Vector<T2> &obj) // Since jis object ka reference de raye vo koi bhi datatype ho skta h isiliye template use kia
    {                      // Old T isiliye use nai kia kyoki vo toh pehle se hi is class ke barabar hoga
        T sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += this->arr[i] + obj.arr[i];
        }
        return sum;
    }

    void print()
    {
        cout << "ARRAY: ";
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << ", ";
        }
        cout << endl;
    }
};

template <class T, class T2 = string, class T3 = char>
class DataCollector
{
public:
    T data1;
    T2 data2;
    T3 data3;
    DataCollector(T data1, T2 data2, T3 data3)
    {
        this->data1 = data1;
        this->data2 = data2;
        this->data3 = data3;
    }

    void display();
};

// Dekho yaar, template ka jo coverage h na vo sirf ek class ya ek function tk ka hi rehta h.
// Ab agar apan ko koi member function outside class declare krna h toh apan pehle waale template variable
// use nai kr SKTe aur member function likhte time class ka naam toh likhna padta h na, aur template use
// Krliya ek class mai toh sirf classname ko compiler jaanta hi nai h, <> ye laga ke datatype toh dena
// PAdega, isiliye outside member function likhte time firse class template likna padta h.

// Aur han, member function can't have default arguments toh normal hi likh do

template <class T, class T2, class T3> // Can't have default arguments for member function
void DataCollector<T, T2, T3>::display()
{
    std::cout << "Data1: " << this->data1 << std::endl;
    std::cout << "Data2: " << this->data2 << std::endl;
    std::cout << "Data3: " << this->data3 << std::endl;
}

// Swap ka function toh likhe hi hoge, ab ek baar swap likh ke har datatype ko kaise swap krte h ye dekho

// template <class V1 = int, class V2 = int> // Dekho yaar apan ye cheez toh kr skte the but isme problem
// void swap(V1 &var1, V2 &var2)             // Kya h ki agar var 1 int and var2 char hua toh apan char
// {                                         // mai int nai rakh skte na isiliye koi ek datatype rakho

//     V1 temp = var1;
//     var1 = var2;
//     var2 = temp;
// }

template <class T = int>
void swapFunc(T &var1, T &var2)
{
    std::cout << "hello! inside template swap function." << std::endl;
    T temp = var1;
    var1 = var2;
    var2 = temp;
}

void swapFunc(int &var1, int &var2)
{

    cout << "hello! inside normal swap function. Aur mai kuch nai krta hu, hehehe...." << std::endl;
}
int main()
{
    Vector<> arr1(3); // Using dafault datatype
    arr1.arr[0] = 23;
    arr1.arr[1] = 2;
    arr1.arr[2] = 43;

    arr1.print();

    Vector<float> arr2(3);
    arr2.arr[0] = 23.43;
    arr2.arr[1] = 2.5;
    arr2.arr[2] = 4.3;

    arr2.print();

    std::cout << "Sum of arr1 + arr2 : " << arr1.sum(arr2) << std::endl;

    Vector<char> arr3(3);
    arr3.arr[0] = 'a';
    arr3.arr[1] = 'R';
    arr3.arr[2] = 'Z';

    arr3.print();

    cout << endl;

    DataCollector<float> dataObj(67.8, "Shrey", 'J'); // sirf ek datatype dena pada baaki default
    dataObj.display();

    // DataCollector<char, struct TestDataType, int> dataObj2; // We can use this, but iske liye constructor banana padega alag se

    // Accha agar aisa krte toh?
    // int var1;
    // string var2;

    // swap<int, string>(var1, var2); // Error toh aani hi thi, template string mai int daalne ki koshish
    // toh karege liken ye ho nai skta isiliye 1 datatype do

    string emp1 = "Rudra", emp2 = "Dikshita";
    swapFunc<string>(emp1, emp2);

    std::cout << endl
              << "emp1: " << emp1 << std::endl;
    std::cout << "emp2: " << emp2 << std::endl;

    int empID1 = 101, empID2 = 102;
    swapFunc(empID1, empID2); // *** Ye dekho.....Bina brackets ke bhi default use kr skte h***

    std::cout << endl
              << "emp1: " << empID1 << std::endl;
    std::cout << "emp2: " << empID2 << std::endl;

    // Accha jaisa apan ne uper dekha ki template function bina bracket ke bhi use kr skte h toh agar isi
    // Ko overload kare toh???Chalo dekhte h

    swapFunc(empID1, empID2);

    // Hmm.. Dekha, above func call template ke hisaab se toh sahi tha but c++ compiler exact match ko jyada
    // Preference dekta h, and because normal function mai parameters fix int hi h, toh vo call hua.
    return 0;
}