#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pointer= fopen("Output.txt","w");
    int x1,x2,i;
    printf("Enter the Start number: ");
    scanf("%d",&x1);
    printf("Enter the number of Empty Blocks: ");
    scanf("%d",&x2);
    for(i=1;i<=x2;i++,x1++)
        fprintf(pointer,"%d\n",x1);
    return 0;
}
