#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define gammal_home main
#define gammal_num int  //used for replacing any word in the program y another wanted word
#define gammal_text char
#define gammal_loop for
#define gammal_cond if
#define gammal_show printf
#define gammal_read scanf
#define mix strcat
#define copy strcpy
#define gammal_r return 0
gammal_num sum;  //global variable it's garbadge =0
gammal_num gammal_home(){
    gammal_text name1st[10],name2nd[]="ayman",fullname[15],space=' ';
    gammal_num n1,n2;
    gammal_show("Please, enter your 1st name: ");
    gammal_read("%s",name1st);
    mix(&space,name2nd);    //& lma nigii nst5dm character lazn n7ot and
    mix(name1st,&space);    //&
    copy(fullname,name1st);
    gammal_show("Please, enter two numbers: \n");
    gammal_read("%d%d",&n1,&n2);
    gammal_loop(n1;n1<=n2;n1++){
        gammal_show("%d\n",n1);
        sum+=n1;
    }
    gammal_show("%d\n",sum);
    gammal_show("welcome %s",fullname);


    gammal_r;
}
