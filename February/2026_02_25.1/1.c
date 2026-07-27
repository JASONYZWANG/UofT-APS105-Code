// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// #define SIZE 5
// void print_array(int size, int(*)[size]);
// void transpose(int size, int(*)[size]);
// void reverse(int size, int(*)[size]);
// int main(void){
//     srand((unsigned int)time(NULL));
//     int arr[SIZE][SIZE];
//     for(int i=0;i<SIZE;i++){
//         for(int j=0;j<SIZE;j++){
//             *(*(arr+i)+j)=rand()%10;
//         }
//     }
//     printf("Original 2D array: \n");
//     print_array(SIZE, arr); printf("\n");
    
//     transpose(SIZE,arr);
//     printf("2D array after transpose: \n");
//     print_array(SIZE, arr); printf("\n");   

//     reverse(SIZE,arr);
//     printf("Final 2D array: \n");
//     print_array(SIZE, arr); printf("\n");  
// }
// void print_array(int size, int(*arr)[size]){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             printf("%d  ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// void transpose(int size, int(*arr)[size]){
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size;j++){
//             int temp;
//             temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
// }
// void reverse(int size, int(*arr)[size]){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size/2;j++){
//             int temp;
//             temp=arr[i][j];
//             arr[i][j]=arr[i][size-1-j];
//             arr[i][size-1-j]=temp;
//         }
//     }
// }

// #include <stdio.h>
// #include <string.h>
// int spacesCount(char str[]);
// int main(void) {
//     char str[] = "Welcome to Chapter 10 in Snefru";
//     printf("The number of spaces is %d.\n", spacesCount(str));
//     return 0;
// }
// int spacesCount(char str[]) {
//     int count = 0;
//     for (int ind = 0; str[ind] != '\0'; ind++) {
//         if (str[ind] == ' ') {
//         count++;
//         }
//     }
//     return count;
// }
// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char str[]="Hello, my name is Jason.";
//     char* pstr="world";
//     pstr=str;
//     pstr[0]='h';
//     for(int i=0;i<(int)strlen(pstr);i++){
//         printf("%c",pstr[i]);
//     }
//     printf("\n");
//     for(int i=0;i<(int)strlen(str);i++){
//         printf("%c",str[i]);
//     }
//     printf("\n");
//     printf("Size of str: %d\n",(int)sizeof(str));
//     printf("Size of pstr: %d\n",(int)sizeof(pstr));
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char str[]="Hello World";
//     for(int i=0;i<(int)(strlen(str));i++){
//         printf("%c",str[i]);
//     }
// }
//Output: llo World
// #include <stdio.h>

// int main(void) {

//     char st[10];

//     printf("Enter a string: \n");

//     scanf("%s", st);

//     printf("s is saved as: %s\n", st);

//     scanf("%s", st);

//     printf("s is now saved as: %s\n", st);

//     return 0;

// }

// #include <stdio.h>
// int main(void) {
//     char st[7 + 1];
//     printf("Enter a string: \n");
//     scanf("%s", st);
//     printf("s is saved as: %s\n", st);
//     return 0;
// }
//Input: ABCDEFGHIJKLMN
//Output: 
//s is saved as: ABCDEFGHIJKLMN
// #include <stdio.h>
// int main(void){
//     char st[]="hello world";
//     st[8]='\0';
//     printf("%s\n",st);
//     return 0;
// }

// #include <stdio.h>
// int main(void) {
//   char st[10];
//   printf("Enter a string: \n");
//   scanf("%s", st);
//   printf("s is saved as: %s\n", st);
//   scanf("%s", st);
//   printf("s is now saved as: %s\n", st);
//   return 0;
// }

// #include <stdio.h>
// void getString(char*, int);
// #define MAX_LEN 10
// int main(void){
//     printf("Input your name: (Maximum length is %d charactors): \n",MAX_LEN);
//     char name[MAX_LEN+1];

//     getString(name,MAX_LEN);
//     printf("Your name is: %s\n",name);

//     char left_in_buffer[MAX_LEN+1];
//     scanf("%s",left_in_buffer);
//     printf("The left is: %s\n",left_in_buffer);
// }
// void getString(char* str, int max_length){
//     int index = 0;
//     int c; 
//     while(index < max_length && (c=getchar())!='\n'){
//         *(str + index) = (char)c;
//         index++;
//     }
//     *(str + index) = '\0';
// }

// #include <stdio.h>
// char* getStringSafely(char* s, int n);
// int main(void) {
//   char st[10];
//   printf("Enter string: \n");
//   printf("User entered: %s\n", getStringSafely(st, 7));
//   scanf("%s", st);
//   printf("This is what's left: %s\n", st);
//   return 0;
// }
// char* getStringSafely(char* s, int n) {
//   int charCount = 0;
//   char c;
//   while ((charCount < n - 1) && ((c = getchar()) != '\n')) {
//     s[charCount] = c;
//     charCount++;
//   }
//   s[charCount] = '\0';
//   return s;
// }
#include <stdio.h>
#include <string.h>
int main(void){
}