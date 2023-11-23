#include <stdio.h>

char *capital (char f[]){
    int i;
    for(i=0;f[i];i++)
        if(f[i]>='a' && f[i]<='z')
            f[i]=(f[i]-'a')+'A';
    return f;
}
int main()
{
    char x[20];
    printf("Please, enter your name: ");
    scanf("%s",x);
    printf("%s",capital(x));
    return 0;
}
