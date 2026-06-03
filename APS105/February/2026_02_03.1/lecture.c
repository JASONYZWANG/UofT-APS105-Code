#include <stdio.h>
void Print(int(*)[4],int);
int main(void){
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    Print(matrix,3);
}
void Print(int(*row)[4],int height){
    for(int i=0;i<height;i++){
        for(int j=0;j<4;j++){
            printf("%d ",*(*(row+i)+j));
        }
        printf("\n");
    }
}
// #include <stdio.h>
// void swap(int*,int*);
// int main(void){
//     int a[6]={2, 5, 7, 8, 9, 12};
//     int* parr=a;
//     for(int i=0; i<(int)sizeof(a)/4/2; swap(parr+i,parr+(int)sizeof(a)/4-i-1),i++){};
//     for(int i=0; i<(int)sizeof(a)/4; printf("%d, ",*(parr+i)),i++);
//     return 0;
// }
// void swap(int* a, int* b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }