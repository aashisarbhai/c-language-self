//fibonacci series in array

#include<stdio.h>
int fibo(int arr[],int n);
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[20];
    fibo(arr,n);

    printf("fibonacci series:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

int fibo(int arr[],int n){
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
       arr[i]= arr[i-1]+arr[i-2];
    }
}