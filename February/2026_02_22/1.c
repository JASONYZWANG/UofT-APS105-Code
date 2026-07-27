// // #include <stdio.h>
// // #include <time.h>
// // #include <stdlib.h>
// // void find_location(int,int,int**);
// // void Print_matrix(int,int,int**);
// // int main(void){
// //     srand((unsigned int)time(NULL));
// //     int row,colomn;
// //     printf("Input the size of the matrix\n");
// //     printf("Row: "); scanf("%d",&row);
// //     printf("Colomn: "); scanf("%d",&colomn);

// //     //create 2D matrix
// //     int** matrix=(int**)malloc((size_t)(row)*sizeof(int*));
// //     if(matrix==NULL) return -1;
// //     for(int i=0;i<row;i++){
// //         *(matrix+i)=(int*)malloc((size_t)(colomn)*sizeof(int));
// //         if(*(matrix+i)==NULL) return -1;
// //     }
// //     for(int i=0;i<row;i++){
// //         for(int j=0;j<colomn;j++){
// //             matrix[i][j]=rand()%2;
// //         }
// //     }
// //     Print_matrix(row,colomn,matrix);
// //     find_location(row,colomn,matrix);

// //     //free space
// //     for(int i=0;i<row;i++){free(*(matrix+i));*(matrix+i)=NULL;};
// //     free(matrix); matrix=NULL; 
// // }
// // void Print_matrix(int row,int colomn, int** matrix){
// //     for(int i=0;i<row;i++){
// //         for(int j=0;j<colomn;j++){
// //             printf("%d ", matrix[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }
// // void find_location(int row,int colomn, int** matrix){
// //     int counter=0;
// //     for(int i=0;i<row;i++){
// //         for(int j=0;j<=colomn-3;j++){
// //             if(matrix[i][j-1]==0 && matrix[i][j+3]==0 && matrix[i][j]==1 && matrix[i][j+1]==1 && matrix[i][j+2]==1 && j+3<=colomn && j-1>=0){
// //                 printf("(%d,%d)\n",i+1,j+1);
// //                 j=j+3;
// //                 counter++;
// //             }
// //             else if(j-1>=0 && j+3>colomn && matrix[i][j-1]==0 && matrix[i][j]==1 && matrix[i][j+1]==1 && matrix[i][j+2]==1){
// //                 printf("(%d,%d)\n",i+1,j+1);
// //                 counter++;
// //             }
// //             else if(j+3<=colomn && j-1<0 && matrix[i][j]==1 && matrix[i][j+1]==1 && matrix[i][j+2]==1 && matrix[i][j+3]==0){
// //                 printf("(%d,%d)\n",i+1,j+1);
// //                 counter++;
// //             }
// //         }
// //     }
// //     if(counter==0) printf("Do not find\n"); 
// // }
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// #define SIZE 26
// int borderSumAlt(int mat[][26], int n);
// int main(void){
//     srand((unsigned int)time(NULL));
//     int matrix[26][26];
//     for(int i=0;i<SIZE;i++){
//         for(int j=0;j<SIZE;j++){
//             matrix[i][j]=rand()%10+1;
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     int n;
//     printf("input n: ");
//     scanf("%d",&n);
//     printf("border sum is: %d\n",borderSumAlt(matrix,n));
// }
// int borderSumAlt(int mat[][26], int n){
//     int sum=0;
//     for(int colomn=1;colomn<=n-2;colomn++) {
//         sum+=(mat[0][colomn]+mat[n-1][colomn]);
//        // printf("%d %d \n",mat[0][colomn],mat[n-1][colomn]);
//     }
//     for(int row=0;row<=n-1;row++) {
//         sum+=(mat[row][0]+mat[row][n-1]);
//         //printf("%d %d \n",mat[row][0],mat[row][n]);
//     }
//     return sum;
// }
// #include <stdio.h>
// void performAI(double*,double*);
// int main(void){
//     double inData[] = {10, 11, 14, 51, 22, 24};
//     double outData[4];
//     performAI(inData, outData);
//     for(int i=0;i<4;i++) printf("%lf ",outData[i]);
//     printf("\n");
//     return 0;
// }
// // this function uses a one-dimensional input array of size 6, and
// // puts values into the one-dimensional output array of size 4
// void performAI(double *inArray, double *outArray) {
//   // these are the weighting arrays as in the diagram
//   double w1[6][7] = {{0.795279571, 0.565454091, 0.569392801, 0.649519912,
//                       0.311228459, 0.869033219, 0.963890145},
//                      {0.261182548, 0.967901447, 0.015463096, 0.101966965,
//                       0.454071297, 0.396147575, 0.853833996},
//                      {0.976180547, 0.762522649, 0.223067359, 0.120228416,
//                       0.710471648, 0.220771538, 0.052876278},
//                      {0.173285965, 0.795507616, 0.258332188, 0.813302777,
//                       0.528470338, 0.885245811, 0.190564347},
//                      {0.14018923, 0.324797853, 0.012649753, 0.928397252,
//                       0.048519668, 0.321836138, 0.3601SIZEBSIZEB8},
//                      {0.063248883, 0.72395506, 0.606492812, 0.435057638,
//                       0.462896967, 0.12061378, 0.28806367}};
//   double w2[7][4] = {{0.036340161, 0.702081192, 0.406643568, 0.383400727},
//                      {0.786459022, 0.627286192, 0.190417846, 0.259622675},
//                      {0.996272492, 0.115783107, 0.922042574, 0.805576672},
//                      {0.254649714, 0.818737484, 0.23760355, 0.884876231},
//                      {0.587934606, 0.566762923, 0.254228386, 0.735145224},
//                      {0.709219708, 0.815306359, 0.395073347, 0.191438772},
//                      {0.743663242, 0.969784133, 0.055612809, 0.992284824}};
//     double mid[7]={0};
//     for(int colomn=0;colomn<7;colomn++){
//         double result=0;
//         for(int index=0;index<6;index++)result+=(inArray[index]*w1[index][colomn]);
//         mid[colomn]=result;
//     }
//     for(int colomn=0;colomn<4;colomn++){
//         double result=0;
//         for(int index=0;index<7;index++)result+=(mid[index]*w2[index][colomn]);
//         outArray[colomn]=result;
//     }
    
