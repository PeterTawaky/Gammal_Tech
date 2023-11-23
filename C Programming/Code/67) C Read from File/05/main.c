#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[30],eof[30];
    FILE *ptr;
    ptr=fopen("Gammal Tech","r");
    fscanf(ptr,"%s",x);
    fscanf(ptr,"%[^EOF]",eof);
    printf("%s\n",x);
    printf("%s\n",eof);    //minf3sh te2raa nfs lklaam mn nfs el file aktr mn maraa
    return 0;
}
