#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct student
{
    int *roll, *s1, *s2, *s3, *s4, *s5;
    char name[20];
};

int main()
{
    struct student info[500], *ptr1, *ptr2;
    int n;
    printf("Enter the number of students:");
    scanf("%d", &n);
    ptr1 = (struct student *)malloc(sizeof(struct student) * n);
    ptr2 = ptr1;
    for (int i = 0; i < n; i++)
    {
        printf("For student %d:\n", i + 1);
        printf("Enter roll,name and marks of 5 sub:");
        scanf("%d", &ptr1->roll);
        fflush(stdin);
        gets(ptr1->name);
        fflush(stdin);
        scanf("%d%d%d%d%d", &ptr1->s1, &ptr1->s2, &ptr1->s3, &ptr1->s4, &ptr1->s5);
        ptr1++;
    }
    printf("Roll\tName\tSub1\tSub2\tSub3\tSub4\tSub5\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\n", ptr2->roll, ptr2->name, ptr2->s1, ptr2->s2, ptr2->s3, ptr2->s4, ptr2->s5);
        ptr2++;
    }

    return 0;
}