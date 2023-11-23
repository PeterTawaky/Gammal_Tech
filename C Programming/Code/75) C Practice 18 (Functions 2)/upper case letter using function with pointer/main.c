#include <stdio.h>

char *capital (char f[]){  //pointer function
    int i;
    for(i=0;f[i];i++)
        if(f[i]>='a' && f[i]<='z')
            f[i]=(f[i]-'a')+'A';
    return &f[0];    // address
}
int main()
{
    char x[20];
    printf("Please, enter your name: ");
    scanf("%s",x);    //لا يمكن ل فانكشن إرجاع ارراي داخل لغة ال c
    printf("%s",capital(x));  //sending the string x to the function capital
    return 0;
}
