//take a number(n) from the user and output its cube 

#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d", &n);
    printf("cube of %d is %d", n, n*n*n);
    return 0;
}