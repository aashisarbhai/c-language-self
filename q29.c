//sum of all numbers between 5 and 50

#include<stdio.h>

int main(){
    int sum=0;
    for(int n=5; n<=50;n++){
        sum=n+sum;
    }
    printf("%d",sum);
}