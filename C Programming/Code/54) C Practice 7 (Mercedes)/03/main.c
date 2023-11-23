#include <stdio.h>
#include <stdlib.h>

int main()
{  //changing any small Letter by capital Letter by subtracting the value of difference between them.
        char x;
        printf("Please, enter any small letter: ");
        scanf("%c",&x);
        printf("%c",x-('a'-'A'));
        return 0;

}
