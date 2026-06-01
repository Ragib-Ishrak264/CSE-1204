#include<bits/stdc++.h>
using namespace std;
class A
{
    int a;
    int b;
    public:
    A()
    {

    }
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;

    }
    A(const A &obj )
    {
        a=obj.a;
        b=obj.b;

    }
    void display()
    {
        cout << a << " " << b << endl;
    }

};
int main()
{
    A a1;
    a1.setData(10,20);
    A a2(a1);

    a1.display();
    a2.display();
    return 0;
}