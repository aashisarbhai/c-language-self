//structure 

#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[20];
};

int main(){
    struct student s1;
    s1.roll = 1;
    s1.cgpa = 8.5;
    strcpy(s1.name, "Rahul");

    printf("student name %s", s1.name);
    printf("roll no %d", s1.roll);
    printf("cgpa is", s1.cgpa);

    return 0;
}