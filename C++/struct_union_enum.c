#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id;
    char *name; // Now can store strings directly as below
    int salary;
} emp1, emp2, emp3; // we can initiate variables as such also

typedef struct Emp //We can access through both names
{
    int id2;
    char *name2;
    int salary2;
} Employee;

union paymentMode // Now since the user only gonna use one of the following mode, so only memory of largest field
{                 // i.e. coupon , size 11 is the total memory used.
    int cash;
    int upi;
    char *coupon; // coupon code could be alpha numeric
};

enum week
{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

int main()
{
    emp1.id = 1;         // Since we need every field for each employee hence struct is used. But it consumes memory equal
    emp1.name = "Shrey"; // to sum of memory required by each field
    emp1.salary = 10000000;

    // struct Employee emp5; // ye na likhna pade isliye typedef krte h
    Employee emp5;
    emp5.id2 = 101;
    emp5.name2 = "Shrey2";
    emp5.salary2 = 100;

    printf("emp5 : %d %s %d \n", emp5); //Prints all 3

    struct Emp emp6; //We can use both names
    emp6.id2 = 101;
    emp6.name2 = "Shrey2";
    emp6.salary2 = 100;

    union paymentMode pMode;
    pMode.cash = 1200;
    pMode.upi = 1500;
    pMode.coupon = "dsfasdfsad";

    printf("Size of union is  : %d\n", sizeof(pMode)); // 12
    printf("Union value : %s\n", pMode); // Gives only the last value assigned else garbage value

    enum week day = monday;  // Now a variable holds a value for me without even assigning or declaring. I can use
                             // This monday as the 0 value.
    printf("Index of day is : %d\n", monday);
    return 0;
}