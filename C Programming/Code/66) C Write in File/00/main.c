#include <stdio.h>

int main(void) {
  FILE *f= fopen("Greeting.txt","w");
  FILE *i=fopen("i.txt","w");    //FILES
  fprintf(f,"hello peter \n");
  fprintf(f,"hello peter \n");
  fprintf(f,"hello peter \n");
  fprintf(f,"hello peter \n");
  fprintf(f,"hello peter \n");

  fprintf(i,"*\n\n"
            "*\n"
            "*\n"
            "*\n"
            "*\n"
            "*\n"
            "*\n"
            "***");
  return 0;
}
