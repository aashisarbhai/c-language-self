//table in reverse order

#include<stdio.h>
int main(){
    int table,n;
    printf("Enter the number of rows you want in the table: ");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        table=n*i;
        printf("%d\n",table);
    }
    return 0;
}