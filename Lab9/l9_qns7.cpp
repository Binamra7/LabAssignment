#include<conio.h>
#include<stdio.h>

void isPali(int n)
{
    int rev=0;
    int temp=n;
    while(n)
    {
        int r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(rev==temp)
        printf("It is palindrome");
    else
        printf("It is not palindrome");
}

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    isPali(a);
    return 0;
}


