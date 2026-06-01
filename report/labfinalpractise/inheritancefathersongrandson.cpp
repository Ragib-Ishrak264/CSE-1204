#include<bits/stdc++.h>
using namespace std;
class Father{ 
private: 
int money; 
protected: 
int gold=10; 
public: 
int land=20; 
};
class Son : public Father
{
   


};
class Grndson : public Son
{
    public:
    void display()
    {
        cout << gold << " " << land << endl;
    }

};
int main()
{
    Grndson g;
    g.display();



    return 0;
} 