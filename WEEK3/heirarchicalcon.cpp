#include <bits/stdc++.h>
using namespace std;

class A {
protected:
    int ax;
public:
    A() {
        ax = 10;
        cout << "A constructor\n";
    }
    ~A() {
        cout << "A destructor\n";
    }
};

class B : public A {
private:
    int bx;
public:
    B() {
        bx = 20;
        cout << "B constructor\n";
    }
    ~B() {
        cout << "B destructor\n";
    }
};

class C : public A {
private:
    int cx;
public:
    C() {
        cx = 30;
        cout << "C constructor\n";
    }
    void sum() {
        cout << "Sum = " << ax + cx << endl;
    }
    ~C() {
        cout << "C destructor\n";
    }
};

int main() {
    B b;
    C c;
    c.sum();
    return 0;
}