#include<stdio.h>
#include<conio.h>

struct bank {
    int accNum,balance;
    char name[20];
};

int main()
{
    struct bank info[250];
    int n;
    top:
    printf("Enter the number of customers:");
    scanf("%d", &n);
    if(n>250){
        printf("Please enter valid number:");
        goto top;
    }
    for (int i = 0;i<n;i++)
    {
        printf("Enter the account number:");
        scanf("%d", &info[i].accNum);
        fflush(stdin);
        printf("Enter the account name:");
        gets(info[i].name);
        fflush(stdin);
        printf("Enter the balance:");
        scanf("%d", &info[i].balance);
        

    }
   printf("Account No.\tName\t\t\tBalance\n");

    for (int i = 0; i < n;i++)
    {
        if(info[i].balance<1000)
        {
            printf("%d\t\t%s\t\t\t%d\n",info[i].accNum, info[i].name, info[i].balance);
        }
    }

    int index,choose, acNum;

    printf("Enter the account number:");
    scanf("%d", &acNum);
    for (int i = 0;i<n;i++)
    {
        if(info[i].accNum==acNum){
           index = i;
           break;
        }   
    }
        printf("1.WithDrawl\n2.Deposit");
    scanf("%d", &choose);
    
    switch (choose)
    {
    case 1:
        start:
        printf("Enter the amount you want to widthdraw\n");
        int with;
        scanf("%d", &with);
        if(with>info[index].balance){
            printf("The amount is greater than the balance\nTRY AGAIN");
            goto start;
            break;
        }
        else{
            info[index].balance-=with;
            printf("Withdrawl successuful\n");
        }
        break;
    case 2:
        printf("Enter the amount you want to deposit:");
        int depo;
        scanf("%d", &depo);
        info[index].balance += depo;
        break;
    default:
        break;
    }
    printf("\n******************************************************************************\n");
    printf("Account No.\tName\t\t\tBalance\n");

    for (int i = 0; i < n;i++)
    {
        
            printf("%d\t\t%s\t\t\t%d\n",info[i].accNum, info[i].name, info[i].balance);
    
    }

    return 0;
}