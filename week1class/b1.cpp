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
        name = "";
        acn = 0;
        balance = 0;
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
            name = "";
            acn = 0;
            balance = 0;
            cout << "Account deleted successfully" << endl;
        }
    }

    void deposit(int b)
    {
        balance += b;
    }

    void withdraw(int b)
    {
        if (b > balance)
            cout << "Insufficient balance" << endl;
        else
            balance -= b;
    }

    void Getdata()
    {
        cout << "Account number : " << acn << endl;
        cout << "Name           : " << name << endl;
        cout << "Balance        : " << balance << " Taka" << endl;
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
    cout << "Enter your option (1-6): ";
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

            Acn = 1001 + index;
            b[Acn].Open_account(Name, Acn, Bal);
            b[Acn].Getdata();
            index++;
            break;

        case 2:
            cout << "Enter your account number: ";
            cin >> temp_Acn;

            if (temp_Acn >= 1001 && temp_Acn < 1001 + index && b[temp_Acn].acn != 0)
            {
                b[temp_Acn].Delete();
            }
            else
                cout << "Invalid account" << endl;
            break;

        case 3:
            cout << "Enter your account number: ";
            cin >> temp_Acn;

            if (temp_Acn >= 1001 && temp_Acn < 1001 + index && b[temp_Acn].acn != 0)
            {
                cout << "Enter your deposit balance: ";
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

            if (temp_Acn >= 1001 && temp_Acn < 1001 + index && b[temp_Acn].acn != 0)
            {
                cout << "Enter your withdrawal balance: ";
                cin >> temp_balance;
                b[temp_Acn].withdraw(temp_balance);
                b[temp_Acn].Getdata();
            }
            else
                cout << "Invalid account" << endl;
            break;

        case 5:
            cout << "Enter your account number: ";
            cin >> temp_Acn;

            if (temp_Acn >= 1001 && temp_Acn < 1001 + index && b[temp_Acn].acn != 0)
            {
                cout << "Your current balance: " << b[temp_Acn].balance << " Taka" << endl;
            }
            else
                cout << "Invalid account" << endl;
            break;

        case 6:
            cout << "Thank you" << endl;
            return 0;

        default:
            cout << "Invalid option" << endl;
        }
    }
}