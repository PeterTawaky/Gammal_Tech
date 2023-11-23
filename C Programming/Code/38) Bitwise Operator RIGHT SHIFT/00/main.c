#include <stdio.h>
int devider (){
    printf("\t\t========================================================================================\n");
    return 0;
}
int main()
{ //كأننا بنقسم علي 2 ومضاعفاتها
  do{
    int n1,n2;
    printf("Please, enter two numbers: \n");
    scanf("%d%d",&n1,&n2);
    printf("you want to know the value of %d / (2)^%d \n",n1,n2);
    printf("******\n"
           "* %d  *\n"
           "******\n" ,n1>>n2);
    devider ();
  }while(5<6);
  return 0;
}

