// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char st1[10],st2[10];
//     scanf("%s",st1);
//     scanf("%s",st2);
//     while(getchar()!='\n'){};
//     printf("st1 is: \n%s\n",st1);
//     printf("st2 is: \n%s\n",st2);
//     return 0;
// // }
// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char st[10+1];
    
//     fgets(st,sizeof(st),stdin);
//     for(char* i=st; *i!='\0'; i++){
//         if(*i=='\n') {
//             *i='\0';
//             break;
//         }
//     }
    
//     printf("st is:\n%s\n",st);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main(void){
//     char st[11]; // 10 + 1
    
//     if (fgets(st, sizeof(st), stdin) != NULL) {
//         // 检查字符串里有没有换行符
//         char *p = strchr(st, '\n'); 
        
//         if (p != NULL) {
//             // 情况 A: 找到了换行符，说明输入没超限，换成结束符即可
//             *p = '\0';
//         } else {
//             // 情况 B: 没找到换行符，说明输入太长或者刚好填满缓冲区但丢了回车
//             // 此时缓冲区里才有残留，需要清理
//             int c;
//             while ((c = getchar()) != '\n');
//         }
//     }
    
//     printf("st is:\n%s\n", st);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #define SIZE 10
// int main(void){
//     char st[SIZE+1];
//     if(fgets(st,sizeof(st),stdin)!=NULL){
//         char* p=strchr(st,'\n');
//         if(p!=NULL){//find \n in string
//             *p='\0';
//         }
//         if(p==NULL){//not find \n in string
//             while(getchar()!='\n'){};
//         }
//     }
//     printf("st is: \n%s\n",st);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #define SIZE 100
// int main(void){
//     char st[SIZE+1];
//     if(fgets(st,sizeof(st),stdin)!=NULL){
//         char* p=strchr(st,'\n');
//         if(p!=NULL){
//             *p='\0';
//         }
//         if(p==NULL){
//             while(getchar()!='\n'){};
//         }
//     }
// }
#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(void){
    char st[SIZE+1];
    if(fgets(st,sizeof(st),stdin)!=NULL){
        char* p=strchr(st,'\n');
        if(p!=NULL){
            *p='\0';
        }
        if(p==NULL){
            while(getchar()!='\n'){};
        }
    }
    printf("st is: \n%s\n",st);
     return 0;
}