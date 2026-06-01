#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    int Sum(int t)
    {
        return t;
    }
    int Sum(int a, int b)
    {
        return a+b;
    }
    double Sum(double a, int b)
    {
        return a+b;
    }
    double Sum(int a, double b)
    {
        return a+b;
    }
    double Sum(double a, double b)
    {
        return a+b;
    }

};
int main()
{
    Test t;
    cout << t.Sum(10) << endl; 
    cout << t.Sum(10,20) << endl;
    cout << t.Sum(5.7,20) << endl;
    cout << t.Sum(10,2.6) << endl;
    cout << t.Sum(10.5,20.7) << endl;
    return 0;
}