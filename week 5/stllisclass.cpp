#include <iostream>
#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>
using namespace std;

bool isEven(int x) {
    return x % 2 == 0;
}

void Display(list<int> li) {
    list<int>::iterator it;
    for (it = li.begin(); it != li.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void DisplayRev(list<int> li) {
    list<int>::reverse_iterator it;
    for (it = li.rbegin(); it != li.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> li;

    // i) insert 8 integers using push_back()
    li.push_back(10);
    li.push_back(20);
    li.push_back(30);
    li.push_back(40);
    li.push_back(50);
    li.push_back(60);
    li.push_back(70);
    li.push_back(80);

    // ii) insert two using push_front()
    li.push_front(5);
    li.push_front(1);

    cout << "Forward: ";
    Display(li);

    // iv) reverse display
    cout << "Reverse: ";
    DisplayRev(li);

    // v) front()
    cout << "Front element: " << li.front() << endl;

    // vi) back()
    cout << "Back element: " << li.back() << endl;

    // vii) delete back using pop_back()
    li.pop_back();
    cout << "After pop_back: ";
    Display(li);

    // viii) delete front using pop_front()
    li.pop_front();
    cout << "After pop_front: ";
    Display(li);

    // ix) search an element x using find()
    int x = 30;
    auto it = find(li.begin(), li.end(), x);
    if (it != li.end())
        cout << x << " found" << endl;
    else
        cout << x << " not found" << endl;

    // x) insert a new element x before existing y
    int newVal1 = 25, y1 = 30;
    auto it1 = find(li.begin(), li.end(), y1);
    if (it1 != li.end()) {
        li.insert(it1, newVal1);
    }
    cout << "After insert before 30: ";
    Display(li);

    // xi) insert a new element x after existing y
    int newVal2 = 35, y2 = 30;
    auto it2 = find(li.begin(), li.end(), y2);
    if (it2 != li.end()) {
        ++it2;
        li.insert(it2, newVal2);
    }
    cout << "After insert after 30: ";
    Display(li);

    // xii) count a particular element x
    cout << "Count of 30: " << count(li.begin(), li.end(), 30) << endl;

    // xiii) count elements with condition
    cout << "Count of even elements: " << count_if(li.begin(), li.end(), isEven) << endl;

    // xiv) delete a particular element x with erase()
    auto it3 = find(li.begin(), li.end(), 25);
    if (it3 != li.end()) {
        li.erase(it3);
    }
    cout << "After erase(25): ";
    Display(li);

    // xv) delete first 4 elements with erase()
    auto start = li.begin();
    auto finish = li.begin();
    advance(finish, 4);
    li.erase(start, finish);
    cout << "After deleting first 4 elements: ";
    Display(li);

    // xvi) delete a particular element x with remove()
    li.remove(60);
    cout << "After remove(60): ";
    Display(li);

    // xvii) delete elements with condition using remove_if()
    li.remove_if(isEven);
    cout << "After remove_if(isEven): ";
    Display(li);

    // xviii) assign elements from another list
    list<int> li2;
    li2.push_back(100);
    li2.push_back(200);
    li2.push_back(300);

    li.assign(li2.begin(), li2.end());
    cout << "After assign from another list: ";
    Display(li);

    // xix) assign elements from an array
    int arr[] = {7, 8, 9, 10};
    li.assign(arr, arr + 4);
    cout << "After assign from array: ";
    Display(li);

    // xx) sort the list
    li.push_back(2);
    li.push_back(15);
    li.sort();
    cout << "After sort: ";
    Display(li);

    // xxi) delete consecutive similar elements using unique()
    li.push_back(15);
    li.push_back(15);
    li.push_back(20);
    li.push_back(20);
    li.sort();
    cout << "Before unique: ";
    Display(li);

    li.unique();
    cout << "After unique: ";
    Display(li);

    return 0;
}