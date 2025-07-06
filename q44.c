//table of 2 and 3 in 2D array

#include<stdio.h>

void table(int arr[][10],int n,int m, int num);
int main(){
    int tables[2][10];
    table(tables,0,10,2);
    table(tables,1,10,3);
    for(int i=0;i<10;i++){
        printf("%d ",tables[0][i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d ",tables[1][i]);
    }
    return 0;
}

void table(int arr[][10],int n , int m, int num){
    for(int i=0;i<m;i++){
        arr[n][i]=num*(i+1);
    }
}