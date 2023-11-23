#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char first_name[20],last_name[10],y[]=" Boules";
    printf("Please, enter your 1st name: ");
    scanf("%s",first_name);
    printf("Please, enter your Last name: ");
    scanf("%s",last_name);  //el scan fii %s mfihoosh  (&)
    strcat(first_name,last_name);   //el last name et7t gwa el variable first name
    printf("%s %s",first_name,y);
    return 0;
}
