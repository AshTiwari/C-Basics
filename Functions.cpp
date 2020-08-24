#include<iostream>
using namespace std;

string postFunction(string);

void preFunction(int intParameter, char charParameter, string stringParameter)
{
    cout<<"Integer Parameter: "<<intParameter<<endl;
    cout<<"Character Parameter: "<<charParameter<<endl;
    cout<<"String Parameter: "<<stringParameter<<endl;      
}

int main()
{
    string Function;
    string variableParameter = "Parameter as a variable.";
    preFunction(50,'a',variableParameter);

    Function = postFunction("String Parameter.");   
    cout<<Function<<endl;
}

string postFunction(string StrParameter)
{
    StrParameter[0] = 's';
    StrParameter[7] = 'p';

    return StrParameter;
}