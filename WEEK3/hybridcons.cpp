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

class B : virtual public A {
protected:
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

class C : virtual public A {
protected:
    int cx;
public:
    C() {
        cx = 30;
        cout << "C constructor\n";
    }
    ~C() {
        cout << "C destructor\n";
    }
};

class D : public B, public C {
private:
    int dx;
public:
    D() {
        dx = 40;
        cout << "D constructor\n";
    }
    void sum() {
        cout << "Sum = " << ax + bx + cx + dx << endl;
    }
    ~D() {
        cout << "D destructor\n";
    }
};

int main() {
    D d;
    d.sum();
    return 0;
}