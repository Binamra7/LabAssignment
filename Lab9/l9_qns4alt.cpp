#include<conio.h>
#include<stdio.h>
void fib(int f)
{
    int a=1,b=1,c;
    for(int i=1; i<=f; ++i)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fib(n);
    return 0;
}
