#include <iostream>

using namespace std;

int main()
{
    int n;
    int x=1;
    cout<<"Please, Enter a number: ";
    cin>>n;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=j;i++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    return 0;
}
