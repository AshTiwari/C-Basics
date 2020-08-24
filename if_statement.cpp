#include<iostream>
using namespace std;

int main()
{    
    if ('a' && 1 && -0.1 && !0)
    {
        cout<<"if(x) will always be true if x!=0 or x!=false.\n";
        cout<<"Rest of else if statement won't run even if true.\n\n";
    }
    else if (1 || 'a')
    {
        cout<<"else if() will not run if the first if() is true.\n\n";
    }

    return 0;    
}