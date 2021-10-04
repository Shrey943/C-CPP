# include <stdio.h>
# include <string.h>

struct Student
{
    int rollNo;
    char name[30];
    float marks;

}std[50];

int main(){
    int n;
    printf("Enter the number of students you wonna enter : ");
    scanf("%d",&n);
    
    for (int i = 0 ; i < n ; i++){

        int rollNo;
        float marks;
        char name[30];

        printf("\nEnter Roll Number of %d student : ",i+1);
        scanf("%d",&rollNo);
        printf("\nEnter Name of the student (WITHOUT SPACE) : ");
        scanf("%s",&name);
        printf("\nEnter marks of the student : ");
        scanf("%f",&marks);

        std[i].rollNo = rollNo;
        strcpy(std[i].name,name);
        std[i].marks = marks;
    }

    //display results
    for (int j = 0 ; j < n ; j++){
        printf("\nRoll Number of %d student is : %d",j+1,std[j].rollNo);
        printf("\nName of %d student is : %s",j+1,std[j].name);
        printf("\nClass of %d student is : %f",j+1,std[j].marks);

    }

    return 0;
}