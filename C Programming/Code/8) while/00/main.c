#include <stdio.h>
#include <stdlib.h>

int main()
{//sum=sum +x;    (sum +=x;)
    int sum=0,x=5;
    while(x!=0){
        printf("Please, enter the price of item: ");
        scanf("%d",&x);
        sum=sum+x;
    }
    printf("Total cost= %d",sum);
    return 0;
}
/*
 int x,sum=0;
  do{
    printf("Please, enter the price of the item: ");
    scanf("%d",&x);
    sum +=x;

  }while(x!=0);
  printf("Total= %d",sum);
  */
