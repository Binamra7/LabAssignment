#include<stdio.h>
#include<conio.h>

int f=1;

int fac(int a)
{
    f=f*a;
    a--;
    if(a>1)
        fac(a);
    return f;
}

int main()
{
    printf("Enter a number:");
    int n;
    scanf("%d",&n);
    printf("The factorial is:%d",fac(n));
    return 0;
}
