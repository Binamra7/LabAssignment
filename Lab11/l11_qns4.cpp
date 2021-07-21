#include <stdio.h>
#include <conio.h>
#include <malloc.h>

int main()
{
    int sum = 0, n, *ptr1, *ptr2;
    printf("Enter no?");
    scanf("%d", &n);
    ptr1 = (int *)malloc(sizeof(int) * n);
    ptr2 = ptr1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number:", i + 1);
        scanf("%d", ptr1);
        ptr1++;
    }
    printf("Memory\tValue\n");
    for (int i = 0; i < n; i++)
    {
        printf("%u\t%d\n",ptr2,*ptr2);
        sum += *ptr2;
        ptr2++;
    }

    printf("\nsum is %d", sum);
    
    printf("\naverage is %d", sum/n);
}