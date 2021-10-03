//WAP to store the information of 'n' students in a file sample.txt and display only those information whose name starts with 'S'.
#include <stdio.h>
#include <conio.h>

struct student
{
    int roll, age;
    char name[20];
};
int main()
{
    int n;
    FILE *fp;
    struct student info;
    printf("How many students? ");
    scanf("%d", &n);
    fp = fopen("sample.txt", "a+");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Name, Roll no. and age: ");
        fflush(stdin);
        gets(info.name);
        scanf("%d%d", &info.roll, &info.age);
        fwrite(&info, sizeof(info), 1, fp);
    }
    rewind(fp);
    printf("Name\t\tRoll no.\tAge\n");
    printf("_____________________________________\n\n");
    while (fread(&info, sizeof(info), 1, fp) == 1)
    {
        if (info.name[0] == 's' || info.name[0] == 'S')
            printf("%s\t\t%d\t\t%d\t\t\n", info.name, info.roll, info.age);
    };  
    return 0;
}
