# include <stdio.h>

int main(){
    int day,weekDay;

    printf("Enter day : "); 
    scanf("%d",&day);
    weekDay = day%7;       //To consider every day above 7 too
    
    switch(weekDay){

        case 0: printf("SUNDAY");
        break;
        case 1: printf("MONDAY");
        break ;
        case 2: printf("TUESDAY"); 
        break;
        case 3: printf("WEDNESDAY"); 
        break;
        case 4: printf("THURSDAY"); 
        break;
        case 5: printf("FRIDAY"); 
        break;
        case 6: printf("SATURDAY"); 
        break;
        default: printf("Enter correct day.");
    }

    return 0;
}