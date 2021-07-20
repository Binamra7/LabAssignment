#include <stdio.h>
#include <conio.h>

int main()
{
    int sum = 0, a[200], *ptr, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    ptr = &a[0];
    printf("a[i] \t Memory Location \t Value\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]\t%u\t\t\t%d\n", i, ptr, *ptr);
        sum += *ptr;
        ptr += 1;
    }
    printf("\nThe sum=%d", sum);

    return 0;
}