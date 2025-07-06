//insert at the end

#include<stdio.h>

void insert();
int main(){
    insert();
    return 0;
}

void insert(){
    int n=6;
    int arr[]={1,2,3,4,5};
    int newElement=9;
        arr[n]=newElement;
        n++;
    for(int i=0;i<6;i++){
    printf("%d", arr[i]);}
}