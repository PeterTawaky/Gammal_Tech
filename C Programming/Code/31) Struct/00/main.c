#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct peter{                             //minf3sh fl struct ndii value l2ii variable hnaa, bndii value gwa el main() function
    char name1[20],name2[10],name3[10],number[15],faculty[3];  //minf3sh n7ot ay flexible array (array 3'er mo3rf el size)
    int age;
};
int main(){
    struct peter data;
    char x[]="hti";
    printf("enter your first name: ");
    scanf("%s",data.name2);
    strcpy(data.name1,data.name2);     //string copy  //the data in data.name2 copied in variable data.name1
    printf("enter you last name: ");
    scanf("%s",data.name3);
    printf("enter your age: ");
    scanf("%d",&data.age);
    strcat(data.name1,data.name3);  //string concatenation         //all name data went to data.name1
    printf("enter your phone number: ");
    scanf("%s",data.number);
    printf("enter your faculty: ");
    scanf("%s",data.faculty);
    if( strcmp ( data.faculty , x )== 0 )  //string compare
        printf("Hello eng.%s!",data.name1);
    else
        printf("Hello %s!",data.name1);
    printf("\nyour Phone number is:%s",data.number);
    printf("\nyou are %d years old",data.age);



    return 0;
}
