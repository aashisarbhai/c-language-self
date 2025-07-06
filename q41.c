//count number of odd numbers in an array

#include<stdio.h>

void odd();
int main(){
    odd();
    return 0;
}
void odd(){
    int count=0;
    int arr[3]={1,2,3};
    for(int i=0;i<3;i++){
        if(arr[i]%2!=0){
            count=count+1;
        }
    }
    printf("number of odd numbers are %d", count);
}