//sum of n numbers

#include<stdio.h>

int num(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result=num(n);
    printf("sum is %d", result);
    return 0;
}

int num(int n){
    
    if(n==0){
        return 0;
    }

    return n+num(n-1);

}