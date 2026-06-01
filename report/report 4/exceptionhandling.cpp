#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ax[3]={1,2,3};
    int i;
    cin >> i;
    try
    {
        if(i<0 || i>3)
        {
            throw(i);
        }
        cout << ax[i] << endl;
    }
    catch(int a)
    {
        cout << "Out of Bound" << endl;
    }
    


    return 0;
}