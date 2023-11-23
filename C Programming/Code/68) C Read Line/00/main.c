#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[400];
    printf("please enter any sentense: ");
    scanf("%[^\n]",x);   //print when u click enter
    printf("%s",x);
    return 0;
}
