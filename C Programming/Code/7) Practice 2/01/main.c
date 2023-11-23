#include <stdio.h>
int main(void){
  int n1,n2,i;
  for(i=0;;){
    printf("Please, enter two numbers: \n");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
      printf("%d is greater\n",n1);
    else
      printf("%d is greater\n",n2);
  }
  return 0;
}
