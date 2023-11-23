#include <stdio.h>
#include <stdlib.h>

int main()
{
    char names[]="peter, tawaky, tantawy";
    char s1[20],s2[20],s3[20],new[40];   //each variable refer to a string
    char label[]="MR.";
    sscanf(names,"%s %s %s",s1,s2,s3);        // to read from a string variable

    s1[0]-=32;  //to make the first letter of string 1 capital
    s2[0]-=32;
    s3[0]-=32;


    sprintf(new,"%s%s %s%s %s%s",label,s1,label,s2,label,s3);
    printf("%s",new);
    return 0;
}
