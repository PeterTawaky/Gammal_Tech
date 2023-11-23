#include <stdio.h>

int main(void) {
    int i;
  FILE *capital=fopen("capital file.txt","w");
  printf("Please, write in the created file using capital words: \n");
  char c[500];
  while(scanf("%[^\n]",c)){  //1st loop to take the sentence from screen until u click enter
    for(i=0;c[i];i++){      //2nd loop to check letters one by one
        if(c[i]>='A' && c[i]<='Z')
            fprintf(capital,"%c",c[i]+32);  //if capital change to small
        else
            fprintf(capital,"%c",c[i]);     //if small print it directly
    }
  }
  fclose(capital);
  return 0;
}
