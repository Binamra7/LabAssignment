#include <stdio.h>
#include <conio.h>

int main()
{
    int salary;
    char name[30];
    FILE *fp;
    fp = fopen("data.txt", "w");
    printf("Enter name and salary:");
    gets(name);

    fflush(stdin);
    scanf("%d", &salary);

    

    fprintf(fp, "%s%d", name, salary);
    fclose(fp);

    fp = fopen("data.txt", "r");
    // fflush(stdin);
    fscanf(fp, "%s%d", name, &salary);

    printf("Name=%s\nSalary=%d", name, salary);
    fclose(fp);
    return 0;
}