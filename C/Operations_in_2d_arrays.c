#include <stdio.h>

int main()
{

    int arr1[2][3], i, j;
    int k, l;

    //Inserting
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("Enter value for array[%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nEntered array is: \n");

    //Transversing
    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    //Deletion
    printf("\nEnter index of element to be deleted: ");
    scanf("%d%d", &k, &l);
    arr1[k][l] = 0;

    printf("\nUpdated array is: \n");

    //Transversing
    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
}