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
    void sum() {
        cout << "Sum = " << ax + bx << endl;
    }
    ~B() {
        cout << "B destructor\n";
    }
};

int main() {
    B b;
    b.sum();
    return 0;
}