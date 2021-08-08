#include<stdio.h>
#include<conio.h>
#include<string.h>

#define ll long long;

struct student{
    int ph;
    char name[20], add[20];
};

int main()
{
    struct student info;
    FILE *fp,*fp1;
    char queryName[20];
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
        printf("%s\t%s\t%d\n", info.name, info.add, info.ph);
    fclose(fp);

    fflush(stdin);

    printf("Enter the name you want to delete:");
    gets(queryName);
    fp = fopen("student999.txt", "r");
    fp1 = fopen("temp.txt", "w");

    while(fread(&info,sizeof(info),1,fp)==1)
    {
        if(strcmp(queryName,info.name)!=0){
            fwrite(&info, sizeof(info), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    remove("student999.txt");
    rename("temp.txt", "student999.txt");
    printf("\nThe record after removing:\n");
    printf("\nName\tAddress\tPhone\n");
    printf("_________________________________\n");
    fp1 = fopen("student999.txt", "r");
    while(fread(&info,sizeof(info),1,fp1)==1)
    {
        printf("%s\t%s\t%d\n", info.name, info.add, info.ph);
    }
    fclose(fp1);
    return 0;
}