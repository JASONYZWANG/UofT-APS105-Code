// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <time.h>
// // void initial(int*,int);
// // void Count(int*,int,int*,int);
// // int main(void){
// //      srand((unsigned int)time(NULL));
// //     // srand((unsigned int)time(NULL));
// //     // int arr[1000];
// //     // for(int* i=arr; i<arr+1000; i++) *i=rand()%256+0;
// //     // int count[256]={0};
// //     // for(int* i=arr; i<arr+1000; i++) count[*i]++;
// //     // for(int* i=count; i<count+256;i++) printf("%d ",*i);
// //     int arr[1000],count[256]={0};
// //     initial(arr,(int)(sizeof(arr)/sizeof(int)));
// //     Count(arr,(int)(sizeof(arr)/sizeof(int)),count,(int)(sizeof(count)/sizeof(int)));
// //     for(int i=0;i<256;i++) printf("%d ",count[i]);
// //     return 0;
// // }
// // void Count(int* arr, int arr_size, int* count, int count_size){
// //     if(arr_size==0) return;
// //     count[arr[0]]++;
// //     Count(arr+1,arr_size-1,count,count_size);
// // }
// // void initial(int* arr,int size){
// //     if(size==0) return;

// //     arr[0]=rand()%256+0;
// //     //printf("%d ",arr[0]);
// //     initial(arr+1,size-1);
// // }
// // #include <stdio.h>
// // void calculatePascalRowSeven(int pArray[]); 
// // int main(void) {
// //     // row #n has n + 1 elements
// //     int pascalRow[7 + 1] = {1, 0, 0, 0, 0, 0, 0, 0};

// //     calculatePascalRowSeven(pascalRow);

