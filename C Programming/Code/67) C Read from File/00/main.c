#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p = fopen("zrebw.c","r");    //to open the file zerbw with extension c
    FILE *f = fopen("gammal.cpp","r"); //to open the file gammal with extension c++
    char x[20];
    fscanf(p,"%s",x);                  //to
    printf("%s\n",x);
    fscanf(f,"%s",x);
    printf("%s\n",x);
    return 0;
}
