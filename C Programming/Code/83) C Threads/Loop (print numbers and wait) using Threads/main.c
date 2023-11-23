#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>



    void *fun(void *v){
        int i,j;
        for(i=0;i<100;i++){
            for(j=1;j<=5;j++)
                printf("%d\n",j);
            sleep(2);
        }
        return NULL;
    }


int main()
{
    pthread_t tawaky;
    pthread_create(&tawaky,NULL,fun,NULL);
    pthread_join(tawaky,NULL);
    exit(0);


    return 0;
}
