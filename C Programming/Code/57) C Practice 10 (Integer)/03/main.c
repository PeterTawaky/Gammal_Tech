#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[20];
    int i,count=0;
    printf("Please, enter a word: ");
    scanf("%s",x);
    for(i=0;x[i];i++)  //b3d ma elklma t5ls fii endex m5sos m7tot fii \0--efdal 3ed wlma twsal llzero daa w2f el loop
        count++;       // lw ktbt lklma w 7tet b3dha space msh hykml
    printf("%d",count);
    return 0;
}
