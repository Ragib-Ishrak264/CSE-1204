#include<iostream>
#include<string>
#include<conio.h>
#include<limits>
using namespace std;
struct info 
{
    string name;
    int acct;
    int balance;
    string pin;
};
struct info f1[100];
int i=0;
string passgen()
{
    string password;
    char ch;
    for(;;)
    {
        ch =_getch();
        if(ch == 13)
        {
            cout<<endl;
            break;
        }
        if( ch == 8)
        {
            if(!password.empty())
            {
                password.pop_back();
                cout << "\b \b";
            }
        }
        password += ch;
        cout << '*';
    }
    return password;
}
void createacc()
{
    string pin1,pin2;
    cout << "Welcome To Our Bank.\nPlease Provide us with your information.\n";
    cout << "Enter Your Name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,f1[i].name);
    password:
    cout << "Create a Password: ";
    pin1=passgen();
    cout << "Confirm your Password: ";
    pin2=passgen();
    if(pin1 == pin2)
    {
        f1[i].pin=pin1;
    }
    else 
    {
        cout << "Password didn't Match!!"<<endl;
        goto password;
    }
    cout << "Enter Initial Deposit Amount" << endl;
    cin >> f1[i].balance;
    cout << "Your Account is Created"<< endl;
    cout << "Your Account Number is " << 1000+i <<"."<<endl;
    f1[i].acct=1000+i;
    cout << "Do not share your password with any one!!!"<<endl;

    cout<< "Bank Satement"<< endl;
    cout << "Account Name  : " << f1[i].name << endl;
    cout << "Account Number: " << f1[i].acct << endl;
    cout << "Balance       : " << f1[i].balance << endl;
    i++;
}
void withdraw()
{
    int acc,j,withdraw,balance;
    string pass;
    cout << "Enter Acct Number: ";
    cin >> acc;
    for(j=0;j<=i;j++)
    {
        if(acc==f1[j].acct)
        {
            cout << "Account Name: "<< f1[j].name <<endl;
            break;
        }
    }
    cout << "Enter Password: ";
    cin >> pass;
     if(pass == f1[j].pin)
     {
        cout << "Enter Withdrwal Amount" << endl;
        cin >> withdraw;
        if(withdraw > f1[j].balance )
        {
            cout << "Insuffuicient Money" << endl;
        }
        else
        {
        balance = f1[j].balance-withdraw;
        cout << withdraw << "withdrawen from your account."<< endl;
        cout << "Your new Balance: " << f1[j].balance << endl;
        }

     }
}
int main()
{
    int opt;
    cout << "****WELCOME****"<<endl;
    cout << "1.Create Account"<<endl;
    cout << "2.Withdraw Money"<<endl;
    cout << "3.Deposit"<<endl;
    cout << "4.Update Account"<<endl;
    cout << "5.Bank Statement"<< endl;
    cout << "6.Delete" << endl;
    cout << "7.Exit" << endl;
    for(;;)
    {
    cout << "Enter Your Option: ";
    cin >> opt;
    switch(opt)
    {
        case 1: createacc();break;
        case 2: withdraw();break;
        //case 3:
        //case 4:
        //case 5:
        //case 7:
        case 7: cout << "Thankyou for being with us" << endl;
                return 0;
        default : cout << "Invalid Option\n";
    }
    }
    return 0;
}