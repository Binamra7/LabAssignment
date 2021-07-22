#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct student
{
    int *roll, *marks[5];
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
        for (int j = 0; j < 5; j++)
        {
            printf("\nEnter %d marks:", j + 1);
            scanf("%d", &ptr1->marks[j]);
        }
        ptr1++;
    }
    printf("Roll\tName\tSub1\tSub2\tSub3\tSub4\tSub5\tTotal\tPercentage\n");
    printf("---------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        // int total = 0;
        printf("%d\t%s\t", ptr2->roll, ptr2->name);
        for (int j = 0; j < 5; j++)
        {
            // printf("%d\t%d\t%d\t%d\t%d\n", ptr2->marks[j], ptr2->marks[j], ptr2->marks[j], ptr2->marks[j], ptr2->marks[j]);
            printf("%d\t", ptr2->marks[j]);
            // total += *(ptr2->marks[j]);
        }
        // float per = total / 5;
        // printf("%d\t%f", total, per);
        printf("\n");
        ptr2++;
    }

    return 0;
}