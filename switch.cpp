#include<iostream>
using namespace std;

void defaultCase();
void noBreak();

int main()
{
    cout<<"We use switch when we have to compare one variable to many values.\n";
    cout<<endl;
    defaultCase();
    noBreak();

    return 0;
}

void defaultCase()
{
    int variable = 3;
    cout<<"This switch case has default.\n";
    switch (variable)
    {
    case 0:
        cout<<"Case 0\n";
        break;
    case 1:
        cout<<"Case 1\n";
    default:
        cout<<"No case matched.\n";
        break;
    }
    cout<<endl;
}

void noBreak()
{
    int variable = 3;
    cout<<"This switch case dosen't have breaks."<<endl;
    switch (variable)
    {
    case 3:
        cout<<"Case 3\n";
        cout<<"No break.\n";
    case 1:
        cout<<"Case 1\n";
    }
    cout<<endl;
}
