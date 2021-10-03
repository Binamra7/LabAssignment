#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char s[100];
    gets(s);
    int l=strlen(s),c=0;
    for(int i=0;i<l;i++){
        switch(s[i]){
            case 'a':
            c++;
            break;
            case 'A':
            c++;
            break;
            case 'e':
            c++;
            break;
            case 'E':
            c++;
            break;
            case 'I':
            c++;
            break;
            case 'i':
            c++;
            break;
            case 'O':
            c++;
            break;
            case 'o':
            c++;
            break;
            case 'U':
            c++;
            break;
            case 'u':
            c++;
            break;
        }
    }
    printf("The length=%d\n",l);
    printf("Number of vowels =%d",c);
    return 0;
}
