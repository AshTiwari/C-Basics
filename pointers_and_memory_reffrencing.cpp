//we can do memory reffrencing of variables using &.
//we can do memory dereffrencing of pointers using *.

#include<iostream>
using namespace std;

int main()
{    
    int Integer = 10;
    int *pInteger = &Integer;
    cout<<"Integer:"<<Integer<<"; pInteger:"<<pInteger<<endl;;
    cout<<"*pInteger:"<<*pInteger<<"; &*pInteger:"<<&*pInteger<<endl;
    cout<<endl;

    //IMPORTANT: SOLVE ERROR!
    char Character = 'a';
    char *pCharacter = &Character; 
    cout<<"Character:"<<Character<<"; pCharacter:"<<pCharacter;
    cout<<"*pCharacter:"<<*pCharacter<<"; &*pCharacter:"<<&*pCharacter<<endl;

    return 0;
}