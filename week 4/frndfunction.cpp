#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    friend void Add(A &obj, int value);
    friend void IncX(A &obj, int m);
    friend void DecX(A &obj, int n);

    A() {
        x = 0;
    }

    void display() {
        cout << "x = " << x << endl;
    }
};
void Add(A &obj, int value) {
    obj.x = value;
}
void IncX(A &obj, int m) {
    obj.x += m;
}
void DecX(A &obj, int n) {
    obj.x -= n;
}

int main() {
    A a;

    Add(a, 10);     
    a.display();

    IncX(a, 5);     
    a.display();

    DecX(a, 3);     
    a.display();

    return 0;
}
