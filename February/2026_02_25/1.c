#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initialize_matrix(int, int***);
void print_matrix(int, int**);
void matrix_product(int,int**,int**);
void free_space(int,int***);
int main(void){
    printf("Input the size of the matrix: ");
    int size; scanf("%d",&size);

    //Create and initialize the original matrix
    int** matrix;
    initialize_matrix(size,&matrix);
    srand((unsigned int)time(NULL));
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            matrix[i][j]=rand()%31-15;
        }
    }
    printf("The original matrix: \n");
    print_matrix(size,matrix);
    printf("\n");
    printf("How many powers? ");
    int power_times; scanf("%d",&power_times);
    printf("\n");

    //Create the result matrix, result matrix = original matrix, at first
    int** result_matrix;
    initialize_matrix(size,&result_matrix);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            result_matrix[i][j]=matrix[i][j];
        }
    }

    //print power the matrix
    if(power_times==1) {
        printf("Matrix^1= \n");
        print_matrix(size,matrix);
        printf("\n");
    }
    else{
        printf("Matrix^1= \n");
        print_matrix(size,matrix);
        printf("\n");
        for(int i=1;i<=power_times-1;i++){
            matrix_product(size, matrix, result_matrix);
            printf("Matrix^%d= \n",i+1);
            print_matrix(size,result_matrix);
            printf("\n");
        }
    }
    free_space(size,&matrix);
    free_space(size,&result_matrix);
}
void print_matrix(int size, int** matrix){
    for(int i=0;i<size;i++){
        if(i==0){
            printf("[");
            for(int j=0;j<size;j++){printf("%d   ",matrix[i][j]);}
        }
        else if(i==size-1){
            for(int j=0;j<size;j++){
                if(j!=size-1) printf("%d   ",matrix[i][j]);
                else printf("%d",matrix[i][j]);
            }
            printf("]");
        }
        else{
            printf(" ");
            for(int j=0;j<size;j++){
                printf("%d   ",matrix[i][j]);
            } 
        }
        printf("\n");
    }
}
void initialize_matrix(int size, int*** pmatrix){
    *pmatrix=(int**)malloc((size_t)(size)*sizeof(int*));
    if(*pmatrix==NULL) {printf("Error in creating matrix\n"); return; }
    else{
        for(int i=0;i<size;i++){
            *(*pmatrix+i)=(int*)malloc((size_t)(size)*sizeof(int));
            if(*(*pmatrix+i)==NULL) {printf("Error in creating %dth row\n",i+1); return; };
        }
    }
}
void matrix_product(int size, int** matrix, int** Result){
    int** temp_matrix=(int**)malloc((size_t)size*sizeof(int*));
    if(temp_matrix==NULL) {printf("Error in creating temporary matrix\n"); return; }
    else{
        for(int i=0;i<size;i++){
            *(temp_matrix+i)=(int*)malloc((size_t)size*sizeof(int));
            if(*(temp_matrix+i)==NULL) {printf("Error in creating temporary matrix %dth row\n",i); return;};
        }
    }
    for(int index_row=0; index_row<size; index_row++){
        for(int index_col=0; index_col<size; index_col++){
            int round_result=0;
            for(int i=0;i<size;i++){
                round_result+=(Result[index_row][i]*matrix[i][index_col]);
            }
            temp_matrix[index_row][index_col]=round_result;
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            Result[i][j]=temp_matrix[i][j];
        }
    }
    for(int i=0;i<size;i++){
        free(*(temp_matrix+i));
        *(temp_matrix+i)=NULL;
    }
    free(temp_matrix);
    temp_matrix=NULL;
}
void free_space(int size, int*** pmatrix){
    for(int i=0;i<size;i++){
        free(*(*pmatrix+i));
        *(*pmatrix+i)=NULL;
    }
    free(*pmatrix);
    *pmatrix=NULL;
}
