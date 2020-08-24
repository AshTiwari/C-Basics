#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char b = 'b';
    char *pb = &b;
    cout<<&*pb<<endl;
    int Integer;
    string String;
    float Float;
    double Double;
    bool Flag;
    long double a = 2.0;
    cout<<"Maximum Signed Integer: "<<INT_MAX<<endl;
    cout<<"Minimum Signed Integer: "<<INT_MIN<<endl;
    cout<<"Any value above Maximum Signed Integer moves towards negative number: "<<INT_MAX+1<<endl;
    cout<<"Any value below Minimum Signed Integer moves towards positive number: "<<INT_MIN-1<<endl;
    
}