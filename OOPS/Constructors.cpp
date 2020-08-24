#include<iostream>
using namespace std;

class Person
{
    public:
        string fname;
        string lname;
        int age;
        Person()
        {
            cout<<"Non parameterised constructor is  called."<<endl;
            fname = "Ashu";
            lname = "Tiwari";
            age = 21;
        }

        Person(string parFname, string parLname, int parAge)
        {
            cout<<"Parameterised constructor is called."<<endl;
            fname = parFname;
            lname = parLname;
            age = parAge;
        } 
};

int main()
{
   Person p1("Ash","Tripathi",20);
    cout<<p1.fname<<endl;
    cout<<p1.lname<<endl;
    cout<<p1.age<<endl; 
    cout<<endl;

    Person p2;
    cout<<p2.fname<<endl;
    cout<<p2.lname<<endl;
    cout<<p2.age<<endl;  

    return 0;
}