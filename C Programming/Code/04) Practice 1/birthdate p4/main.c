#include <stdio.h>
#include <stdlib.h>

int main()
{// %*c  bt5linii msh m7tag ast5dmha fl memory wfnfs lw2t a2dr ast5dmha
    int day,month,year;
    printf("Please,enter your birthdate: ");
    scanf("%d%*c%d%*c%d",&day,&month,&year);
    printf("%d/%d/%d",day,month,year);

    return 0;
}
