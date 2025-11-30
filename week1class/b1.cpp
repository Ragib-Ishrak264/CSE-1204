#include <iostream>
using namespace std;
class Account
{
public:
    string name;
    int acn;
    int balance;

    Account()
    {
    }

    void Open_account(string n, int a, int b)
    {
        name = n;
        acn = a;
        balance = b;
    }
    void Delete()
    {
        if (balance > 0)
            cout << "Account can not be deleted. Withdraw your money first ;)" << endl;
        else
        {
            name = " ";
            acn = 0;
            balance = 0;
            cout << "Account deleted successfully" << endl;
        }
    }

    
    void deposit(int b)
    {
        int old = balance;
        balance = b;
        old += balance;
        balance = old;
    }


    void withdraw(int b)
    {

        int old = balance;
        balance = b;

        if (b > old)
            cout << "Insufficient balance " << endl;
        else
        {
            old -= b;
            balance = old;
        }
    }
    void Getdata()
    {
        cout << "Account number : " << acn << endl;
        cout << "Name           : " << name << endl;
        cout << "balance        : " << balance << " Taka " << endl;
        cout << ".......................\n";
    }
};
void print()
{
    cout << "************* Main Menu ************* \n";
    cout << "1. Open New Account " << endl;
    cout << "2. Close Old Account" << endl;
    cout << "3. Deposit money" << endl;
    cout << "4. Withdraw money" << endl;
    cout << "5. Check balance" << endl;
    cout << "6. Exit" << endl;
    cout << "   Enter your option (1-6): " << endl;
}
int main()
{
    int choice;
    int index = 0;
    string Name;
    int Acn;
    int Bal;
    int temp_Acn, temp_balance;

    Account b[10000];

    while (1)
    {
        print();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter your Name: ";
            cin >> Name;

            cout << "Enter your balance: ";
            cin >> Bal;
            Acn = 1000 + index + 1;

            b[Acn].Open_account(Name, Acn, Bal);
            b[Acn].Getdata();
            index++;
            break;
        case 3:
            cout << "Enter your account number: ";
            cin >> temp_Acn;
            if (temp_Acn < (index - 1) && temp_Acn > 1000)
            {
                cout << "Enter your depost balance: ";
                cin >> temp_balance;
                b[temp_Acn].deposit(temp_balance);
                b[temp_Acn].Getdata();
                cout << "Success" << endl;
            }
            else
                cout << "Invalid account" << endl;

            break;
        case 4:
            cout << "Enter your account number: ";
            cin >> temp_Acn;
            if (temp_Acn < (index - 1) && temp_Acn > 1000)
            {
                cout << "Enter your withdrwal balance: ";
                cin >> temp_balance;
                b[temp_Acn].withdraw(temp_balance);
                b[temp_Acn].Getdata();
                cout << "Sucess" << endl;
            }
            else
                cout << "Invalid account\n";

            break;
        case 2:
            cout << "Enter your account number: ";
            cin >> temp_Acn;
            if (temp_Acn < (index - 1) && temp_Acn > 1000)
            {
                b[temp_Acn].Delete();
            }
            else
                cout << "Invalid account" << endl;

            break;
        case 5:
            cout << "Enter your account number: ";
            cin >> temp_Acn;
            if (temp_Acn < (index - 1) && temp_Acn > 1000)
            {
                cout << "Your current balance: " << b[temp_Acn].balance << " Taka" << endl;
            }
            else
                cout << "Invalid account" << endl;

            break;
        case 6:
            cout << "Thank you" << endl;
            return 0;
            break;

        default:
            break;
        }
    }
}