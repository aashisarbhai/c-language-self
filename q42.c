//reverse an array

#include<stdio.h>
int reverse(int arr[],int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr,5);
}

int reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstVal=arr[i];
        int secondVal=arr[n-i-1];
        arr[i]=secondVal;
        arr[n-i-1]=firstVal;
    }
    for(int i=0;i<n;i++){
    printf("%d\t", arr[i]);
    }
}
