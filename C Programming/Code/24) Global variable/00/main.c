#include <stdio.h>
#include <stdlib.h>
int x,y,z=60,k=70;     //global variable which declared in all functions and it's value = 0 if it's not declared by value
void value(){
    int f;
    x=20;
    printf("f= %d\n",f);
    printf("x= %d\n",x);
    printf("y= %d\n",y);
    printf("k= %d\n",k);

    return 0;
}
int main()
{
    int k,f;
    y=50;
    printf("f= %d\n",f);
    printf("x= %d\n",x);
    printf("y= %d\n",y);
    printf("k= %d\n",k);
    printf("z= %d\n",z);
    value();
    return 0;
}
