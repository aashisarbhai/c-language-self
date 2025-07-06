//count length of name

#include<stdio.h>

void count(char arr[]);

int main(){
    char name[100];
    printf("Enter your name: ");
    fgets(name,100,stdin);
    count(name);
    return 0;
}

void count(char arr[]){
    int count = 0;
    for(int i=0;arr[i]!='\0'; i++){
        count++;
    }
    printf("length is %d",count);
}