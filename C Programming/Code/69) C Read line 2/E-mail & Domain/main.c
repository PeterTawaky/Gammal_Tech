#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userName[30],domain[30];
    printf("Please, enter your E-mail: ");
    scanf("%[^@] @ %[^\n]",userName,domain);
    printf("\n\nUser Name is: %s  \n",userName);
    printf("Domain is: %s",domain);

    return 0;
}
