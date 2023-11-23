#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[3][3][10];  //3 groups 3 students in each group their names not more than 10 characters total no.of students = 3*3=9
    int i,j,k=1;
    for(i=0;i<3;i++)
        for(j=1;j<=3;j++,k++){
            printf("Name student %d: ",k);
            scanf("%s",x[i][j]);
        }
    for(i=0,k=1;i<3;i++){
        for(j=1;j<=3;j++,k++)
            printf("%d: %s \t",k,x[i][j]);
        printf("\n");

    }
    return 0;
}
