
#include<iostream>
using namespace std;
class Test
{
    private:
            int x;
            int y;
            static int z;

    public:
            Test()
            {
                x=0;
                y=0;
                z++;
            }

            Test(int a, int b)
            {
                x=a;
                y=b;
                z++;
            }

            Test(const Test &obj)
            {
                x = obj.x;
                y = obj.y;
                z++;
            }
            void setxy(int a, int b)
            {
                x=a;
                y=b;
            }
            void display() const
            {
                cout << x << y << z << endl;
            }
            int getx()
            {
                return x;
            }
            int gety()
            {
                return y;
            }
            ~Test()
            {
                cout << "Destroyed" << endl;
            }

};
int Test::z=0;
int main()
{
    int y[10];
    Test t1;
    Test t2(5,4);
    Test t3(t2);
    Test t4,t5;

    t4.setxy(10,20);
    t5.setxy(25,14);
    int sumx = t1.getx()+t2.getx()+t3.getx()+t4.getx()+t5.getx();
    y[0]=t1.gety();
    y[1]=t2.gety();
    y[2]=t3.gety();
    y[3]=t4.gety();
    y[4]=t5.gety();
    int max = y[0];
    for(int i=0; i<5; i++)
    {
        max=(max>y[i]?max:y[i]);
    }
    cout << "Sum of X: " <<  sumx << endl;
    cout << "Largest Y: "<< max << endl;
    return 0;
}