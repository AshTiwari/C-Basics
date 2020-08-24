#include <iostream>
using namespace std;

int main()
{
    string String;
    cout<<"Enter a string:"<<endl;
    //cin.ignore();
    getline(cin,String);
    cout<<"Input through getline() is : "<<String<<endl<<endl;
    
    String = "Check functions like len, find.";
    
    cout<<"String[0] = "<<String[0]<<endl;   
    String[6] = 'F';
    cout<<"String after update: "<<String<<endl<<endl;

    cout<<"String.length() = "<<String.length()<<endl<<endl;

    cout<<"String.find(): "<<endl;
    string subString = "Functions";
    int position=5;
    cout<<String.find(subString,position)<<endl;
    cout<<"Returns string::npos i.e. the maximum value possible if sub string is not found: "<<String.find(subString,10)<<endl<<endl;

    string stringFormatting = String.substr(6,3); //starting index, length of subString.
    cout<<"String formatting: "<<stringFormatting<<endl;
   
   return 0;

}