#include<stdio.h>
#include<conio.h>

void add(int n,int m);
void sub(int p,int q);
void mul(int x,int y);

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    add(a, b);
    return 0;
}

void add(int n,int m)
{
    printf("Sum=%d\n",n+m);
    sub(n, m);
}

void sub(int p,int q)
{
    printf("Difference=%d\n", p-q);
    mul(p, q);
}

void mul(int x,int y)
{
    printf("Product=%d\n", x*y);
}
