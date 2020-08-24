#include<iostream>
using namespace std;

int main()
{
    cout<<"Integer division: "<<endl;
    cout<<"4/2 = "<<4/2<<endl;
    cout<<"5/2 = "<<5/2<<endl;
    cout<<"4.0/2 = "<<4.0/2<<endl;
    cout<<"4/2.0 = "<<4/2.0<<endl<<endl; 

    cout<<"Decimal Result: "<<endl;
    cout<<"5.0/2 = "<<5.0/2<<endl;
    cout<<"5/2.0 = "<<5/2.0<<endl;  
    cout<<"5.5 + 5 = "<<5.5+5<<endl;
    cout<<"5.5*3 = "<<5.5*3<<endl<<endl;

    float division,dividend,divisor;
    dividend = 10;divisor = 3;
    division = dividend/divisor;
    cout<<"Atleast one of the  dividend or divisor should be float for 10/3: "<<division<<endl<<endl;

    float a = 2.0;
    double b = 2.0; 
    cout<<"Float with zero in decimal place will print as integer: "<<a<<endl;
    cout<<"Double with zero in decimal place will print as integer: "<<b<<endl;
    
    return 0;
}