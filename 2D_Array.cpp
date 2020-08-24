#include<iostream>
using namespace std;

int main()
{

    int array[5][5];
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j = 0; j<5; j++)
        {
            array[i][j] = i*5+j+1; 
        }        
    }

    for(i=0;i<=4;i++)
    {
        for(j = 0; j<5; j++)
        {
            cout<<array[i][j]<<" ";
        }        
        cout<<endl;
    }

    return 0;
}