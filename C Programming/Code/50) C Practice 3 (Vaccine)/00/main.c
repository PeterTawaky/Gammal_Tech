#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary;
    int x,y,z;
    while(5){
        printf("Enter the salary: ");
        scanf("%f",&salary);
        printf("number of students in x: ");
        scanf("%d",&x);
        printf("number of students in y: ");
        scanf("%d",&y);
        printf("number of students in z: ");
        scanf("%d",&z);
        printf(x*200+y*400+z*600<=salary ? "enough \n" : "not enough \n");
    }
    return 0;
}
