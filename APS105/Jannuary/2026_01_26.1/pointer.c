// #include <stdio.h>
// int* compare(int*, int*);
// int main(void){
//     int n,m;scanf("%d%d",&n,&m);
//     printf("the bigger one is %d\n",*compare(&n,&m));
// }
// int* compare(int* a,int* b){
//     int* temp;
//     if(*a>=*b) temp=a;
//     else temp=b;
//     return temp;
// }
// #include <stdio.h>
// int main(void){
//     int* a=NULL;
//     printf("%d\n",*a); 
//     //WRONG: null pointer cannot be dereferenced.
// }
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13
// #include <stdio.h>
// int main() {
//   int i = 0;
//   {
//     int x = 5;
//     printf("Inside compound statement: x = %d.\n", x);
//   }
//   //  Causes compile-time error as x is undefined
//   printf("Outside compound statement: x = %d.\n", x);
//   return 0;
// }
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// #include <stdio.h>
// int i = 0;
// void func();
// int main(void) {
//   printf("In main: Global variable i = %d.\n", i);
//   func();
//   printf("In main after calling func: Global variable i = %d.\n", i);
//   return 0;
// }
// void func() {
//   printf("In func: Global variable i = %d.\n", i);
//   i = 5;
// }
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13
// #include <stdio.h>
// int main(void) {
//   int i = 1;
//   printf("Outer i = %d.\n", i);
//   {
//     int i = 2;
//     printf("Inner i = %d.\n", i);
//   }
//   printf("Outer i = %d.\n", i);
//   return 0;
// }
// #include 