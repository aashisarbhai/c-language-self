//swap two numbers

#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;
    printf("value of a=%d" ,a);
    printf("\nvalue of b=%d" ,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nvalue of a=%d" ,a);
    printf("\nvalue of b=%d" ,b);
}