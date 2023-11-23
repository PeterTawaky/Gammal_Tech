#include <stdio.h>
int main(){
  int i=0,y=0,z=0,n=2;
  for(;i<5;i++){
    for(;y<=z;y++){
      printf("*");
    }
    printf("\n");
    z=z+n;
    n++;
  }

  return 0;
}