// //     printf("Row 7 is:\n");
// //     for (int i = 0; i <= 7; i++) {printf("%d ", pascalRow[i]);}
// //     printf("\n");
// // }
// // void calculatePascalRowSeven(int* pArray){
// //     int temp[8];
// //     for(int i=0;i<8;i++) t8emp[i]=pArray[i];
// //     for(int round=1;round<8;round++){
// //         for(int index=1; index<8; index++){
// //             pArray[index]=temp[index-1]+temp[index];
// //         }
// //         for(int i=0;i<8;i++) temp[i]=pArray[i];
// //     }
// // }
// // #include <stdio.h>
// // #include <stdbool.h>
// // #include <math.h>
// // const double E = 2.718281828459045;
// // int firstMirrorInE(void);
// // int main(void){
// //     firstMirrorInE();
// //     return 0;
// // }
// // int firstMirrorInE(void) {
// //     const char* e_str = "71281828459045"; // 小数点后的部分
// //     int digit[20];
// //     for(int i = 0; i < 15; i++) {
// //         digit[i] = e_str[i] - '0'; // 将字符转换为整数
// //     }
// //     // for(int i=0; i<15;i++){
// //     //     printf("%d ",digit[i]);
// //     // }
// //     for(int i=0;i<15-1;i++){
// //         for(int j=i+1; j<15-1; j++){
// //             if(digit[i]==digit[j+1] && digit[i+1]==digit[j]){
// //                 printf("%d%d\n",digit[i],digit[i+1]);
// //                 return 0;
// //             }
// //         }
// //     }
// //     return 0;
// // }   
// // #include <stdio.h>
// // #define RANGE 100
// // void print_prime(int*);
// // int main(void){
// //     int arr[RANGE+1];
// //     print_prime(arr);
// //     return 0;
// // }
// // void print_prime(int* arr){
// //     for(int i=1; i<=100; i++){
// //         arr[i]=i;
// //     }
// //     arr[1]=-1;
// //     for(int p=2; p*p<=RANGE; ){
// //         for(int i=2;i*p<=RANGE;i++){
// //             arr[i*p]=-1;
// //         }
// //         for(int i=p+1; i<=RANGE; i++){
// //             if(arr[i]>0) {p=arr[i];break;}
// //         }
// //     }
// //     for(int* i=arr+1; i<arr+101; i++) if(*i>0) printf("%d ",*i);
// //     printf("\n");
// // }
// #include <stdio.h>
// #include <stdbool.h>
// bool arrayInArray(int* a, int* b);
// int main(void){
//     int arr1[8]={6, 8, 7, 6, 1, 7, 4, -1};
//     int arr2[3]={6, 6, -1};
//     printf("%d\n",arrayInArray(arr1,arr2));
// }
// bool arrayInArray(int* a, int* b){
//     int aSize, bSize;
//     for(aSize=0; a[aSize]!=-1; aSize++){};
//     for(bSize=0; b[bSize]!=-1; bSize++){};
//     //printf("%d %d",aSize,bSize);
//     for(int i=0;i<=aSize-bSize;i++){
//         bool mark=true;
//         for(int j=0;j<bSize;j++){
//             if(a[i+j]!=b[j]) mark=false;
//         }
//         if(mark) return true;
//         else continue;
//     }
//     return false;
// }
// #include <stdio.h>
// int second_largest(int*,int);
// int main(void){
//     int arr[]={3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5} ;
//     printf("%d\n",second_largest(arr,(int)(sizeof(arr)/sizeof(int))));
//     return 0;
// }
// int second_largest(int* arr, int size){
//     int largest=-__INT_MAX__;
//     for(int* i=arr; i<arr+size; i++){
//         if(*i>largest) largest=*i;
//     }
//     int second_largest=-__INT_MAX__;
//     for(int* i=arr; i<arr+size; i++){
//         if(*i>second_largest && *i<largest) second_largest=*i;
//     }
//     return second_largest;
// }
// #include <stdio.h>
// int main(void) {
// int first = 1;
// int arr[4] = {5, 10, 15, 20};
// int* p = arr + 1, *q = arr + 3;
// int* s = &first;
// *s = q - p;
// arr[first] = (*arr) + 2;
// *q = *p + 5;
// (*p)++;
// printf("first = %d\n", first);
// for (int i = 0; i < 4; i++) {
// printf("%d, ", *(arr + i));
// }
// return 0;
// }
// #include <stdio.h>
// int main(void) {
// int myArray[5] = {2, 4, 5, 7, 8};
// int another[5] = {0};
// int *p;
// for (p = myArray; p < myArray + 5; p++) {
// if (*p % 2 == 0) {
// another[p - myArray] = *p;
// printf("another[%d] = %d\n", p - myArray, *p);
// }
// }
// return 0;
// }
// #include <stdio.h>
// int *modify(int *a, int *b, int c) {
// if (c % 2 == 1) {
// printf("In the if-statement\n");
// *a = *a * -1;
// *b = 7;
// }
// printf("*a = %d, *b = %d, c = %d\n", *a, *b, c);
// a = b;
// *a = *a + 5;
// c = c + 7;
// return b;
// }
// int main(void) {
// int a = 5;
// int b = 6;
// int c = 3;
// int *p = modify(&a, &b, c);
// printf("a = %d, b = %d, c = %d\n", a, b, c);
// return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 10

// int main(void){
//     int* arr=(int*)malloc((size_t)(SIZE)*sizeof(int));
//     if(arr==NULL) return -1;
//     for(int i=0;i<SIZE;i++) printf("%d ",arr[i]);
//     printf("\n");

//     int* temp=(int*)realloc(arr,(size_t)(SIZE+1)*sizeof(int));
//     if(temp==NULL) return -1;
//     else {arr=temp;temp=NULL;}
//     arr[SIZE]=100;
//     for(int i=0;i<SIZE+1;i++) printf("%d ",arr[i]);
//     printf("\n");

