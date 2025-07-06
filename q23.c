//take input from user until user enters odd number

#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);

        if(n%2!=0){
            break;
        }
    }
    while(1);
    return 0;
}