#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> px;

    // i)
    px = make_pair(10, "Rajshahi");

    // ii)
    cout << "First: " << px.first << endl;

    // iii)
    cout << "Second: " << px.second << endl;

    // iv)
    get<0>(px) = 20;
    cout << "Modified First: " << px.first << endl;

    // v)
    pair<int, string> bx;
    bx = make_pair(50, "Dhaka");

    px.swap(bx);

    cout << "After swap, px = (" << px.first << ", " << px.second << ")" << endl;
    cout << "After swap, bx = (" << bx.first << ", " << bx.second << ")" << endl;

    return 0;
}