#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int devider(){
    printf("===================================================================================================================\n");
    return 0;
}
struct student{
    char name[10],number[15],N[10],n[10],g[5];
    int age;
};
int main(){
    struct student data[3];   //array of struct
    int i;        //one dimension-->one loop
    char N[10]="Name",n[10]="Number",g[5]="Age";
    for(i=0;i<3;i=i+1){
        printf("%d) \n",i+1);
        printf("Name: ");
        scanf("%s",data[i].name);
        printf("Number: ");
        scanf("%s",data[i].number);
        printf("age: ");
        scanf("%d",&data[i].age);
    }
    devider();
    printf("  %s    %s      %s\n",N,g,n);
    for(i=0;i<3;i++)
        printf("%d)%s    %d    %s  \n",i+1,data[i].name,data[i].age,data[i].number);
    return 0;
}
