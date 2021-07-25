#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("test.txt", "w");
    printf("Enter the string\nPress CTRL+Z after completion:\n");
    while ((ch = getchar()) != EOF)
        putc(ch, fp);
    fclose(fp);
    return 0;
}