#include<stdio.h>
int main(void){
    int password;
    do{
        printf("Please, enter the password: ");
        scanf("%d",&password);
        if(password!=12345)
            printf("wrong password\n");

    }while(password!=12345);
    printf("wright password");


    return 0;
}
