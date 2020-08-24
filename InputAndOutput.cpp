#include <iostream>

using namespace std;

int main()
{   
    int input;
    cout<<"Enter Integer."<<endl;
    cin>>input;
    cout<<"The integer is: "<<input<<endl<<endl;

    string String;
    cout<<"Enter string:"<<endl;
    cin.ignore();
    getline(cin,String);
    cout<<"Input through getline() is : "<<String<<endl<<endl;

    cout<<"Use escape sequence \" for printing double inverted comma.\n";
    cout<<"Instead of endl use \\n for new line. \n";
    cout<<"Other standard \t escape sequence.\n ";

    // IMPORTANT MESSAGE:
    // FIND REASON WHY.
    cout<<'Single inverted comma prints garbage value in cout.'<<endl;   
    return 0;
}
                