# include <stdio.h>

int circumOfCircle(int radius);
int circumOfRectangle(int length , int breadth);

int main(){

    int radius, length, breadth;
    
    printf("Enter radius of circle : ");
    scanf("%d",&radius);

    printf("Circumference of circle is %d",circumOfCircle(radius));
    
    printf("Enter length of rectangle : ");
    scanf("%d",&length);
    printf("Enter breadth of rectangle : ");
    scanf("%d",&breadth);

    printf("Circumference of rectangle is %d",circumOfRectangle(length,breadth));

    return 0;
}

int circumOfCircle(int radius){
    int circum = 2*3.14*radius;
    return circum;
}

int circumOfRectangle(int length,int breadth){
    int circum = 2*length + 2*breadth;
    return circum;
}