#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Please, enter the number of view in the last week: ");
    scanf("%d",&x);
    printf("Please, enter the number of view in the this week: ");
    scanf("%d",&y);
    if(x==y)
        printf("same views");
    else if(x<y)
        printf("views incresed");
    else if(x>y)
        printf("views decreased");

    return 0;
}
