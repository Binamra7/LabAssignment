#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter your name:");
    gets(name);
    for (int i = 0, j = strlen(name)-1; i < j; i++, j--)
    {
        if (name[i] != name[j])
        {
            printf("Not pali");
            return 0;
        }
    }
    printf("pali");

    return 0;
}