//     free(arr);
//     arr=NULL;
//     return 0;
// }
//03600029145x
// 1. 0 + 6 + 0 + 2 + 1 + 5 = 14
// 2. 14 ⇤ 3 = 42
// 3. 42 + 3 + 0 + 0 + 9 + 4 = 58
// 4. M = 58 % 10 = 8
// 5. As M is not 0, the 12th digit is 10 " 8=2
// #include <stdio.h>
// int barcodeDigit(long long int barcode);
// #define code_size 11
// int main(void){
//     long long int a; printf("intput the code:\n");
//     scanf("%lld",&a);
//     //barcodeDigit(a);
//     printf("%d\n",barcodeDigit(a));
// }
// int barcodeDigit(long long int barcode){
//     int index=code_size-1;
//     int digit[code_size]={0};
//     while(barcode>0){
//         digit[index]=(int)(barcode%10);
//         barcode/=10;
//         index--;
//     }
//     //for(int i=0;i<code_size;i++) printf("%d ", digit[i]);
//     int result=0;
//     for(int i=0;i<code_size;i++){
//         if(i%2==0) result+=digit[i];
//     }
//     result*=3;
//     for(int i=0;i<code_size;i++){
//         if(i%2==1) result+=digit[i];
//     }
//     result=result%10;
//     if(result) return result;
//     else return 0;
// }
// #include <stdbool.h>
// #include <stdio.h>
// #include <string.h>
// bool isPalindrome(char sequence[], int size);
// void getString(char*);
// #define MAX_SIZE 1000
// int main(void){
//     printf("input a string:\n");
//     char arr[MAX_SIZE+1];
//     getString(arr);
//     printf("%d\n",isPalindrome(arr,(int)strlen(arr)));
// }
// bool isPalindrome(char* sequence, int size){
//     for(int i=0;i<(int)(size/2);i++){
//         if(sequence[i]!=sequence[size-1-i]) return false;
//     }
//     return true;
// }
// void getString(char* st){
//     if(fgets(st,MAX_SIZE+1,stdin)!=NULL){
//         char* temp=strchr(st,'\n');
//         if(temp!=NULL) *temp='\0';
//         if(temp==NULL){
//             while(getchar()!='\n'){};
//         }
//     }
// }
// #include <stdio.h>
// void rotate(int,int);
// int power_10(int);
// int main(void){
//     printf("Please enter the digits to be rotated: ");int n; scanf("%d",&n);
//     printf("By how much? "); int times; scanf("%d",&times);
//     rotate(n,times);
// }
// void rotate(int number, int or_times){
//     int digit_number=0,temp=number;
//     while(temp>0){
//         digit_number++;
//         temp/=10;
//     }
//     int times=or_times%digit_number;
//     int second_part=number/power_10(digit_number-times);
//     int first_part=number-second_part*power_10(digit_number-times);
//     if(second_part==0){
//         printf("You rotated your digits anticlockwise %d times to be %d\n",or_times,first_part); 
//     }else{
//         printf("You rotated your digits anticlockwise %d times to be %d%d\n",or_times,first_part,second_part);
//     }
    
// }
// int power_10(int n){
//     int result=1;
//     for(int i=1;i<=n;i++) result*=10;
//     return result;
// }
// #include <stdio.h>
// #include <stdbool.h>
// bool hasSameNumbers(int *a, int *b);
// int main(void){
//     int arr1[]={0,0,0,-1};
//     int arr2[]={0,0,0,0,0,0,0,0,-1};
//     if(hasSameNumbers(arr1,arr2)) printf("true\n");
//     else printf("false\n");
// }
// bool hasSameNumbers(int* a, int* b){
//     for(int* target=a; *target!=-1; target++){
//         bool mark=false;
//         for(int* scan=b; *scan!=-1; scan++){
//             if(*target==*scan) mark=true;
//         }
//         if(mark==false) return false;
//     }
//     return true;
// }
// #include <stdio.h>
// #include <stdbool.h>
// int longestRepeatedLength(int list[], int size);
// int main(void){
//     int arr[]={5, 3, 6, 8, -1, 7, 9, 10};
//     printf("%d\n",longestRepeatedLength(arr,(int)(sizeof(arr)/sizeof(int))));
//     return 0;
// }
// int longestRepeatedLength(int* list, int size){
//     int longest_length=-__INT_MAX__;
//     int target_index=0;
//     for(int round=0; round<size; round++){
//         int repeaded_length=1; //when the round start, repeated length is already 1.
//         for(int scan=round; scan<size-1; scan++){
//             if(list[scan]==list[scan+1]) repeaded_length++;
//             else break;
//         }
//         if(repeaded_length>longest_length) {longest_length=repeaded_length;target_index=round;};
//     }
//     if(longest_length<2) return 0;
//     return target_index;
// }
// #include <stdio.h>
// int sortTemp(int temp[], int size);

// int main(void) {
//     int temp[] = {2,3,4,5,7,6,4,3,5,11,2,2,5,6};
//     printf("\nThe lowest temperature is %d\n", sortTemp(temp, (int)(sizeof(temp)/sizeof(int))));
//     return 0;
// }
// // 0 0 0 0 2 1 0 0 0 0 2 2
// // 4 4 5 10 10 11 11
// // The lowest temperature is 4
// int sortTemp(int temp[], int size) {
//     // int count[12]={0};
//     // for(int* i=temp; i<temp+size; i++) count[*i]++;
//     // int* target=count;
//     // for(; *target==0 && target<count+12; target++){};
//     // return (int)(target-count);
//     int count[12]={0};
//     for(int* i=temp; i<temp+size; i++) count[*i]++;
//     for(int* i=count; i<count+12; i++){
//         if(*i!=0) {return (int)(i-count);break;};
//     }
//     return -1;
// }
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdio.h>
// #define SIZE 1000
// bool initSectionInArray(int rowStart, int rowEnd, int colStart, int colEnd, int(*)[SIZE], int value);

