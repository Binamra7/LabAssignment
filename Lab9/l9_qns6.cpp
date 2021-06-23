#include<conio.h>
#include<stdio.h>

void isPrime(int n)
{
    int counter=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            counter++;
    }
    if(counter>=3)
        printf("It is composite");
    else
        printf("It is prime");
}

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    isPrime(a);
    return 0;
}
