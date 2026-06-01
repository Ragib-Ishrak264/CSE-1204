#include<bits/stdc++.h>
using namespace std;
class A
{
    private:
    int x=10;
    public:
    friend void  display(A a);

};
void display(A a)
{
    cout << a.x << endl;
}
int main()
{
    A a;
    display(a);
    return 0;
}