//   // TODO: your code here
// }

// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// #define SIZEA 10
// #define SIZEB SIZEA-2
// void Printf(int row,int col,double(*matrix)[col]);
// void averageImage(double A[SIZEA][SIZEA], double B[SIZEB][SIZEB]);
// int main(void){
//     srand((unsigned int)time(NULL));
//     double A[SIZEA][SIZEA],B[SIZEB][SIZEB];
//     for(int i=0;i<SIZEA;i++){
//         for(int j=0;j<SIZEA;j++){
//             A[i][j]=(double)(rand()%10+1.0);
//         }
//     }
//     averageImage(A,B);
//     Printf(SIZEA,SIZEA,A);
//     printf("\n");
//     Printf(SIZEB,SIZEB,B);
// }
// void averageImage(double A[SIZEA][SIZEA], double B[SIZEB][SIZEB]) {
//     for(int i=1;i<=SIZEA-2;i++){
//         for(int j=1;j<=SIZEA-2;j++){
//             double sum=0;
//             sum=A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i][j-1]+A[i][j]+A[i][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1];
//             double avg=sum/9;
//             B[i-1][j-1]=avg;
//         }
//     }
// }
// void Printf(int row,int col,double(*matrix)[col]){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             printf("%lf ",matrix[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE 10

// void fillArray(int array[SIZE][SIZE]) {
//     int preset[SIZE][SIZE] = {
//         {0,0,0,0,0,1,0,0,0,0},
//         {0,0,0,0,1,1,0,0,0,0},
//         {0,0,0,1,1,1,0,0,0,0},
//         {0,0,0,0,1,0,0,0,0,0},
//         {0,0,0,0,0,0,0,0,2,0},
//         {0,0,2,0,0,0,0,2,2,2},
//         {0,2,2,2,0,0,0,0,2,0},
//         {0,0,2,0,0,0,0,0,0,0},
//         {0,0,0,0,0,0,0,0,0,0},
//         {0,0,0,0,0,0,0,0,0,0}
//     };
//     for(int i = 0; i < SIZE; i++)
//         for(int j = 0; j < SIZE; j++)
//             array[i][j] = preset[i][j];
// }

// bool findCross(int array[SIZE][SIZE], int n, int searchNum, int row, int col) {
//   /* look across one column */
//   bool found = true;
//   int start, end;
//   start = row - n / 2;
//   end = row + n / 2;
//   // first check if size precludes the result
//   if (start >= 0 && end < SIZE) {
//     // now look and see if the right number in a row
//     for (int k = start; k <= end && found; k++)
//       if (array[k][col] != searchNum) found = false;
//   } else
//     found = false;
//   // look across row
//   start = col - n / 2;
//   end = col + n / 2;
//   // first check if size precludes the result
//   if (start >= 0 && end < SIZE) {
//     // now look and see if the right number in a column
//     for (int k = start; k <= end && found; k++)
//       if (array[row][k] != searchNum) found = false;
//   } else
//     found = false;
//   return found;
// }

// int main(void) {
//   int array[SIZE][SIZE];
//   int n;
//   fillArray(array);
//   printf("Enter Cross Size to search (must be odd): ");
//   scanf("%d", &n);
//   for (int row = 0; row < SIZE; row++)
//     for (int col = 0; col < SIZE; col++) {
//       if (findCross(array, n, 1, row, col))
//         printf("Found Cross of Size %d of %d at (%d,%d)\n", n, 1, row, col);
//       if (findCross(array, n, 2, row, col))
//         printf("Found Cross of Size %d of %d at (%d,%d)\n", n, 2, row, col);
//     }
//   return 0;
// }

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void fillArray(int(*)[SIZE]);
bool findCross(int(*array)[SIZE], int n, int searchNum, int row, int col);
int main(void) {
    int array[SIZE][SIZE];
    int n;
    fillArray(array);
    printf("Enter Cross Size to search (must be odd): ");
    scanf("%d", &n);    
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(findCross(array,n,array[i][j],i,j)) printf("Found Cross of Size %d of %d at (%d,%d)\n",n,array[i][j],i,j);
        }
    }
    return 0;
}
void fillArray(int(*array)[SIZE]) {
    int preset[SIZE][SIZE] = {
        {0,0,0,0,0,1,0,0,0,0},
        {0,0,0,0,1,1,0,0,0,0},
        {0,0,0,1,1,1,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,2,0},
        {0,0,2,0,0,0,0,2,2,2},
        {0,2,2,2,0,0,0,0,2,0},
        {0,0,2,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            array[i][j] = preset[i][j];
}
bool findCross(int (*array)[SIZE], int n, int searchNum, int row, int col) {
    if(searchNum!=1 && searchNum!=2) return false;
    int row_start=row-n/2,col_start=col-n/2;
    int row_end=row+n/2, col_end=col+n/2;
    if(row_start<0 || col_start<0 || row_end>SIZE-1 || col_end>SIZE-1) return false;

    for(int r=row_start;r<=row_end;r++){
        if(array[r][col]!=searchNum) return false;
    }
    for(int c=col_start;c<=col_end;c++){
        if(array[row][c]!=searchNum) return false;
    }
    return true;
}