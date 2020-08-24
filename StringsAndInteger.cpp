#include <iostream>

using namespace std;

int main()
{
    //string stringValue = 'asd' ;
    // gives error =>  error: conversion from 'int' to non-scalar type

    string String;
    cout<<"Enter a string:"<<endl;
    //cin.ignore();
    getline(cin,String);
    cout<<"Input through getline() is : "<<String<<endl<<endl;

    string emptyString;
    string storedString = "The variable has a value.";   
    int emptyInteger;
    int storedInteger = 10;
    cout <<"The value of the emptyString: "<<emptyString<<endl;
    cout <<"The value of storedString : "<<storedString<<endl;
    cout <<"The value of the emptyInteger: "<<emptyInteger<<endl;
    cout <<"The value of storedInteger : "<<storedInteger<<endl;    
    cout <<"We can print an expression." <<storedInteger*2+1<<endl;
   
    return 0;
}