//wap to check if a student pass or fail

#include<stdio.h>

int main(){
    int marks;
    printf("enter marks");
    scanf("%d", &marks);
    if(marks>30){
        printf("pass");
    }
    else{
        printf("fail");
    }
    return 0;
}