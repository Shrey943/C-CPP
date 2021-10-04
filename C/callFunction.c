#include <stdio.h>
#include <stdlib.h>

void call_by_value_fun(int original);
void call_by_ref_fun(int *original);

int main()
{
    int original;

    printf("Enter original value: ");
    scanf("%d", &original);

    call_by_value_fun(original);

    printf("\nFinal value is: %d", original);

    call_by_ref_fun(&original);

    printf("\nFinal value is: %d", original);
    return 0;
}

void call_by_value_fun(int original)
{
    printf("\nFunction called by value");
    printf("\nEnter value you want it to change: ");
    scanf("%d", &original);
}

void call_by_ref_fun(int *original)
{
    printf("\nFunction called by reference");
    printf("\nEnter value you want it to change: ");
    scanf("%d", *original);
}
