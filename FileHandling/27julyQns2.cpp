#include <conio.h>
#include <stdio.h>

int main()
{
    FILE *fp, *odd, *even;
    int n, num;
    fp = fopen("oddOrEven.txt", "w");
    printf("Enter how many no.?:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number:", i + 1);
        scanf("%d", &num);
        putw(num, fp);
    }
    fclose(fp);
    fp = fopen("oddOrEven.txt", "r");
    even = fopen("EVEN.txt", "w");
    odd = fopen("ODD.txt", "w");

    while ((num = getw(fp)) != EOF)
    {
        if (num % 2 == 0)
            putw(num, even);
        else
            putw(num, odd);
    }
    fclose(fp);
    fclose(even);
    fclose(odd);

    even = fopen("EVEN.txt", "r");
    odd = fopen("ODD.txt", "r");

    printf("EVEN numbers are:\n");
    while ((num = getw(even)) != EOF)
        printf("%d\n", num);
    printf("\nOdd numbers are:\n");
    while ((num = getw(odd)) != EOF)
        printf("%d\n", num);
    fclose(even);
    fclose(odd);
    return 0;
}