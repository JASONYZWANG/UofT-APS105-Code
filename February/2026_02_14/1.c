#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand((unsigned int)time(NULL));
    printf("Size of the array: ");
    int size; scanf("%d",&size);
    //create array block
    int* array=(int*)malloc((size_t)size*sizeof(int));
    if(array==NULL) return -1;
    for(int i=0;i<size;i++) array[i]=rand()%100+1;
    for(int* i=array; i<array+size; printf("%d ",*i),i++);
    printf("\n");

    printf("add how many element: ");
    int add_size; scanf("%d",&add_size);
    //expand array block
    int* temp=(int*)realloc(array,(size_t)(size+add_size)*sizeof(int));
    if(temp==NULL){
        printf("Fail");
        return -1;
    }
    else{
        array=temp;
        temp=NULL;
    }
    for(int i=size;i<size+add_size;i++) array[i]=rand()%100+1;
    for(int* i=array;i<array+size+add_size;printf("%d ",*i),i++);

    printf("\n");
    free(array);
    array=NULL;
}