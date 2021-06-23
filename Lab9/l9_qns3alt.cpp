#include<stdio.h>
#include<conio.h>


int fac(int a)
{
    int f=1;
    for(int i=1; i<=a; ++i)
        f=f*i;
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
