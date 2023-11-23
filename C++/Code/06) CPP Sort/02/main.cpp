#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of numbers u want to insert: ";
    cin>>n;
    int x[n+1];
    int y[n+1];
    cout<<"Enter the values u want to insert:"<<endl;
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    cout<<"now we sorted x ascendingly: "<<endl;
    for(int i=0;i<n;i++)
        cout<<x[i]<<endl;
    reverse(x,x+n);
    cout<<"now we sorted x descendingly: "<<endl;
    for(int i=0;i<n;i++)
        cout<<x[i]<<endl;
    y=x;    //لا يمكن مساواة قيم 2 array بهذه الطريقة
    return 0;
}
