#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 6> ax;

    // i) assign using single statement
    ax = {10, 60, 30, 70, 20, 90};

    // ii) third element
    cout << "Third element: " << ax.at(2) << endl;

    // iii) first element
    cout << "First element: " << ax.front() << endl;

    // iv) last element
    cout << "Last element: " << ax.back() << endl;

    // v) fill
    ax.fill(5);
    cout << "After fill(): ";
    for (int x : ax) cout << x << " ";
    cout << endl;

    // vi) empty
    cout << "Is empty: " << (ax.empty() ? "Yes" : "No") << endl;

    // vii) size
    cout << "Size: " << ax.size() << endl;

    // viii) max_size
    cout << "Max size: " << ax.max_size() << endl;

    // ix) address of first element
    cout << "Address of first element: " << &(*ax.begin()) << endl;

    // x) address of last element
    cout << "Address of last element: " << &(*(ax.end() - 1)) << endl;

    return 0;
}