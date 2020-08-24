#include<iostream>
using namespace std;

class Parent
{
    private:
        string fame;

    public:
        int money;
        string lname;

        void getDetail(int argMoney, string argLname)
        {
            money = argMoney;
            lname = argLname;
        }

        void printDetail()
        {
            cout<<"Last Name: "<<lname<<endl;
            cout<<"Money: "<<money<<endl;
        }
    
        //if parent class has public function to acess private variable, then child xlass can access it. 
        void printFame(string argFame)
        {
            fame = argFame;
            cout<<fame<<endl;
        }
};

class Child: public Parent
{
    public:
        string fname;

        Child(string argFname)
        {
            cout<<"First Name: "<<argFname<<endl;
        }
};

int main()
{
    Parent father;
    father.getDetail(100000,"Tiwari");
    father.printDetail();
    father.printFame("Scholar");
    cout<<endl;

    Child daughter("Deepika");
    daughter.getDetail(20000,"Tiwari");
    daughter.printDetail();
    daughter.printFame("Artist");
    return 0;

}