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
        x = 7;
        y = 8;
        z = 9;
    }

    int getX() {
        return x;
    }
};

class B : public A {
public:
    void showB() {
        cout << "B: x = " << getX() << ", y = " << y << ", z = " << z << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "C: x = " << getX() << ", y = " << y << ", z = " << z << endl;
    }
};

int main() {
    B b;
    C c;
    b.showB();
    c.showC();
    return 0;
}