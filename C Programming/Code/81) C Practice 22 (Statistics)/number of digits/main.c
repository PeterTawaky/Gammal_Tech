#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,digits=0;
    printf("Please enter a number: ");
    scanf("%d",&x);
    do{
        x/=10;
        digits++;
    }while(x!=0);           //here we should use do..while not for loop...expecting that the user will enter the number zero
    printf("%d",digits);
    return 0;
}
