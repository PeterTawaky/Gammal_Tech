#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>


void *fun1(char *v){
    printf("%s\n",v);
    return NULL;
}

void *fun2 (char *v){
  printf("%s\n",v);
  return NULL;
}


int main()
{
    char name[10],fname[10];
    printf("Please, enter your name: ");
    scanf("%s",name);
    printf("Please, enter your family name: ");
    scanf("%s",&fname[0]);
    pthread_t th;
    pthread_create(&th,NULL,fun1(name),NULL);
    pthread_create(&th,NULL,fun2(fname),NULL);
    pthread_join(th,NULL);
    exit(0);
}
