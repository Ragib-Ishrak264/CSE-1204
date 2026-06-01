#include <iostream>
using namespace std;
template <class T1, class T2>
class A 
{
    T1 x;
    T2 y;
public:
    void setData(T1 x, T2 y) {
       this-> x=x;
        this ->y =y;
    }
    auto Sum() 
    {   
        return x + y;
    }
};
int main() 
{

    A<int, int> obj1;
    obj1.setData(10, 20);
    cout << "Sum(int, int): " << obj1.Sum() << endl;
    A<int, double> obj2;
    obj2.setData(10, 5.5);
    cout << "Sum(int, double): " << obj2.Sum() << endl;
    A<double, int> obj3;
    obj3.setData(3.5, 7);
    cout << "Sum(double, int): " << obj3.Sum() << endl;
    A<double, double> obj4;
    obj4.setData(2.5, 3.5);
    cout << "Sum(double, double): " << obj4.Sum() << endl;
    return 0;
}
