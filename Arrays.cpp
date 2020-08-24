#include<iostream>
using namespace std;

int main()
{
    int i;
    int array1[20];
    int array2[5] = {1};
    string animals[4] = {"Elephant", "Lion", "Deer", "Tiger"};
    
    cout<<"If no element is initalised in an array, the array stores garbage value."<<endl;
    for(i=0;i<20;i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl<<endl;
    
    cout<<"If even one elements is initalised, then rest of the array are stored as 0."<<endl;
    for (i = 0 ; i<5; i++)
    {
        cout<<array2[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<"String array."<<endl;
    for (i = 0 ; i<5; i++)
    {
        cout<<animals[i]<<" ";
    }
    cout<<endl<<endl;

    //Find out the meaning of the output address.
    //Also, check pointers and memory refrencing in c++.
    cout<<array2<<endl;
    cout<<&array2<<endl;

    return 0;
}