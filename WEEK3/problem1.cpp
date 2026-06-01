#include<bits/stdc++.h>
using namespace std;
class Father
{   private: int money=100;
    protected: int gold=10;
    public:  int land=500;
           /*/ Father()
            {
                money=100;
                gold=10;
                land=500;
                cout << "created" << endl;
            }
            int getmoney()
            {
                return money;
            }*/
};
class Son : public Father
{
    public:
        Son()
        {

        }
        void display()
        {
        //cout << getmoney() << endl;
        cout << gold << endl;
        cout << land << endl;
        }
};
class Grandson : public Son
{
    public:
        Grandson()
        {}
        void display()
        {
            //cout << getmoney() << endl;
            cout << gold << endl;
            cout << land << endl;
        }
        //int return sum
};
int main()
{
    Son s;
    s.display();

    Grandson g;
    g.display();

    return 0;
}