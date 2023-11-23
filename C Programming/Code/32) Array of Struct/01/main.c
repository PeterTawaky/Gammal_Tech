#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int devider(){
    printf("===================================================================================================================\n");
    return 0;
}
struct student{
    int degree[3];  // 3 degree for 3 subjects
    char name[10];
};
int main()
{
    struct student x[3];  //3 for thee students
    int i,j;
    for(i=0;i<3;i++){
        printf("%d) \n",i+1);
        printf("Name: ");
        scanf("%s",x[i].name);
        for(j=0;j<3;j++){
            printf("enter the degree: ");
            scanf("%d",&x[i].degree[j]);
        }
    }
    devider();
     for(i=0;i<3;i++){
        printf("%d)Name: %s \n",i+1,x[i].name);
        for(j=0;j<3;j++)
            printf("  the degree: %d",x[i].degree[j]);
        printf("\n");
    }
    return 0;
}
