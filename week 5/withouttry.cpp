#include <iostream> 
using namespace std; 
 
int main() 
{ 
  int i; 
  int ax[5]={10,20,60,40,30}; 
  cout<<"Enter index(int):"; 
  cin>>i;
    if(i>5 || i<0)
    {
        throw(i);
    }
    if(cin.fail())
    {
        throw("Chutiya typing nehi shikah.. gawk gawk");
    }
    cout<<"ax["<<i<<"]="<<ax[i]<<endl;
  catch(const char *s)
  {
    cout << s << endl;
  }
  catch(...)
  {
    cout << "Exception is exception" << endl;
  }
  return 0;
}
