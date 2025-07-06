//average of three numbers

#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d", &a,&b,&c);
    printf("average of three numbers is %d", (a+b+c)/3);
    return 0;
}