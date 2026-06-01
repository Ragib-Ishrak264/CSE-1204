#include<bits/stdc++.h>
using namespace std;

class Patient{
public:
    string name;
    Patient(string n){ name=n; }
};

class Doctor{
public:
    Patient p; // composition

    Doctor(string name): p(name){}

    void show(){
        cout<<"Patient: "<<p.name<<endl;
    }
};

int main(){
    Doctor d("Ragib");
    d.show();
}