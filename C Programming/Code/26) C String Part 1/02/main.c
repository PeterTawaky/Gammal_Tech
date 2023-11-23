#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[20],y[10]; //اضطريت اعمل array لكل كلمة
    printf("Please, enter your 1st name: ");
    scanf("%s",x);
    printf("Please, enter your last name: ");
    scanf("%s",y);
    printf("%s %s",x,y);
    return 0;
}
