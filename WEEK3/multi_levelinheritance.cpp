#include<bits/stdc++.h>
using namespace std;
class A{
private:
int x=10;
protected:
int y=11;
public:
int z=12;
int getx()
{
    return x;
}
};
class B:public
A{
};
class C:private
B{
public:
int gety()
{
    return y;
}
int getz()
{
    return z;
}
int getpvt()
{
    getx();
}
};
int main(){
C c;
cout << c.getpvt() << endl;
cout << c.gety() << endl;
cout << c.getz()<< endl;
return 0;
}