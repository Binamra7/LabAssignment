#include <stdio.h>
#include <conio.h>
#define area(r) 3.14 * r *r
#define interest(p, t, r) p *t *r / 100
#define amount(p, interest) p + interest

int main()
{
    int p, t, r;
    printf("Enter the principal, rate and time:");
    scanf("%d%d%d", &p, &t, &r);
    float inter, amt;
    inter = interest(p, t, r);
    amt = amount(p, inter);
    printf("The interest=%.2f\nThe amount=%.2f", inter, amt);
    return 0;
}
/*
int ra;
float a;
printf("Enter the radius of the circle:");
scanf("%d",&ra);
a=area(ra);
printf("The area of the circle =%f",a);
 getch();     */