//factorial of a number

#include<stdio.h>

int fact(int n);

int main(){
    int n,result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result=fact(n);
    printf("factorial of %d id %d", n, result);
    return 0;
}

int fact(int n){
    if (n == 0){
    return 1;}

    return n*fact(n-1);
}