#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char s[7];
    enum{one=1,two,three,four,five};
    printf("Please, enter the name of the number: ");
    scanf("%s",s);
    for(i=0;s[i];i++){
        if(s[i]>='A' && s[i]<='Z')   //capital letter
            s[i]+=32;
    }
    printf("%s\n",s);
    if(strcmp(s,"one")==0)
        printf("1");
    else if(strcmp(s,"two")==0)
        printf("2");
    else if(strcmp(s,"three")==0)
        printf("3");
    else if(strcmp(s,"four")==0)
        printf("4");
    else if(strcmp(s,"five")==0)
        printf("5");
    return 0;
}
