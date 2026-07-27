#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void initialize_matrix(int,int,int**);
void print_matrix(int,int,int**);

int main(void){
    int num_row,num_col;
    printf("Input the size of the matrix\n");
    printf("Number of Row: ");
    scanf("%d",&num_row);
    printf("Number of Colomns: ");
    scanf("%d",&num_col);
    int** matrix=(int**)malloc((size_t)num_row*sizeof(int*));
    if(matrix==NULL) {printf("error in creating matrix\n"); return -1;}
    else{
        for(int i=0;i<num_row;i++){
            *(matrix+i)=(int*)malloc((size_t)num_col*sizeof(int));
            if(*(matrix+i)==NULL) {printf("error in creating %dth row\n",i); return -1;};
        }
    }
    initialize_matrix(num_row,num_col,matrix);
    print_matrix(num_row,num_col,matrix);
   
    return 0;
}
void initialize_matrix(int row, int col, int** matrix){
    srand((unsigned int)time(NULL));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrix[i][j]=rand()%201+(-100);
        }
    }
}
void print_matrix(int row, int col, int** matrix){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
}

