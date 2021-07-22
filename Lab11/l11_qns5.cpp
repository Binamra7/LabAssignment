#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void swap(int &a,int &b)
{
    int *temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n, m;
    printf("Enter two numbers:");
    scanf("%d%d", &n, &m);
    swap(&n, &m);
    return 0;
}