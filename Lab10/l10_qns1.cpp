#include<stdio.h>
#include<conio.h>

struct students
{
    int roll,doj;
    char name[30], dept[30], course[30];
};

int main()
{
    
    struct students info[450];
    printf("Enter the number of students:");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n;i++)
    {
        printf("Enter roll number:");
        scanf("%d",&info[i].roll);
        printf("Enter name:");
        fflush(stdin);
        gets(info[i].name);
        fflush(stdin);
        printf("Enter department:");
        gets(info[i].dept);
        printf("Enter course:");
        gets(info[i].course);
        printf("Enter date of join:");
        scanf("%d", &info[i].doj);
    }
    // printf("Roll\tName\t\t\tDepartment\t\t\tCourse\t\t\tDate of join\n");
    // for (int i = 0; i < n;i++){
    // printf("%d\t%s\t\t\t%s\t\t\t%s\t\t\t%d\n",info[i].roll,info[i].name,info[i].dept,info[i].course,info[i].doj);}

    int year;
    printf("\n********************************************************************************************\n");
    printf("Enter the year:");
    scanf("%d", &year);
    printf("Roll\tName\t\t\tDepartment\t\tCourse\t\t\tDate of join\n");

    for (int i = 0; i < n;i++)
    {
        if(year==info[i].doj)
        {
            printf("%d\t%s\t\t\t%s\t\t\t%s\t\t\t%d\n",info[i].roll,info[i].name,info[i].dept,info[i].course,info[i].doj);
            
        }
    }
    int roll;
    printf("\n***********************************************************************************************\n");
    printf("Enter the roll:");
    scanf("%d", &roll);
    printf("Roll\tName\t\t\tDepartment\t\tCourse\t\t\tDate of join\n");

    for (int i = 0; i < n;i++)
    {
        if(roll==info[i].roll)
        {
            printf("%d\t%s\t\t\t%s\t\t\t%s\t\t\t%d\n",info[i].roll,info[i].name,info[i].dept,info[i].course,info[i].doj);            
        }
    }
        return 0;
}