// int main(void) {
//     printf("Enter x1, x2, y1, y2, v\n");

//     int rowStart, rowEnd, colStart, colEnd, value;
//     scanf("%d%d%d%d%d", &rowStart, &rowEnd, &colStart, &colEnd, &value);
//     int arr[SIZE][SIZE]={0};
//     if(initSectionInArray(rowStart,rowEnd,colStart,colEnd,arr,value)) printf("Success!\n");
//     else printf("Failure - something wrong with input indices\n");
//     // for(int i=0;i<SIZE; i++){
//     //     for(int j=0; j<SIZE; j++){
//     //         printf("%d ",arr[i][j]);
//     //     }
//     //     printf("\n");
//     // }
//     return 0;

// }
// bool initSectionInArray(int rowStart, int rowEnd, int colStart, int colEnd, int(*arr)[SIZE], int value){
//     if(rowEnd>SIZE-1 || rowStart<0 || colEnd>SIZE-1 || colStart<0) return false;
//     if(rowEnd<rowStart || colEnd<colStart) return false;
//     else {
//         for(int(*i)[SIZE]=arr+rowStart; i<=arr+rowEnd; i++){
//             for(int* j=*i+colStart; j<=*i+colEnd; j++){
//                 *j=value;
//             }
//         }
//     }
//     return true;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int borderSum(int(*mat)[26],int n);
// #define SIZE 26
// int main(void){
//     srand((unsigned int)time(NULL));
//     int arr[SIZE][SIZE];
//     for(int i=0; i<SIZE; i++){
//         for(int j=0; j<SIZE; j++){
//             arr[i][j]=rand()%10+0;
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int n;
//     printf("input n:\n"); scanf("%d",&n);
//     printf("result is: %d\n", borderSum(arr,n));
// }
// int borderSum(int mat[][26], int n) {
//     if(n<1) return 0;
//     else if (n==1) return mat[0][0];
//     else if(n>26) return 0;
//     int result=0;
//     for(int col=0; col<n; col++) result+=(mat[0][col]+mat[n-1][col]);
//     for(int row=1; row<n-1; row++) result+=(mat[row][0]+mat[row][n-1]);
//     return result;
// }

// #include <stdio.h>
// void performAI(double *inArray, double *outArray);
// int main(void){
//     double input[6]={10, 11, 14, 51, 22, 24};
//     double output[4];
    
//     printf("intput:\n");
//     for(int i=0;i<(int)(sizeof(input)/sizeof(double));i++){printf("%.2lf",input[i]);};
//     performAI(input,output);
//     printf("\noutput:\n");
//     for(int i=0;i<(int)(sizeof(output)/sizeof(double));i++){printf("%.2lf ",output[i]);};
//     printf("\n");
//     return 0;
// }

