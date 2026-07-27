#include <stdio.h>
#include <string.h>
#include "Myheader.h"
void getSpring(char* st){
    printf("Input a string:\n");
    if(fgets(st,SIZE+1,stdin)!=NULL){
        char* pEndLine=strchr(st,'\n');
        if(pEndLine==NULL){
            while(getchar()!='\n'){};
        }
        if(pEndLine!=NULL){
            *pEndLine='\0';
        }
    }
    printf("What input is:\n%s\n",st);
}