#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(5){
        int salary,free_days,inc20,year20,inc10,year10;
        printf("Please,enter your salary: ");
        scanf("%d",&salary);
        printf("Please, enter your free days in year: ");
        scanf("%d",&free_days);
        inc20=(salary*20)/100,inc10=(salary*10)/100;
        year10=inc10*12,year20=inc20*12;
        printf(free_days > 21 ? "the year increase:%d \nthe new salary:%d \n",year10,inc10+salary : "the year increase:%d \nthe new salary:%d \n",year20,salary+inc20);
    }
    return 0;
}
