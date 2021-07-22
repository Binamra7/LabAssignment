#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct student
{
    int roll;
    char name[30], add[30];
};

int main()
{
    struct student *ptr1, *ptr2;
    int n;
    printf("Enter the number of sudents:");
    scanf("%d", &n);
    ptr1 = (struct student)malloc(sizeof(struct student) * n);
    return 0;
}