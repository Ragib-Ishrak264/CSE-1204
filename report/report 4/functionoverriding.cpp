#include<bits/stdc++.h>
using namespace std;
class Circuit
{
    private:
    int real;
    int img;

    public:
    Circuit(int a, int b)
    {
        real = a;
        img = b;
    }
    Circuit operator + (Circuit c)
    {
        return Circuit(real+c.real,img+c.img); 
    }
    void display()
    {
        cout << real << "+j" << img << endl;
    }

};
int main()
{
    Circuit c1(10,20);
    Circuit c2(2,3);

    Circuit c3(c1+c2);
    c3.display();


    return 0;
}