#include <stdio.h>
#include <string.h>
int fixed (x,y){ //values of x and y changed in this function but values doesn't changed in function main
  int t;
  t=x;
  x=y;
  y=t;
  return 0;
}
int exchange (int *x,int *y){ //the values of x and y changed in the memory
  int t;
  t=*x;
  *x=*y;
  *y=t;
  return 0;
}
int main(){
  int x,y;
  printf("x:");
  scanf("%d",&x);
  printf("y:");
  scanf("%d",&y);
  fixed(x,y);    //call by value-->send values of x and y to function fixed
  printf("x=%d  y=%d         faild to change\n",x,y);
  exchange(&x,&y);    //call by reference-->send the address of variables in memory
  printf("x=%d  y=%d         changed",x,y);

  return 0;
}
