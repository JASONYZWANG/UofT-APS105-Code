#include <stdio.h>
#include <string.h>
int numOccurances(char* large, char* small);
int main(void){
    char st1[]="isumpoiissisisis";
    char st2[]="is";
    printf("%d\n",numOccurances(st1, st2));
}
int numOccurances(char* large, char* small){
    if(strlen(large)<strlen(small)) return 0;
    for(int i=0; i<(int)strlen(small); i++){
        if(*(large+i)!=small[i]) {
            return numOccurances(large+1, small)+0;
        }
    }
    return numOccurances(large+strlen(small), small)+1;
}