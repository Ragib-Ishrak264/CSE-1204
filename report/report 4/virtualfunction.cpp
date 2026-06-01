#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout << "Class a" << endl;
    }

};
class B : public A
{
    public:
     void show()
    {
        cout << "Class B" << endl;
    }
};

int main()
{
    A* a;
    B b;
    a = &b;
    a->show();
    return 0;
}