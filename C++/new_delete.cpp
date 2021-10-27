#include <iostream>
using namespace std;

int main()
{
    int a = 13;
    int *b = new int(12);
    float *c = new float(99.99);

    // printf("a: %d, b: %d, c: %c", a, b, c);

    std::cout << "a: " << a
              << " b: " << *b // b and c are pointers babua
              << " c: " << *c

              << std::endl;
    int *arr = new int[5];

    arr[0] = 1;
    *(arr + 1) = 2; // arr is the address of first element and adding 1 increments it's address to next address(according to the size of each
                    // element, Now you may thing but address ke liye toh 4 plus krna tha, toh bete, operator overloading jante ho na, bs ussi
                    // ke chalte + 1 mai kitna plus krna h, ye compiler mai different ho skta h)

    arr[2] = 3;
    arr[3] = 4;
    *(arr + 4) = 5;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Element: " << arr[i] << std::endl;
    }

    // delete a; // Kya apan non dynamic ko delete kr skte h? Ye attempt toh fail, delete takes Pointer
    delete &a; // Kya apan non dynamic ko delete kr skte h? Naa...ye kaam nahi kia
    delete c;  // Pr ye barabar kia

    std::cout << "a: " << a
              << " b: " << *b
              << " c: " << *c

              << std::endl;

    // Experiments with array:

    // delete arr[1]; DELETE bhaiya ji ko toh bs pointer chaiye
    // delete arr[3];

    // delete arr; Kuch nahi hua
    delete[] arr; // abhi bhi nai hua, Kyoki necessary nai h ki vo memory use ho hi jaaye bs free ho gai h dusre ke liye use karne.

    int *z = new int(13);
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Element: " << arr[i] << std::endl;
    }

    return 0;
}