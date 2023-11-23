#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0,z;
    printf("Please,enter a number: ");
    scanf("%d",&x);
    z=x;
    while(x!=0){
        y=(y*10)+(x%10);
        x/=10;
    }
    printf("%d",y);
    return 0;
}
