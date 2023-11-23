#include <stdio.h>
#include <stdlib.h>

int main()
{

  int x=5;
  for(;5;){
  printf("Please, enter the day number: ");
  scanf("%d",&x);
    if(x==1)
      printf("sat\n");
    else if(x==2)
      printf("sunday\n");
    else if(x==3)
      printf("monday\n");
    else if(x==4)
      printf("tuesday\n");
    else if(x==5)
      printf("wednesday\n");
    else if(x==6)
      printf("thursday\n");
    else if(x==7)
      printf("friday\n");
    else
      printf("it's not a days of week\n");
  }
    return 0;
}
