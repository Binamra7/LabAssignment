#include <stdio.h>
#include <conio.h>
#include <malloc.h>

#define max 1000

int main()
{
    int *ptr1, *ptr2, n, sum = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    ptr1 = (int *)malloc(sizeof(int) * n);
    ptr2 = ptr1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d marks:", i + 1);
        scanf("%d", ptr1);
        ptr1++;
    }
    printf("SN.\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\n", i + 1, *ptr2);
        ptr2++;
    }
    return 0;
}