// // this function uses a one-dimensional input array of size 6, and
// // puts values into the one-dimensional output array of size 4
// void performAI(double *inArray, double *outArray) {
//     // these are the weighting arrays as in the diagram
//     double w1[6][7] = {{0.795279571, 0.565454091, 0.569392801, 0.649519912,
//                         0.311228459, 0.869033219, 0.963890145},
//                         {0.261182548, 0.967901447, 0.015463096, 0.101966965,
//                         0.454071297, 0.396147575, 0.853833996},
//                         {0.976180547, 0.762522649, 0.223067359, 0.120228416,
//                         0.710471648, 0.220771538, 0.052876278},
//                         {0.173285965, 0.795507616, 0.258332188, 0.813302777,
//                         0.528470338, 0.885245811, 0.190564347},
//                         {0.14018923, 0.324797853, 0.012649753, 0.928397252,
//                         0.048519668, 0.321836138, 0.360198988},
//                         {0.063248883, 0.72395506, 0.606492812, 0.435057638,
//                         0.462896967, 0.12061378, 0.28806367}};
//     double result[7];
//     for(int col=0; col<7; col++){
//         double temp_count=0.0;
//         for(int i=0; i<6; i++){
//             temp_count+=(inArray[i]*w1[i][col]);
//         }
//         result[col]=temp_count;
//     }
//     //printf("\nresult:\n");for(int i=0;i<6;i++) {printf("%.2lf ",result[i]);};
//     double w2[7][4] = {{0.036340161, 0.702081192, 0.406643568, 0.383400727},
//                         {0.786459022, 0.627286192, 0.190417846, 0.259622675},
//                         {0.996272492, 0.115783107, 0.922042574, 0.805576672},
//                         {0.254649714, 0.818737484, 0.23760355, 0.884876231},
//                         {0.587934606, 0.566762923, 0.254228386, 0.735145224},
//                         {0.709219708, 0.815306359, 0.395073347, 0.191438772},
//                         {0.743663242, 0.969784133, 0.055612809, 0.992284824}};
//     for(int col=0; col<4; col++){
//         double temp_sum=0.0;
//         for(int i=0; i<7; i++){
//             temp_sum+=(result[i]*w2[i][col]);
//         }
//         outArray[col]=temp_sum;
//     }
   
//     // TODO: your code here

// }
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// void averageImage(double(*)[100],double(*)[98]);
// int main(void){
//     double image[100][100];
//     double result[100-2][100-2];
//     printf("image:\n");
//     for(int i=0;i<100;i++){
//         for(int j=0;j<100;j++){
//             image[i][j]=(rand()%10+0)*1.0;
//             printf("%.0lf",image[i][j]);
//         }
//         printf("\n");
//     }
//     averageImage(image,result);
//     printf("\n\nresult:\n");
//     for(int i=0;i<98;i++){
//         for(int j=0;j<98; j++) {printf("%.0lf",result[i][j]);};
//         printf("\n");
//     }
//     return 0;
// }
// void averageImage(double A[100][100], double B[98][98]) {
//     for(int i=1; i<100-1; i++){
//         for(int j=1; j<100-1; j++){
//             double sum=A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i][j-1]+A[i][j]+A[i][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1];
//             B[i-1][j-1]=sum/9;
//         }
//     }
//     // Your Code Here
// }

// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 10
// bool findCross(int array[SIZE][SIZE], int n, int searchNum, int row, int col);
// void fillArray(int array[SIZE][SIZE]);

// int main(void) {
//     int array[SIZE][SIZE];
//     int n;
//     fillArray(array);
//     printf("Enter Cross Size to search (must be odd): ");
//     scanf("%d", &n);
//     for(int i=(int)(n/2); i<SIZE-(int)(n/2); i++){
//         for(int j=(int)(n/2); j<SIZE-(int)(n/2); j++){
//             if(array[i][j]!=0 && findCross(array,n,array[i][j],i,j)==true){
//                 printf("Found Cross of Size %d of %d at (%d,%d)\n",n,array[i][j],i,j);
//             }else continue;
//         }
//     }
//     return 0;
// }
// bool findCross(int array[SIZE][SIZE], int n, int searchNum, int row, int col) {
//     for(int row_scan=row-(int)(n/2); row_scan<=row+(int)(n/2); row_scan++){
//         if(array[row_scan][col]!=searchNum) return false;
//     }
//     for(int col_scan=col-(int)(n/2); col_scan<=col+(int)(n/2); col_scan++){
//         if(array[row][col_scan]!=searchNum) return false;
//     }
//     return true;
// }
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
//     for(int i = 0; i < SIZE; i++){
//         for(int j = 0; j < SIZE; j++){
//                     array[i][j] = preset[i][j];
//         }
//     }            
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// char* lastStringInString(char* s1, char* s2);
// #define MAX_SIZE 1000
// void getstring(char*);
// int main(void){
//     char st1[MAX_SIZE+1];
//     char st2[MAX_SIZE+1];
//     printf("input two string:\n");
//     getstring(st1);
//     getstring(st2);
//     char* target_index=lastStringInString(st1,st2);
//     if(target_index!=NULL) printf("%d\n",(int)(target_index-st1));
//     else printf("null\n");
//     return 0;
// }
// char* lastStringInString(char* s1, char* s2) {
//     for(int index=(int)(strlen(s1)-strlen(s2)); index>=0; index--){
//         int mark=1;
//         for(int scan=0; scan<(int)strlen(s2); scan++){
//             if(s1[index+scan]!=s2[scan]) mark=0;
//         }
//         if(mark==1) return s1+index;
//     }
//     return NULL;
//     // Write your function here

