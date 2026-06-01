#include <bits/stdc++.h>
using namespace std;

class A {
private:
    int x;
protected:
    int y;
public:
    int z;

    A() {
        x = 11;
        y = 22;
        z = 33;
    }

    int getX() {
        return x;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
public:
    void show() {
        cout << "x = " << getX() << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
};

int main() {
    D d;
    d.show();
    return 0;
}