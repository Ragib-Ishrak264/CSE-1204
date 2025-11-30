#include<iostream>
using namespace std;
class A
{
    int a;
    int b;
    public:
            A()
            {

            }
            void setdata(int x, int y)
            {
                a=x;
                b=y;
            }
            A(const A &obj)
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
    A obj1;
    obj1.setdata(13,34);
    A obj2(obj1);
    cout << "Object 1: " ; obj1.display();
    cout << "Object 2: " ; obj2.display();
    
    return 0;
}