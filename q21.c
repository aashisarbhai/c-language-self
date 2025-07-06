//sum of first n natural numbers

#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        sum=sum+i;
       
    }
     printf("%d\n",sum);
     return 0;
}