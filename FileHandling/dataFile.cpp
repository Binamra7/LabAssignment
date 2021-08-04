#include<stdio.h>
#include<conio.h>

int main()
{
    // int num, n;
    int salary;
    char name[30];
    FILE *fp;
    fp = fopen("data.txt", "w");
    printf("Enter name and salary:");
    gets(name);
    scanf("%d" ,salary);
    fprintf(fp, "%s%d", name, salary);
    fclose(fp);
    return 0;
}