//check wheather a number is natural number or not

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    if(num>=1){
        printf("The number is natural number");
    }
    else{
        printf("The number is not natural number");
    }
    return 0;
}