#include<iostream>
using namespace std;

class Person
{
    private:
        //any function within the class can access private variable/functions.
        int salary = 100000;
        void bonus()
        {
            cout<<"Bonus: "<<salary*2<<endl; 
        }
    
    public:
        string name;
        int age;

        Person(string argName,int argAge)
        {
            name = argName;
            age = argAge;
        }

        void printSalary()
        {
            cout<<"Salary: "<<salary<<endl;
            bonus();
        }

};

int main()
{
    Person p1("Ashu",21);
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    p1.printSalary();

    //cout<<p1.salary<<endl; will give error: person is private.


    return 0;
}