#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>x;
    vector<int>y;
    x.push_back(5);
    x.push_back(2);
    x.push_back(9);
    x.push_back(-21);
    x.push_back(2003);
    x.push_back(21);
    y=x;
    cout<<"Y before sort: "<<endl;
    for(int i=0;i<y.size();i++)
        cout<<y[i]<<endl;
    sort(y.begin(),y.end());
    cout<<"Y after asscending sort: "<<endl;
    for(int i=0;i<y.size();i++)
        cout<<y[i]<<endl;
    reverse(y.begin(),y.end() );
    cout<<"Y after descending sort: "<<endl;
    for(int i=0;i<y.size();i++)
        cout<<y[i]<<endl;
    x.clear();
    cout<<"now x value is: "<<x.size();
    return 0;
}
