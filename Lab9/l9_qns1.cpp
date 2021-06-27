#include<stdio.h>
#include<conio.h>

float add(int x,float y)
{
    return x+y;
}
float sub(int x,float y)
{
    return x-y;
}
float mul(int x,float y)
{
    return x*y;
}

int main()
{
    int a;
    float b;
    printf("Enter two numbers:");
    scanf("%d%f",&a,&b);
    printf("%f\n",add(a,b));
    printf("%f\n",sub(a,b));
    printf("%f\n",mul(a,b));
    return 0;
}
