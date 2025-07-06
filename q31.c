//write namaste for indian and bonjor for french

#include<stdio.h>

void indian();
void french();

int main(){
    char ch;
    printf("enter f for french and i for indian");
    scanf("%c",&ch);

    if(ch=='f'){
        french();
    }
    else{
        indian();
    }
}

void indian(){
    printf("Namaste");
}

void french(){
    printf("Bonjour");
}