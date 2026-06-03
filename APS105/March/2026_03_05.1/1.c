#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define length 100
#define number_of_string 10
int main(void){
    //Create each elevator
    char** st=(char**)malloc((size_t)(number_of_string)*sizeof(char*));
    if(st==NULL){
        printf("Apply space error\n");
        return -1;
    }
    //Create each floor
    for(int i=0; i<number_of_string; i++){
        *(st+i)=(char*)malloc((size_t)(length)*sizeof(char));
        if(*(st+i)==NULL) {printf("Apply space error in %dth string\n",i);return -1;};
    }
    for(int i=0; i<number_of_string; i++){
        printf("%dth string is: %s\n", i, *(st+i));
    }
    //free space
    for(int i=0; i<number_of_string; i++){
        free(*(st+i));
        *(st+i)=NULL;
    }
    free(st);
    st=NULL;
    return 0;
}