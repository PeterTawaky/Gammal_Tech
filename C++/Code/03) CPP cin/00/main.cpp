#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    float x,answer;
    char c;
    cout<<"Please, Enter the first number: ";   //output
    cin>>n1;                                    //input
    cout<<"Please, Enter the second number: ";
    cin>>n2;
    cout<<"Please, Enter the Character of Operation: ";
    cin>>c;
    if(c=='+')
        x=n1+n2;
    else if(c=='-')
        x=n1-n2;
    else if(c=='*')
        x=n1*n2;
    else if(c=='/')
        x=n1/n2;
    else if(c=='%')
        x=n1%n2;
    cout<<"now, guess the Answer: ";
    cin>>answer;
    if(answer==x)
        printf("You are a genius");
    else{
        cout<<"Good Luck next time"<<endl;
        cout<<"The right answer is: "<<x;
    }
    return 0;
}
