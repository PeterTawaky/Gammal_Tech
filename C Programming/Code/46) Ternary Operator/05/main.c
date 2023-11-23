#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(5){
        printf("please, enter a number: ");
        scanf("%d",&n);
        printf(!(n % 2 == 0) ? "odd \n" : "even \n");
    }
    return 0;
}
//the logical operator not (!) Reflect the condition
