#include <iostream>

using namespace std;

int main()
{
    int n;     //variable
    cout<<"how much person in this game: ";
    cin>>n;
    string names[n+1];     //variable
    cout<<"Please, Enter their names: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<") ";
        cin>>names[i-0];
    }

    cout<<"Who is the most likely to be the best at math?"<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<") "<<names[i-0]<<endl;
    }
    for(int i=1;i<=n;i++){
        int names[i-1]={0};   //variable
    }
    return 0;
}
