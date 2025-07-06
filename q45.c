//count number of x in an array
#include<stdio.h>

void count(){
    char arr[14]={'1','2','x','3','2','x','4','5','x','6','8','x','x','9'};
    int count =0;
    for(int i=0;i<14;i++){
        if(arr[i]=='x'){
            count++;
        }
    }
    printf("%d",count);
}

int main(){
    count();
    return 0;
}