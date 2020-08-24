// class is a blueprint for a new data-type.

#include<iostream>
using namespace std;

class Person
{
    public:
        string name;
        int age;

    bool isAdult()
    {
        if(age>=18)

            return true;
        else
            return false;
    }

}; 

int main()
{
    cout<<"For real entities of world, data-type like int or string can't represent them completly."<<endl;
    cout<<"Classes help us represent such objects."<<endl;

    // Here int and Person are data-type and int1,int2,p1,p2 are instances of those data-type.   
    int int1 = 5 ,int2 = 10;
    Person p1, p2;
    p1.age = 18;
    p1.name = "Ashu";
    p2.age = 20;
    p2.name = "Ashi";

    cout<<p1.name<<", "<<p1.age<<endl;
    cout<<p2.name<<", "<<p2.age<<endl;

    cout<<p1.isAdult()<<endl;
    cout<<p2.isAdult()<<endl;
    return 0;
}