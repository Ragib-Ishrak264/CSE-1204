#include<bits/stdc++.h>
using namespace std;
class A{
private:
int x;
protected:
int y;
public:
int z;
int returnx()
{
    return x;
}
};
class B:public A{
public:
        void display()
        {
            cout << returnx() << endl;
            cout << y << endl;
            cout << z << endl; 
        }
        int returny()
        {
            return y;
        }

};
int main()
{
B b;
b.display();
cout << b.returny() << endl;
return 0;
}