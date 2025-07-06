//wap to tell the grade for your marks

#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks<30){
        printf("grade is C");
    }
    else if(30<=marks<70){
        printf("grade is B");
    }
    else if(70<=marks<90){
        printf("grade is A");
    }
    else if(90<=marks<100){
        printf("grade is A+");
    }
    else{
        printf("Invalid marks");
    }
    return 0;
}