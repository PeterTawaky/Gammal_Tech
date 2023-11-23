#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x=" ";
    int n;
    cout<<"please, enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++)
        x+="*";     //for installation of the string by *
     for(int i=0;i<n;i++){
        cout<<x;
        x=x-"*";
        cout<<endl;
     }


    return 0;
}
