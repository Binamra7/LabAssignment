#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Memory Location\tValue\n");
    printf("%u\t\t%d",&n,n);
    return 0;
}