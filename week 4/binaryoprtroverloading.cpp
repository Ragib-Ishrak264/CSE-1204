#include <iostream>
using namespace std;

class Circuit {
private:
    double real;
    double img;

public:
    Circuit(double r = 0, double i = 0) {
        real = r;
        img = i;
    }
    Circuit operator+(Circuit c) {
        return Circuit(real + c.real, img + c.img);
    }
    Circuit operator/(Circuit c) {
        double denom = c.real * c.real + c.img * c.img;
        double r = (real * c.real + img * c.img) / denom;
        double i = (img * c.real - real * c.img) / denom;
        return Circuit(r, i);
    }
    void display() {
        if (img >= 0)
            cout << real << " + j" << img << endl;
        else
            cout << real << " - j" << -img << endl;
    }
};

int main() {
    Circuit z1(3, 4);
    Circuit z2(4, -3);
    Circuit z3(0, 6);
    Circuit V(100, 50);
    Circuit one(1, 0);
    Circuit y1 = one / z1;
    Circuit y2 = one / z2;
    Circuit y3 = one / z3;


    Circuit Yeq = y1 + y2 + y3;


    Circuit Zeq = one / Yeq;


    Circuit I = V / Zeq;

    cout << "Equivalent Impedance Z = ";
    Zeq.display();

    cout << "Circuit Current I = ";
    I.display();

    return 0;
}
