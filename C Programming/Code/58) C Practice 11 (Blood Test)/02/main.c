#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    while(5){
        printf("Please,enter a number: ");
        scanf("%d",&x);
        printf( x%2 ? "odd \n" : "even\n");
    }
    return 0;
}
