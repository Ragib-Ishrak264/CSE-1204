#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Account
{
    int acc;
    string name;
    int balance;
    int age;
    public:
            Account ()
            {

            }
            Account(int a, string n, int b,int ag)
            {
                acc=a;
                name=n;
                balance=b;
                age=ag;
            }
            void getdata()
            {
                cout << "Account Number :" << acc << endl;
                cout << "Account Name :" << name<< endl;
                cout << "Account Balance :" << balance << endl;   
            }
            void dlt()
            {
                acc=0;
                name=" ";
                balance=0;
                age=0;
            }
            void deposit(int m)
            {
                balance+=m;
                cout << "New Balance: " << balance << endl;
            }
            int Balance()
            {
                return balance;
            }
            void withdraw(int w)
            {
                balance-=w;
                cout << w << "tk debitted from your account." << endl;
                getdata();
            }
            
    

};
int main()
{
    int opt,acc,balance,age,i=0;
    string name;
    Account client[100];
    for(;;)
    {
        cout << "******** Main Menu ********" << endl;
        cout << "1. Open New Account" << endl;
        cout << "2. Close Old Account" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Check Balance" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Your Option: ";
        cin >> opt;
        switch(opt)
        {
            case 1:
                    cout << "Enter Account Name   : ";
                    cin.ignore();
                    getline(cin,name);
                    cout << "Enter Initial Deposit:";
                    cin >> balance;
                    cout << "Enter Your Age       :";
                    cin >> age;
                    acc=1000+i;
                    client[i]=Account(acc,name,balance,age);
                    client[i].getdata();
                    i++;
                    break;
            case 2: int ac1;
                    cout << "Enter Account Number: ";
                    cin >> ac1;
                    client[ac1/1000].dlt();
                    break;

            case 3: int ac2,d;
                    cout << "Enter Account Number: ";
                    cin >> ac2;
                    cout << "Enter Depsit Amount: ";
                    cin >> d;
                    client[ac2%1000].deposit(d);
                    break;

            case 4: int ac3,w,m;
                    cout << "Enter Account Number: ";
                    cin >> ac3;
                    cout << "Enter Withdraw Account: ";
                    cin >> w;
                    m=client[ac3%1000].Balance();
                    if(w>m)
                    {
                        cout << "Insufficient Balance" << endl;
                    }
                    else
                        {
                           client[ac3%1000].withdraw(w); 
                        }
                    break;

            case 5: int ac4;
                    cout << "Enter Account Number: " << endl;
                    cin >> ac4;
                    cout << client[ac4/1000].Balance(); << endl;
                    break;

            case 6: cout << "Thank You!!" << endl;
                    return 0;
        }
    }
    return 0;
}