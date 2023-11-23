#include <stdio.h>
#include <stdlib.h>

int main()
{ //when user enter the data we can't
    char name[]="peter Ayman";  // when programmer enter the data we can use space
    int age[]={21};
    printf("Hello %s   %d",name,age[0]);
    printf("\npeter  \0 ayman");   // \0 stop any string
    return 0;
}
