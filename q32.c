//calculate area for circle,suare,rectangle

#include<stdio.h>

void square();
void circle();
void rectangle();

int main(){
    char choice;
    printf("Enter your choice:\n");
    printf("s for Square\n");
    printf("c for Circle\n");
    printf("r for Rectangle\n");
    scanf("%c",&choice);

    if(choice=='s'){
        square();
    }
    else if(choice=='c'){
        circle();
    }
    else if(choice=='r'){
        rectangle();
        }
}

void square(){
    int area,side;
    printf("Enter the side of square: ");
    scanf("%d",&side);
    area=side*side;
    printf("Area of square is: %d",area);
}

void circle(){
    float radius,area;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of circle is: %f",area);
}

void rectangle(){
    int length,breadth,area;
    printf("Enter the length of rectangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area of rectangle is: %d",area);
}