#include <stdio.h>
#include <stdlib.h>

int main()
{// elvariable bn3rfoo mara wa7da bs fl code kloo..momken n3'ir emtoo bs mn3'er mn3rfoo tanii
      int p1=1111,
      p2=2222,
      p3=3333,
      x;
  do{
    printf("please enter the password:  ");
    scanf("%d",&x);
    if(x==p1)
      printf("password is correct");
    else if(x==p2)
      printf("password is correct");
    else if(x==p3)
      printf("password is correct");
    else{
      x=0;
      printf("password is wrong\n");
    }
    }while(x==0);

    return 0;
}
