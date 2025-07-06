//check wheather the number is armstrong or not

#include<stdio.h>

int main(){
    int n,rem,sum=0,num;
    printf("Enter a number: ");
    scanf("%d",&n);

    num=n;

    while(n!=0){
    rem=n%10;
    sum=(rem*rem*rem)+sum;
    n=n/10;
    } 

    if(sum==num){
        printf("%d is an Armstrong No.", num);
    }
    else{
        printf("%d is not an Armstrong No.", num);
    }
    return 0;
}