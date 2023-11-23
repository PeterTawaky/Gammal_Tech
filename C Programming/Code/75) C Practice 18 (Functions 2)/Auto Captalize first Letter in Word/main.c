#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *auto_capitalize (char y[]){
        int i;
        if(y[0]>='a' && y[0]<='z')
            y[0]=y[0]-'a'+'A';
        for(i=1;y[i];i++) // unti reaches \0 (end of string)
            if(y[i]>='A' && y[i]<='Z')
                y[i]=y[i]-'A'+'a';
        return y;
    }

    char x[20];
    printf("Please,enter your name in capital letters: ");
    scanf("%s",x);
    printf("%s",auto_capitalize(x));

    return 0;
}
