#include<conio.h>
#include<stdio.h>

int sum=0;
int digitSum(int n)
{
    sum+=n%10;
    n/=10;
    if(n!=0)
        digitSum(n);
    return sum;
}

int main()
{
    int a,sum=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a!=0)
    {
        sum+=a%10;
        a/=10;
    }
    printf("The sum is:%d",sum);
    printf("The sum is:%d",digitSum(a));
    return 0;
}
