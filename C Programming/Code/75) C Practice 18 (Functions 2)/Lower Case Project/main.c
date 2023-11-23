#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *lower_case (char y[]){
        int i;
        for(i=0;y[i];i++) // unti reaches \0 (end of string)
            if(y[i]>='A' && y[i]<='Z')
                y[i]=y[i]-'A'+'a';
        return y;
    }

    char x[20];
    printf("Please,enter your name in capital letters: ");
    scanf("%s",x);
    printf("%s",lower_case(x));

    return 0;
}
