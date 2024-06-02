#include <stdio.h>
#include <string.h>
struct Student
{
    int roll_number;
    char name[100];
    int marks;
};
void main()
{
    // struct Student parv;
    // parv.roll_number = 99;
    // strcpy(parv.name, "Parv shah");
    // parv.marks = 99;
    // printf("%d", parv.roll_number);
    // printf("%s", parv.name);
    // struct Student kunj;
    // kunj.roll_number=2;
    // kunj.marks=100;
    // strcpy(kunj.name,"kunj Darji");
    struct Student students[5];
    students[0].roll_number = 99;
    printf("%d", students[0].roll_number);
}