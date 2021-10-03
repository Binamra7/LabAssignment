#include <stdio.h>
#include <conio.h>

struct student
{
    int phone, clas;
    char name[30];
};

int main()
{
    struct student rec;
    FILE *fp;
    int n;
    printf("How many students?");
    scanf("%d", &n);
    fp = fopen("student12.txt", "a+");
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d Name,phone and class:", i);
        fflush(stdin);
        gets(rec.name);
        fflush(stdin);
        scanf("%d%d", &rec.phone, &rec.clas);
        fwrite(&rec, sizeof(rec), 1, fp);
    }
    rewind(fp);

    printf("\nName\tphone\tClass\n");
    printf("___________________________\n");
    while (fread(&rec, sizeof(rec), 1, fp) == 1)
        printf("%s\t%d\t%d\n", rec.name, rec.phone, rec.clas);
    fclose(fp);

    return 0;
}