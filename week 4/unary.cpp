#include <iostream>
using namespace std;
class AirConditioner
{
    int temperature;
public:
    AirConditioner(int t)
    {
        temperature = t;
    }
    void operator++()
    {
        temperature++;
    }
    void operator--()
    {
        temperature--;
    }
    void display()
    {
        cout << "Current Temperature: " << temperature << endl;
    }
};
int main()
{
    AirConditioner ac(24);
    ac.display();
    ++ac;
    ac.display();
    --ac;
    ac.display();
    return 0;
}
