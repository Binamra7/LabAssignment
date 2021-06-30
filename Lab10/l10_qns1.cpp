#include<stdio.h>
#include<conio.h>

struct students
{
    int roll,doj;
    char name[30], dept[30], course[30];
};

int main()
{
    struct students info;
    printf("Enter roll number:");
    scanf("%d",&info.roll);
    printf("Enter name:");
    fflush(stdin);
    gets(info.name);
    fflush(stdin);
    printf("Enter department:");
    gets(info.dept);
    printf("Enter course:");
    gets(info.course);
    printf("Enter date of join:");
    scanf("%d", &info.doj);

    printf("Roll\tName\t\tDepartment\tCourse\t\tDate of join\n");
    printf("%d\t%s\t%s\t\t%s\t%d",info.roll,info.name,info.dept,info.course,info.doj);

    return 0;
}
