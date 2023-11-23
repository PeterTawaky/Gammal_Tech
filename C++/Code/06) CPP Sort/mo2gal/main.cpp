#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int>x;
    cout<<"Please, enter the number of Ashommm: ";
    cin>>n;
    cout<<"now enter it's Values:"<<endl;
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++)
        cout<<x[i];
    return 0;
}
