//user entered details for address of 5 students

#include<stdio.h>

typedef struct student{
   char name[20];
   int roll;
   float cgpa;
}stu;

struct address{
    int house_no;
    int block;
    char city[20];
    char state[20];
};

void printAdd(struct address add){
    printf("address is: %d, %d, %s, %s\n", add.house_no, add.block, add.city, add.state);
}

int main(){
    struct address add[5];

    printf("enter info for person 1 :");
    scanf("%d", &add[0].house_no);
    scanf("%d", &add[0].block);
    scanf("%s", add[0].city);
    scanf("%s", add[0].state);

    printf("enter info for person 2:");
    scanf("%d", &add[1].house_no);
    scanf("%d", &add[1].block);
    scanf("%s", add[1].city);
    scanf("%s", add[1].state);

    printf("enter info for person 3:");
    scanf("%d", &add[2].house_no);
    scanf("%d", &add[2].block);
    scanf("%s", add[2].city);
    scanf("%s", add[2].state);

    printf("enter info for person 4:");
    scanf("%d", &add[3].house_no);
    scanf("%d", &add[3].block);
    scanf("%s", add[3].city);
    scanf("%s", add[3].state);

    printf("enter info for person 5:");
    scanf("%d", &add[4].house_no);
    scanf("%d", &add[4].block);
    scanf("%s", add[4].city);
    scanf("%s", add[4].state);

    printAdd(add[0]);
    printAdd(add[1]);
    printAdd(add[2]);
    printAdd(add[3]);
    printAdd(add[4]);

    return 0;
}
