//print the smallest number amoung the numbers

#include <stdio.h>

int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d%d", &a,&b);
    if(a<b){
        printf("a is smallest %d",a);
    }
    else{
        printf("b is smallest %d",b);
    }
    return 0;
}