//take number from user until user enters a number divisible by 7

#include<stdio.h>

int main(){
    int n;

    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n%7==0){
            break;
        }
    }
    while(1);
    return 0;
}
