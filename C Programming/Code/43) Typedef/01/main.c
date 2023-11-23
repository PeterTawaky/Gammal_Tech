#include <stdio.h>
#include <stdlib.h>
typedef int gammal_number;
typedef char gammal_text;
int main()
{
    gammal_number noOfRepetations , i;
    gammal_text name[10];
    printf("Please,enter your 1st name: ");
    scanf("%s",name);
    printf("Please, enter a number: ");
    scanf("%d",&noOfRepetations);
    for(i=0;i<noOfRepetations;i++)
        printf("Hello %s\n",name);

    return 0;
}
