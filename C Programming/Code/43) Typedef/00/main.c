#include <stdio.h>
#include <stdlib.h>
typedef int gammal_num;   //momken mn 5lalha nbdl ay data type zy int/float/char etc...
typedef char gammal_text;
gammal_num main()
{
    gammal_num x=5;
    gammal_text name[10];
    int y=6;
    printf("%d  %d\n",x,y);
    printf("Please,enter your name: ");
    scanf("%s",name);
    printf("Hello %s",name);
    return 0;
}
