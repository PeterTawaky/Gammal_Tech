#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x,y;
    for(x='a',y='A';x<='z'&&y<='Z';x++,y++)
        printf("%c    %c\n",x,y);
    return 0;
}
