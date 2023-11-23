#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    char x[20];
    printf("Please, enter your name: ");
    scanf("%s",x);  // without (&)
    printf("Please, enter your age: ");
    scanf("%d",&y);
    printf("Hello %s \t %d",x,y);
    return 0;
}
