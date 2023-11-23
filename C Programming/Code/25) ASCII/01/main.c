#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i='a';'a'<='z';i++)  //infinite loop as 'a' value will not inc.
        printf("%c \t %d",i,i);
    return 0;
}
