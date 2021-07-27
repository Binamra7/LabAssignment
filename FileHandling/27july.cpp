#include <conio.h>
#include <stdio.h>

int main()
{
    FILE *fp;
    int n, num;
    fp = fopen("Number.txt", "w");
    printf("Enter how many no.?");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no.:", i + 1);
        scanf("%d", &num);
        putw(num, fp);
    }
    fclose(fp);
    printf("\nThe numbers are:\n");
    fp = fopen("Number.txt", "r");
    while((num=getw(fp))!=EOF)
        printf("%d\n", num);
    return 0;
}