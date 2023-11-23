#include <stdio.h>
#include <stdlib.h>
struct market{    //struct of goods
    char goods[20];
    int price;
    int count;
};
int main()
{
    int budget,n,i,money;
    printf("Please,enter the number of goods: ");
    scanf("%d",&n);   //the number of goods
    struct market x[n];
    for(i=0;i<n;i++)       //loop for initializing the all members of count by 0
        x[i].count=0;
    for(i=0;i<n;i++){      //loop for initializing the all members of structure by the user
        printf("enter the name of the good: ");
        scanf("%s",x[i].goods);
        printf("enter the price of the good: ");
        scanf("%d",&x[i].price);
    }
    printf("Please, enter your budget: ");
    scanf("%d",&budget);
    money=budget;
    for(i=0;i<n;i++){   //loop for counting the number of goods and paying money
        for( ;budget>x[i].price; ){
            budget -= x[i].price ;
            x[i].count++;
        }
    }
    for(i=0;i<n;i++)         //loop for printing data on screen
        printf("%s \t %d \t %d \n",x[i].goods,x[i].price,x[i].count);
    printf("the cost: %d \n",money-budget);
    printf("the remaining budget: %d \n",budget);


    return 0;
}
