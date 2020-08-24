#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    cout<<"pow(2,3) = "<<pow(2,3)<<endl;
    cout<<"sqrt(36.5) = "<<sqrt(36.5)<<endl;
    cout<<"round(4.4), round(4.5), round(4.6) :"<<" "<<round(4.4)<<", "<<round(4.5)<<", "<<round(4.6)<<endl;
    cout<<"ceil() always rounds upwards: ceil(4.1) = "<<ceil(4.1)<<endl;
    cout<<"floor() always rounds downwards: floor(4.9) = "<<floor(4.9)<<endl;
    cout<<"fmax(a,b) gives max of a,b : fmax(1,10) = "<<fmax(1,10)<<endl;
    cout<<"fmin(a,b) gives min of a,b : fmin(1,10) = "<<fmin(1,10)<<endl;
       
    return 0;
}