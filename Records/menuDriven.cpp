#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int age, grade;
    char name[20];
};

int main()
{
    int te = 0;
    struct student info;
    FILE *fp, *fp1;
    char queryName[20];
    int n, choose;
    do
    {
        printf("1.Store a record\n2.Display\n3.Delete\n4.Update\n5.Exit\n");
        printf("Enter your choice(1/2/3/4/5):");
        scanf("%d", &choose);

        switch (choose)
        {
            //1. store entered info
        case 1:
            printf("How many students?");
            scanf("%d", &n);
            fp = fopen("student.txt", "a+");
            for (int i = 1; i <= n; i++)
            {
                printf("Enter %d Name, age and grade:", i);
                fflush(stdin);
                gets(info.name);
                fflush(stdin);
                scanf("%d%d", &info.age, &info.grade);
                fflush(stdin);

                fwrite(&info, sizeof(info), 1, fp);
            }
            fclose(fp);
            break;



        //2.display
        case 2:
            fp = fopen("student.txt", "r");

            printf("\nName\t\tAge\t\tGrade\n");
            printf("___________________________________\n");
            while (fread(&info, sizeof(info), 1, fp) == 1)
                printf("%s\t\t%d\t\t%d\n", info.name, info.age, info.grade);
            break;
            fclose(fp);



        //3. delete
        case 3:

            fflush(stdin);
            printf("Enter the name you want to delete:");
            gets(queryName);
            fp = fopen("student.txt", "r");
            fp1 = fopen("temp.txt", "w");

            while (fread(&info, sizeof(info), 1, fp) == 1)
            {
                if (strcmp(queryName, info.name) != 0)
                {
                    fwrite(&info, sizeof(info), 1, fp1);
                }
            }
            fclose(fp);
            fclose(fp1);

            remove("student.txt");
            rename("temp.txt", "student.txt");
            printf("\nThe record after removing:\n");
            printf("\nName\t\tAge\t\tGrade\n");
            printf("____________________________________\n");
            fp1 = fopen("student.txt", "r");
            while (fread(&info, sizeof(info), 1, fp1) == 1)
            {
                printf("%s\t\t%d\t\t%d\n", info.name, info.age, info.grade);
            }
            fclose(fp1);
            break;


        //4.update 
        case 4:

        //5.exit
        case 5:
            exit(0);
        default:
            printf("Invalid choice");
            break;
        }
        printf("Do you want to run again?(Y/N):");
        char con;

        fflush(stdin);
        scanf("%c", &con);
        if (con == 'y' || con == 'Y')
            te = 1;
        else
            te = 0;
    } while (te);
    return 0;
}