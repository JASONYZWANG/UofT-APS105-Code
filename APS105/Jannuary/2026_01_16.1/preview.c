// #include <stdio.h>
// int main(){
//     int i=0;
//     while(i<=10){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;

// }
// #include <stdio.h>
// int main(void){
//     int a=1,sum=0;
//     while(a>=0){
//         scanf("%d",&a);
//         sum+=a;
//     }
//     printf("%d\n",sum);
// }

// #include <stdio.h>
// int main(void){
//   int sum = 0;
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   while(num >= 0){
//     sum += num;
//     scanf("%d", &num);
//   }
//   printf("The sum is %d\n", sum);
//   return 0;
// }
// #include <stdio.h>
// int main(void){
//     int i=1;
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<=10);
// }
// #include <stdio.h>
// int main(void){
//     int n=0;
//     do{
//         printf("please input a number: \n");
//         scanf("%d",&n);
//     }while(n<1 || n>10);
//     printf("%d\n",n);
//     return 0;

// }
// #include <stdio.h>

    // for(int i=1;i<=10;i++){
    //     printf("%d\n",i);
    // }
    // int i=1;
    // for(;i;i++){
    //     printf("%d\n",i);
    // }
    // return 0;
    

// int main(void) {
//     for(int i=1;((i*i)<=200)&&(i<=50);printf("%d ",i*i),i++){}
//     return 0;
// }

// #include <stdio.h>
// #include <math.h> 

// int main(void) {
//   for (int line = 1; line <= 3; line += 1) {  // loop over lines
//     for (int star = 1; star <= line;
//          star += 1) {  // loop over stars in a single line
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }
#include <stdio.h>
int main(void){
    const int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}