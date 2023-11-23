#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>y;
    vector<int>x;
    x.push_back(5);
    x.push_back(20);
    for(int i=0;i<x.size();i++)
        cout<<x[i]<<endl;
    cout<<x.size()<<endl;
    y=x;
     for(int i=0;i<y.size();i++)
        cout<<y[i]<<endl;
    x.clear();
    cout<<x.size();
    return 0;
}
