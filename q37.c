//fibonacci series

#include<stdio.h>

int fibo(int n);

int main(){
    int result;
    result=fibo(4);
    printf("%d", result);
    return 0;
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fibo(n-1)+fibo(n-2);
}