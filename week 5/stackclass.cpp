#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    // push()
    st.push(10);
    st.push(20);
    st.push(30);

    // top()
    cout << "Top element: " << st.top() << endl;

    // pop()
    st.pop();
    cout << "After pop, top element: " << st.top() << endl;

    // empty()
    if (st.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}