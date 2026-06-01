#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> qu;

    // push()
    qu.push(10);
    qu.push(20);
    qu.push(30);

    // front()
    cout << "Front element: " << qu.front() << endl;

    // back()
    cout << "Rear element: " << qu.back() << endl;

    // pop()
    qu.pop();
    cout << "After pop, front element: " << qu.front() << endl;

    // empty()
    if (qu.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    return 0;
}