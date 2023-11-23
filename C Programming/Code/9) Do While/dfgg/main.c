#include <stdio.h>
#include <stdlib.h>

int main()
{
    int password,pass1=1111,pass2=2222,pass3=3333;
    do{
        printf("Please, enter the password: ");
        scanf("%d",&password);
        if(password!=pass1 && password!=pass2 && password!=pass3)
            printf("password is wrong\n");
    }while(password!=pass1 && password!=pass2 && password!=pass3);
    printf("the password is correct");
    return 0;
}
