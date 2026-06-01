#include<iostream>
using namespace std;
class A{ 
  private: 
    int x; 
 protected: 
  int y; 
 public: 
  int z;
  A(int a, int b, int c)
  {
    x=a;
    y=b;
    z=c;
  } 
};
class B:public A
{

};
class C:public B
int main()
{


    return 0;
}