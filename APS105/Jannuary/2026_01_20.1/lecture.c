// #include <stdio.h>
// int main(void){   
//     int a,b;
//     scanf("%d%d",&a,&b);
//     if(b==0){
//         printf("math error\n");
//         return 0;
//     }
//     else if(b!=0 && a/b<10){
//         printf("a/b is less than 10\n");
//     }else printf("a/b is no less than 10\n");
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main(void){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     if((a>=b && b>=c) || (a>=c && c>=b)){
//         printf("%d is the max\n",a);
//     }
//     else if((b>=a && a>=c) || (b>=c && c>=a)){
//         printf("%d is the max\n",b);
//     }
//     else if((c>=a && a>=b) || (c>=b && b>=a)){
//         printf("%d is the max\n",c);
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int a=1,sum=0;
    while(a){
        sum++;
        printf("%d ",sum);

    }
    return 0;
    
}