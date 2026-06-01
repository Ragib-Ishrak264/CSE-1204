#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<int, string, double> tx;

    // i)
    tx = make_tuple(100, "Kamal", 3.5);

    // ii)
    cout << "Int: " << get<0>(tx) << endl;

    // iii)
    cout << "String: " << get<1>(tx) << endl;

    // iv)
    cout << "Double: " << get<2>(tx) << endl;

    // v)
    get<2>(tx) = 3.7;
    cout << "Modified Double: " << get<2>(tx) << endl;

    // vi)
    tuple<int, string, double> bx;
    bx = make_tuple(200, "Rahim", 4.2);

    tx.swap(bx);

    cout << "After swap, tx = (" 
         << get<0>(tx) << ", " 
         << get<1>(tx) << ", " 
         << get<2>(tx) << ")" << endl;

    cout << "After swap, bx = (" 
         << get<0>(bx) << ", " 
         << get<1>(bx) << ", " 
         << get<2>(bx) << ")" << endl;

    return 0;
}