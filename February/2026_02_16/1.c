#include <stdio.h>
#include <stdlib.h>
void Create_Arr(int**,int**,int**,int*,int*);
void Sort(int*,int);
int main(void){
    int *arr1,*arr2,*combine_arr,size1,size2;
    Create_Arr(&arr1,&arr2,&combine_arr,&size1,&size2);
    Sort(combine_arr,size1+size2);
    for(int* i=combine_arr;i<combine_arr+size1+size2;printf("%d ",*(i++)));
    free(arr1);
    free(arr2);
    free(combine_arr);
    arr1=NULL; arr2=NULL; combine_arr=NULL;
}
void Create_Arr(int** parr1,int** parr2,int** pcombine_arr,int* psize1,int* psize2){
    printf("Please enter the size of array number 1: ");
    scanf("%d",psize1);
    int* temp1=(int*)malloc((size_t)(*psize1)*sizeof(int));
    if(temp1!=NULL) {*parr1=temp1; temp1=NULL;}
    else {printf("Create Arr1 error\n"); return;}
    for(int i=0;i<*psize1;i++) scanf("%d",(*parr1)+i);

    printf("Please enter the size of array number 2: ");
    scanf("%d",psize2);
    int* temp2=(int*)malloc((size_t)(*psize2)*sizeof(int));
    if(temp2!=NULL) {*parr2=temp2; temp2=NULL;}
    else {printf("Create Arr2 error\n"); return;}
    for(int i=0;i<*psize2;i++) scanf("%d",(*parr2)+i);

    int* temp3=(int*)malloc((size_t)(*psize1+*psize2)*sizeof(int));
    if(temp3!=NULL) {*pcombine_arr=temp3; temp3=NULL;}
    else {printf("Create combined array error\n"); return;}
    
    for(int i=0;i<*psize1;i++) (*pcombine_arr)[i]=(*parr1)[i];
    for(int j=0;j<*psize2;j++) (*pcombine_arr)[j+(*psize1)]=(*parr2)[j];
}
void Sort(int* array,int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(array[i]>array[j]) {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
