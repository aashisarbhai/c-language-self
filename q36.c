//calculate percentage

#include<stdio.h>

int percent();

int main(){
    int result;
    result=percent();
    printf("%d",result);
    return 0;
}

int percent(){
    int maths,science,sanskrit,percent;
    printf("Enter marks in maths: ");
    scanf("%d",&maths);
    printf("Enter marks in science: ");
    scanf("%d",&science);
    printf("Enter marks in sanskrit: ");
    scanf("%d",&sanskrit);
    percent=((maths+science+sanskrit)/3)*100;
    return percent;
}