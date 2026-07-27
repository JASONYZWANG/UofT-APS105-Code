
// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
// // bool compareLines(const char* lineOne, const char* lineTwo) {
// //     if(*lineOne=='\0' && *lineTwo=='\0') return true;//together end
// //     if((*lineOne=='\0' && *lineTwo!='\0') || (*lineOne!='\0' && *lineTwo=='\0')) return false;//not togerhter end
// //     if(*lineOne!=*lineTwo && *lineOne!=' ' && *lineOne!='.' && *lineTwo!=' ' && *lineTwo!='.') return false;//not the same

// //     if(*lineOne==' ' || *lineOne=='.') return compareLines(lineOne+1,lineTwo);
// //     if(*lineTwo=='.' || *lineTwo==' ') return compareLines(lineOne,lineTwo+1);
// //     if(*lineOne!=' ' && *lineOne!='.' && *lineTwo!=' ' && *lineTwo!='.') return compareLines(lineOne+1,lineTwo+1);
// // }
// bool compareLines(const char* lineOne, const char* lineTwo) {
//     // 1. 优先处理跳过逻辑 (Pre-recursion)
//     if (*lineOne == ' ' || *lineOne == '.') 
//         return compareLines(lineOne + 1, lineTwo);
    
//     if (*lineTwo == ' ' || *lineTwo == '.') 
//         return compareLines(lineOne, lineTwo + 1);

//     // 2. 此时指针一定都指着“有效字符”或 '\0'，处理边界
//     if (*lineOne == '\0' && *lineTwo == '\0') return true;
    
//     // 如果走到这里有一个是 '\0'，说明长度不等或有效字符不匹配
//     if (*lineOne == '\0' || *lineTwo == '\0') return false;

//     // 3. 比较当前两个有效字符
//     if (*lineOne != *lineTwo) return false;

//     // 4. 到这里说明当前字符相等，递归进入下一层
//     return compareLines(lineOne + 1, lineTwo + 1);
// }
// int main(void){
//     char st1[100]="Hello everyone";
//     char st2[100]="Hello. everyone";
//     if(compareLines(st1,st2)==true) printf("true\n");
//     else printf("false\n");
// }
// #include <stdio.h>
// int F(int n);
// int main(void){
//     printf("%d\n",F(10));
//     return 0;
// }
// int F(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     int round_result=F(n-1)+F(n-2);
//     return round_result;
// }
// #include <stdio.h>
// int findIndex(char*,char);
// int main(void){
//     char st[100]="hello world!!!";
//     char c='Z';
//     printf("%d\n",findIndex(st,c));
//     return 0;
// }
// int findIndex(char* string,char c){
//     if(*string=='\0') return -1;//not found
//     if(*string==c) return 0;//found
//     int res=findIndex(string+1,c);
//     if(res!=-1) return res+1;
//     else if(res==-1) return -1;
// }
// int findIndex(char *string, char c) {
//     int n = 0;
//     while (*string != c && *string != '\0') {
//         string = string + 1;
//         ++n;
//     }
//     if (*string == '\0')
//         return -1;
//     return n;
// }
// #include <stdio.h>
// #include <string.h>
// void revStr(char *str, int len);
// int main(void){
//     char st[100]="hello world!!";
//     revStr(st,(int)strlen(st));
//     printf("%s\n",st);
// }
// void revStr(char *str, int len){
//     if(len<=0) return;
//     else{
//         char temp=*str;
//         *str=*(str+len-1);
//         *(str+len-1)=temp;

//         revStr(str+1,len-2);
//     }
// }
// #include <stdio.h>
// int findMax(int *arr, int size);
// int main(void){
//     int a[10]={1,2,4,3,-1,2,4,10,2,10};
//     printf("%d\n",findMax(a,(int)(sizeof(a)/sizeof(int))));

// }
// int findMax(int *arr, int size) {
//     // 1. 边界条件：只剩一个元素了
//     if (size == 1) {
//         return arr[0];
//     }

//     // 2. 核心：去问下面的人，后面那一堆数里最大的是谁？
//     int max_of_rest = findMax(arr + 1, size - 1);

//     // 3. 拿到结果后，在本层做个比较（类似于你之前的 +1 或 +0）
//     if (arr[0] > max_of_rest) {
//         return arr[0];      // 我比后面所有的都大，那我就是整队的老大
//     } else {
//         return max_of_rest; // 后面有个更猛的，把它的结果传回上一层
//     }
// }
// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
// int findFirstNegative(int *arr, int size);
// int main(void){
//     int arr[5]={0,4,3,-1,5};
//     printf("%d\n",findFirstNegative(arr,(int)(sizeof(arr)/sizeof(int))));
//     return 0;
// }
// int findFirstNegative(int *arr, int size){
//     if(size==0) return 0;
//     if(*arr<0) return *arr;
//     return findFirstNegative(arr+1,size-1);
// }   
// #include <stdio.h>
// int sumOfOdds(int *arr, int size);
// int main(void){
//     int arr[5]={1,3,5,2,4};
//     printf("%d\n",sumOfOdds(arr,(int)(sizeof(arr)/sizeof(int))));
//     return 0;
// }
// int sumOfOdds(int *arr, int size){
//     if(size==0) return 0;
//     if(arr[0]%2==1) return arr[0]+sumOfOdds(arr+1,size-1);
//     else return sumOfOdds(arr+1,size-1);
// }
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
// int suffixSum(int *arr, int size);
// int main(void){
//     int arr[5]={1,2,3,4,0};

//     printf("%d\n", suffixSum(arr, (int)(sizeof(arr)/sizeof(int))));
    
// }
// int suffixSum(int *arr, int size){
//     if(size==0) return 0;
//     int sum_of_rest=suffixSum(arr+1,size-1);
//     return arr[0]+sum_of_rest;
// }
// void row(int n){
//     if(n==0) return;
//     printf("*");
//     row(n-1);
// }
// void pattern(int n){
//     if(n==1) {printf("*\n");return;};
//     row(n);printf("\n");
//     pattern(n-1);
//     row(n);printf("\n");
// }
// int main(void){
//     pattern(5);
// // }
// int sum(int* arr, int size);
// int main(void){
//     int arr[5]={0,1,0,11,12};
//     printf("%d\n",sum(arr,(int)(sizeof(arr)/sizeof(int))));
//     return 0;
// }
// int sum(int* arr, int size){
//     if(size==0) return 0;//3
//     int sum_of_rest=sum(arr+1,size-1);//1
//     if(arr[0]%2==0) return arr[0]+sum_of_rest;
//     else return 0+sum_of_rest;
// }
// int countEvens(int* arr, int size);
// int main(void){
//     int arr[5]={2,2,2,2,4};
//     printf("%d\n",countEvens(arr,(int)(sizeof(arr)/sizeof(int))));
//     return 0;
// }
// int countEvens(int* arr, int size){
//     // if(size==0) return 0;
//     // int num_in_rest=countEvens(arr+1,size-1);
//     // if(arr[0]%2==0) return num_in_rest+1;
//     // else return num_in_rest+0;
//     if(size==0) return 0;
//     int num_in_rest=countEvens(arr+1,size-1);
//     if(arr[0]%2==0) return num_in_rest+1;
//     else return num_in_rest;
// }
// void printReverse(char* str);
// int main(void){
//     char st[100]="Hello World!!!";
//     printReverse(st);
//     return 0;
// }
// void printReverse(char* st){
//     if(st[0]=='\0') return;
//     printReverse(st+1);
//     printf("%c",st[0]);
// }