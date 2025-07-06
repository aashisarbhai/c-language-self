//write 2 function to write hello and bye

#include <stdio.h>

void printHello();
void printBye();

int main(){
    printHello();
    printBye();
    return 0;
}

void printHello(){
    printf("Hello, World!\n");
}

void printBye(){
    printf("Bye, World!\n");
}