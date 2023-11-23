#include <stdio.h>
#include <stdlib.h>

int main()
{
    char names[4][20]; // 4 names each name not more than 20 character
    int i;
    for(i=0;i<4;i++){
        printf("enter the name: ");
        scanf("%s",names[i]);
        printf("\n");
    }
    for(i=0;i<4;i++){
        printf("%d)%s\n",i+1,names[i]);
    }
    return 0;
}
