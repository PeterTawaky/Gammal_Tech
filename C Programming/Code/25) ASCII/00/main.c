#include <stdio.h>
#include <stdlib.h>

int main()
{// variable i قابل للزيادة او النقصان
 // 'A' شكل ثابت غير قابل لتغيير قيمته بالزيادة او بالنقصان
    int i;
    for(i='A';i<='Z';i++)
        printf("%c \t %d \n",i,i);

    return 0;
}
