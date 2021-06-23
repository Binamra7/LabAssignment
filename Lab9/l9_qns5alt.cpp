#include<conio.h>
#include<stdio.h>

int digitSum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    int a,sum=0;
    printf("Enter a number:");
    scanf("%d",&a);

    printf("The sum is:%d",digitSum(a));
    return 0;
}

