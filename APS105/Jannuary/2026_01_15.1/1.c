// #include <stdio.h>
// #include <stdbool.h>
// int main(void){
//     int p,q,r;
//     printf("Enter three integers: \n");
//     scanf("%d%d%d",&p,&q,&r);
//     if((q<=p && p<=r)||(r<=p && p<=q)){
//         printf("%d",p);
//     }
//     else if((p<=q && q<=r)||(r<=q && q<=p)){
//         printf("%d",q);
//     }
//     else if((p<=r && r<=q)||(q<=r && r<=p)){
//         printf("%d",r);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <stdbool.h>
// int main(void){
//     char p,q,r;
//     printf("Enter three characters: \n");
//     scanf("%c %c %c",&p,&q,&r);

//     if((q<=p && p<=r)||(r<=p && p<=q)){
//         printf("%c",p);
//     }
//     else if((p<=q && q<=r)||(r<=q && q<=p)){
//         printf("%c",q);
//     }
//     else if((p<=r && r<=q)||(q<=r && r<=p)){
//         printf("%c",r);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <stdbool.h>
// int main(void){
//     int a=10,b=0;
//     if(a){
//         printf("True\n");
//     }
//     if(!b){
//         printf("False\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main(void){
   // int i=0;
    for(int i=0;i<=10;i++){
        printf("%d\n",i);
        if(i>4){
            break;

        }
    }
    return 0;

}