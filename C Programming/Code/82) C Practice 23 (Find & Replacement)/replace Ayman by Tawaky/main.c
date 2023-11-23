#include <stdio.h>
#include <stdlib.h>
#include <string.h>   //to use string compare

int main()
{
    FILE *f1=fopen("Ayman.txt","r");   //open file which is already previously created to read from it
    FILE *f2=fopen("Tawaky.txt","w");  //create a new file to write in it

    //variables declaration & Initialization
    char correct_word[10],wrong_word[10],read[20],c;
    printf("Please, enter the wrong word: ");
    scanf("%s",&wrong_word[0]);
    printf("Please, enter the correct word: ");
    scanf("%s",correct_word);


    //Taking a clone from file 1 to file 2
    while(fscanf(f1,"%s",read) != EOF){
        if(strcmp(read,wrong_word)==0)
            fprintf(f2,"%s ",&correct_word[0]);
        else
            fprintf(f2,"%s ",read);
    }

    //closing files to change it's case from read to write and vice versa
    fclose(f1);  //closing file Ayman
    fclose(f2);  //closing file Tawaky


    //now let's open the files again
    f1=fopen("Ayman.txt","w");  //all data in file will be deleted and it will be a new file
    f2=fopen("Tawaky.txt","r");


    //get the new edit to file 1 (Ayman)
    while(fscanf(f2,"%c",&c)!= EOF)
        fprintf(f1,"%c",c);

    fclose(f1);
    fclose(f2);
    remove("Tawaky.txt");  //to remove the file tawaky we created


    return 0;
}
