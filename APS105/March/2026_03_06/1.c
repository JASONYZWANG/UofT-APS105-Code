

// #include <stdio.h>
// int gcd(int a, int b);
// int main(void) {
//     int gcdAnswer = gcd(20, 8);
//     printf("gcd(20, 8) = %d\n", gcdAnswer);
//     return 0;
// }
// int gcd(int a, int b) {
//     if (a == b) {
//         return a;
//     } else if (a > b) {
//         return gcd(b, a - b);
//     } else {
//         return gcd(b, a);
//     }
// }
// //Output:
// //gcd(20, 8) = 4
// #include <stdio.h>
// int F(int);
// int main(void){
//     int n; printf("Input a number:\n"); scanf("%d",&n);
//     printf("Result is: %d\n", F(n));
// }
// int F(int n){
//     if(n==1) return 1;
//     else return F(n-1)*n;
// }
// #include <stdio.h>
// void Print(int);
// int main(void){
//     int n; printf("Input a number:\n"); scanf("%d",&n);
//     Print(n);
//     return 0;
// }
// void Print(int n){
//     if(n==1) {
//         printf("*\n");
//         return;
//     }
//     else{
//         printf("*");
//         Print(n-1);
//     }
// 
// #include <stdio.h>
// void printRow(int n);
// int main(void) {
//   int stars;
//   printf("Enter number of stars:");
//   scanf("%d", &stars);
//   printRow(stars);
//   return 0;
// }
// void printRow(int n) {
//   if (n == 1) {
//     printf("*\n");
//   } else {
//     printRow(n - 1);
//     printf("*");
//   }
// }
// #include <stdio.h>
// void Print_Row(int);
// void Print_Tran(int);
// int main(void){
//     Print_Tran(5);
// }
// void Print_Row(int n){
//     if(n==1){
//         printf("*\n");
//         return;
//     }
//     else{
//         printf("*");
//         Print_Row(n-1);
//     }
// }
// void Print_Tran(int n){
//     if(n>0){
//         Print_Row(n);
//         Print_Tran(n-1);
//     }
// }
// #include <stdio.h>
// void Print_Row(int);
// void Print_Tran(int);
// int main(void){
//     Print_Tran(5);
// }
// void Print_Row(int n){
//     if(n==1){
//         printf("*\n");
//         return;
//     }
//     else{
//         printf("*");
//         Print_Row(n-1);
//     }
// }
// void Print_Tran(int n){
//     if(n==1) Print_Row(1);
//     if(n>1){
//         Print_Row(n);
//         Print_Tran(n-1);
//         Print_Row(n);
//     }
// }
// // *****
// // ****
// // ***
// // **
// // *
// // **
// // ***
// // ****
// // *****
// void printPattern(int n) {
//     if (n > 0) {
//         printPattern(n - 1);
//         printRow(n);
//         printPattern(n - 1);
//     }
// }