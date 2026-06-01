#include<bits/stdc++.h>
using namespace std;
class A{
private:
int x=1;
protected:
int y=2;
public:
int z=3;
int getx()
{
    return x;
}
};
class B{
private:
int p=11;
protected:
int q=22;
public:
int r=33;
int getp()
{
    return p;
}
};
class C:public A,public B
{
    public:
        int gety()
        {
            return y;
        }
        int getq()
        {
            return q;
        }


};
int main(){
C c;
cout << " x " <<c.getx() << endl;
cout << " y " <<c.gety() << endl;
cout << " z " << c.z<< endl;
cout << " p " << c.getp()<< endl;
cout << " q " << c.getq() << endl;
cout << " r " << c.r<< endl;
return 0;
}