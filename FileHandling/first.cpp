#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *firstFile;
    char ch;
    firstFile = fopen("test.txt", "a");
    printf("Enter the string\nPress CTRL+Z after completion:\n");
    while ((ch = getchar()) != EOF)
        putc(ch, firstFile);
    fclose(firstFile);
    firstFile = fopen("test.txt", "r");
    while ((ch = getc(firstFile)) != EOF)
        printf("%c", ch);
    fclose(firstFile);
    return 0;
}