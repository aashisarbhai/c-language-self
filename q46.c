//largest number in an array

#include<stdio.h>

void largest(){
    int arr[9]={1,2,3,4,9,6,7,8,3};
    int max=0;
    for(int i=0;i<9;i++){
    if(arr[i]>max){
        max=arr[i];
    }
  }
  printf("%d",max);
}

int main(){
    largest();
    return 0;
}