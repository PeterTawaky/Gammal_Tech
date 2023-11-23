#include <stdio.h>
#include <string.h>
int main(){
  int x,y,t;
  printf("x: ");
  scanf("%d",&x);
  printf("y: ");
  scanf("%d",&y);
  t=x,x=y,y=t;
  printf("x=%d  y=%d",x,y);
// brnameg ltbdeel kiam el variables


  return 0;
}
