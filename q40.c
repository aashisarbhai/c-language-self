//using array calculate the total price

#include<stdio.h>
int main(){
    int item[3];
    printf("enter cost of first item");
    scanf("%d",&item[0]);
    printf("enter cost of second item");
    scanf("%d", &item[1]);
    printf("enter cost of third item");
    scanf("%d",&item[2]);

    printf("total price is %d", (item[0]+item[2]+item[1])+(item[1]+item[2]+item[0])/10);
    return 0;
}