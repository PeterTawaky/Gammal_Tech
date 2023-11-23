#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
        char word[20],word_pass[]="peter";
        int numbers,numbers_pass=192001;
    for(;5;){
        printf("Please, enter the word pass: ");
        scanf("%s",word);
        if(strcmp(word,word_pass)==0){
            for(;5;){
                printf("Please, enter the numbers pass: ");
                scanf("%d",&numbers);
                if(numbers==numbers_pass){
                    printf("Password is Correct\n");
                    return 0;
                }
                else
                    printf("Your 2nd pass is not correct\n");
            }
        }
        else
            printf("Your 1st pass is not correct\n");

    }

    return 0;
}
