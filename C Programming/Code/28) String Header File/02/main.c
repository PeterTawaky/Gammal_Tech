#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    while(5){
        char name[20],amr[]="amr";
        printf("Please, enter your first name: ");
        scanf("%s",name);
        if( strcmp ( name,amr ) == 0 ){   //strcmp--> string compare y3nii the difference between them =0
            printf("Hello Amr!\n");
            return 0;
        }
        else
            printf("you are not amr\n");
    }
        return 0;
}
