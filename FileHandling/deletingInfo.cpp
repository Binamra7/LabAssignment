#include<stdio.h>
#include<conio.h>

#define ll long long;

struct student{
    int ph;
    char name[20], add[20];
};

int main()
{
    struct student info;
    FILE *fp;
    int n;
    printf("How many students?");
    scanf("%d", &n);
    fp = fopen("student999.txt", "a+");
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d Name, address and phone:", i);
        fflush(stdin);
        gets(info.name);
        fflush(stdin);
        gets(info.add);
        fflush(stdin);
        scanf("%d", &info.ph);
        fwrite(&info, sizeof(info), 1, fp);
    }
    rewind(fp);

    printf("\nName\tAddress\tPhone\n");
    printf("___________________________\n");
    while (fread(&info, sizeof(info), 1, fp) == 1)
        printf("%s\t%d\t%d\n", info.name, info.add, info.ph);
    fclose(fp);
    return 0;
}