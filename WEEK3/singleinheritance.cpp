#include <iostream>
using namespace std;

class A {
private:
    int x;
protected:
    int y;
public:
    int z;
    A()
    {

    }
    A(int a, int b, int c)
  {
    x=a;
    y=b;
    z=c;
  } 
};

class B : public A {
public:
    void displayFromA(class A &obj) {
        cout << "Accessing from class B:" << endl;
        cout << "y (protected): " << obj.y << endl;
        cout << "z (public): " << obj.z << endl;
    }
    B()
    {
        
    }
};

int main() {
    A obj1(10,20,30);
    B obj2;
    obj2.displayFromA(obj1);
    return 0;
}