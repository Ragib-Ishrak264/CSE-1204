#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    str#include<bits/stdc++.h>
using namespace std;

class Patient{
public:
    string name;
    Patient(string n){ name = n; }
};

class Doctor{
public:
    Patient* p; // aggregation (reference)

    Doctor(Patient* p){
        this->p = p;
    }

    void show(){
        cout<<"Patient: "<<p->name<<endl;
    }
};

int main(){
    Patient p("Ragib");
    Doctor d(&p);

    d.show();
}ing name;
    Student(string n)
    {
        name = n;
    }
};
class University
{
    public:
    Student* s;
    University(Student* s)
    {
        this->s = s;
    }
    void show()
    {
        cout << "Student " << s->name << endl;
    }
};
int main()
{
    Student s("Ragib");
    University u (&s);
    u.show();


    return 0;
}