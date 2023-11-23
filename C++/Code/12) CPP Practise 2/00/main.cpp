#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<<"Please, enter a number: ";
    cin>>n;
    for(int j=0;j<n;j++){
        for(int i=n;i>j;i--){
            cout<<"*";
        }
    cout<<endl;
    }
}
