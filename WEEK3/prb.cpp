#include <iostream>
using namespace std;

class Father{
private:
    int money;
protected:
    int gold;
public:
    int land;

    Father(int m, int g, int l){
        money = m;
        gold = g;
        land = l;
    }

    int getMoney(){ return money; }
};

class Son : public Father{
public:
    Son(int m, int g, int l) : Father(m,g,l) {}
};

class GrandSon : public Son{
public:
    GrandSon(int m, int g, int l) : Son(m,g,l) {}

    void totalWealth(){
        cout << "Total wealth = "
             << getMoney() + gold + land << endl;
    }
};

int main(){
    GrandSon g(100, 50, 20);
    g.totalWealth();
}
