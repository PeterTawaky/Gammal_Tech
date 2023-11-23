#include <stdio.h>
#include <stdlib.h>
int count=1;
int main()
{
    int x;
    printf("Please,enter a number: ");
    scanf("%d",&x);
    const int y=x;
    while(x){
        scanf("%d",&x);
        count += x==y? 1 : 0;
    }
    printf("number of repeatation of number %d is : %d",y,count);
    return 0;
}
