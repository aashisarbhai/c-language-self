//print all numbers till 10 except 6

#include<stdio.h>
int main(){
    int n;
    for(n=0;n<=10;n++){
        if(n==6){ 
            continue;
        }
        printf("%d\n",n);
    }
    return 0;
}