// }
// void getstring(char* st){   
//     if(fgets(st,MAX_SIZE+1,stdin)!=NULL){
//         char* temp=strchr(st,'\n');
//         if(temp==NULL){
//             while(getchar()!='\n'){};
//         }
//         if(temp!=NULL) *temp='\0';
//     }
//     return;
// }
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdbool.h>
// bool checkPlagiarism(char *code1, char *code2);
// int main(void) {
//     char c1[] =
//         "int main(void) {\n int x = 10; \n int z = x + 5; \n return 0; \n}\n                      ssf ";
//     char c2[] =
//         "int main(void) {\n int x=10; \n\n int z=x +5; \n\n\n return 0; \n}\n     ssf\n";
//     printf("%d\n", checkPlagiarism(c1, c2));
//     return 0;
// }
// bool checkPlagiarism(char *code1, char *code2){
//     char* index1=code1;
//     char* index2=code2;
//     for(;true;){
//         if(*index1==' '||*index1=='\n'){
//             while(*index1==' ' || *index1=='\n'){
//                 index1++;
//             }
//         }
//         if(*index2==' '||*index2=='\n'){
//             while(*index2==' ' || *index2=='\n'){
//                 index2++;
//             }
//         }
//         if((*index1=='\0' || *index2=='\0') && *index1!=*index2){
//             return false;
//         }
//         if(*index1=='\0' && *index2=='\0'){
//             return true;
//         }
//         if(*index1!=*index2){
//             return false;
//         }
//         index1++;
//         index2++;
//     }
//     return false;
// }
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// #define height 100
// #define width 10
// int main(void){
//     int** matrix=(int**)malloc((size_t)(height)*(sizeof(int*)));
//     if(matrix==NULL) return -1;
//     for(int** i=matrix; i<matrix+height; i++){
//         *i=(int*)malloc((size_t)(width)*(sizeof(int)));
//         if(*i==NULL) return -1;
//     }
//     printf("malloc success\n");
//     for(int i=0;i<height;i++){
//         for(int j=0;j<width;j++){
//             matrix[i][j]=rand()%100+1;
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }

//     for(int** i=matrix; i<matrix+height; i++){
//         free(*i);
//         *i=NULL;
//     }
//     free(matrix); matrix=NULL;
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #define max_size 1000
// int main(void){
//     char st[max_size+1];
//     printf("input ")
//     if(fgets(st,max_size+1,stdin)!=NULL){
//         char* temp=strchr(st,'\n');
//         if(temp!=NULL){
//             *temp='\0';
//         }
//         if(temp==NULL)[
//             while(getchar()!='\n'){};
//         ]
//     }
//     printf
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #define maxlength 1000
// void getString(char*);
// int main(void){
//     char st[maxlength];
//     printf("input the string\n");
//     getString(st);
//     printf("inputed string is :\n%s\n",st);
//     return 0;
// }
// void getString(char* string){
//     int i=0;
//     char temp;
//     while((temp=getchar())!='\n' && i<maxlength){
//         string[i]=temp;
//         i++;
//     }
//     string[i]='\0';
//     return;
// }
// #include <stdio.h>
// int main(void){
//     int arr[]={1,3,5,2,1,7};
//     int first=*arr;
//     int size=(int)(sizeof(arr)/sizeof(int));
//     for(int i=0; i<size-1; i++){
//         arr[i]=arr[i+1];
//     }
//     arr[size-1]=first;
//     for(int i=0;i<size;i++) printf("%d ",arr[i]);
//     printf("\n");
//     return 0;
// }
#include <stdio.h>
#define SIZE 3
int max_budget_length(int* price, int size, int budget){
    int max_length=-__INT_MAX__;
    for(int index=0; index<size; index++){
        int round_total=0;
        int len=0;
        while(round_total<=budget && len+index<size){
            round_total+=price[index+len];
            len++;
        }
        if(len>max_length) max_length=len;

    }
    return max_length;
}
int main(void){
    int price[SIZE]={6,7,8};
    int budget=4;
    printf("maxmum length of the budget is:\n%d\n", max_budget_length(price,SIZE,budget));
}