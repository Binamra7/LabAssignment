#include<conio.h>
#include<stdio.h>

int a=1,b=1,c;

void fib(int f)
{
    printf("%d\t",a);
    c=a+b;
    a=b;
    b=c;
    f--;
    if(f>=1)
        fib(f);
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fib(n);
    return 0;
}
