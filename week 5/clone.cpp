#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    int ax[5] = {10, 20, 60, 40, 30};

    cout << "Enter index: ";
    cin >> i;

    try
    {
        if (i < 0 || i >= 5)
        {
            throw i;                          // catch (int)
            // OR you may throw string below instead
            // throw string("Out of Range Error");
        }

        cout << "ax[" << i << "] = " << ax[i] << endl;
    }

    // i) catch block receives the value of i
    catch (int x)
    {
        cout << "Index value received: " << x << endl;
    }

    // ii) catch block receives string
    catch (string s)
    {
        cout << s << endl;
    }

    // iii) default catch
    catch (...)
    {
        cout << "Unknown Exception" << endl;
    }

    return 0;
}
