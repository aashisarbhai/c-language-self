//wap to check the entered character is upper case or lower case

#include<stdio.h>

int main(){
    char alpha;
    printf("Enter a character: ");
    scanf("%c", &alpha);
    if(alpha>='A' && alpha<='Z'){
        printf("%c is an uppercase letter.\n", alpha);
    }
    else if(alpha>='a' && alpha<='z'){
        printf("%c is a lowercase letter.\n", alpha);
    }
    else{
        printf("%c is not a letter.\n", alpha);
    }
    return 0;
}