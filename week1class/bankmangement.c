#include<stdio.h>
#include<string.h>
struct info
{
    char name[15];
    int acct;
    int balance;
    char pin[4];
};
struct info f1[180];
int cnt=0;
void createacc()
{
    printf("Welcome to our Service.\n");
    printf("Enter Your Name: ");
    getchar();
    fgets(f1[cnt].name,sizeof(f1[cnt].name),stdin);
    printf("Choose a Pin for your account\n");
    getchar();
    fgets(f1[cnt].pin,sizeof(f1[cnt].pin),stdin);
    printf("Enter your initial deposit: ");
    scanf("%d",&f1[cnt].balance);
    printf("Your Account is created.\n");
    f1[cnt].acct=cnt+100;
    printf("Your Account number is %d.",f1[cnt].acct);
    cnt++;
}
void withdraw()
{
    int accno,i,withdraw,st;
    char pincpy[4];
    printf("Enter Your Account No: ");
    scanf("%d",accno);
    printf("Enter Your password: ");
    fgets(pincpy,sizeof(pincpy),stdin);
    for(i=0;i<=cnt%100;i++)
    {
        if(f1[cnt].acct==accno)
        {
            if(!strcmp(f1[cnt].pin,pincpy))
               {
                   printf("Enter Your Withdrawal Amount: ");
                   scanf("%d",&withdraw);
                   f1[cnt].balance=f1[cnt].balance-withdraw;
                   st=cnt;
                   goto statement;
               }
            else
                printf("Wrong Password!\n");
        }
        else
            printf("No Account Found!\n");
    }
    statement:
        printf("Bank Statement\n");
        printf("Account Name   : %s",f1[st].name);
        printf("Account Number : %d",f1[st].acct);
        printf("Account Balance: %d",f1[st].balance);

}
int main()
{

    int opt;
    printf("Welcome\n");
    printf("1. Create Account\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Update Account\n");
    printf("5. Delete\n");
    printf("6. Exit\n");
    printf("Enter your option: ");
    scanf("%d",&opt);
    for(;;)
        switch(opt)
    {
        case 1 : createacc();break;
        //case 2 :
        //case 3 :
        //case 4 :
        //case 5 :
        case 6 : printf("Thank You\n");
                    return 0;
        default : printf("Invalid Option!");


    }


    return 0;
}
