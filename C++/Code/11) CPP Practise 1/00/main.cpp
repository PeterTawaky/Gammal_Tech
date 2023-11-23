#include <iostream>

using namespace std;

int main()
{
    while(5){
        int x,j=0;
        cout<<"Please, enter a number: ";
        cin>>x;
        for(int i=1;i<=x;i++,j++){
          for(int i=0;i<=j;i++)
            cout<<"*";
          cout<<endl;
        }
    }
    return 0;
}
