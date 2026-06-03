// #include <string.h>
// #include <stdio.h>
// int countLetters(char *s, int* count);
// #define MAX_SIZE 1000
// int main(void){
//     char st[MAX_SIZE+1];
//     int alphabet[26]={0};
//     printf("Enter a sentence: ");
//     if(fgets(st,sizeof(st),stdin)!=NULL){
//         char* temp=strchr(st,'\n');
//         if(temp==NULL) {while(getchar()!='\n'){};};
//         if(temp!=NULL) {*temp='\0';};
//     }
//    // printf("%s",st);
//     countLetters(st,alphabet);
//     printf("The frequency that each lower case letter appears is:\n");
//     for(int* i=alphabet; i<alphabet+26; i++){
//         if(*i!=0) printf("%c: %d\n",(char)(*i+'a'),*i);
//     }
//     return 0;
// }
// int countLetters(char *s, int* count){
//     for(char* i=s; *i!='\0'; i++){
//         if(*i<='z' && *i>='a') ( *(count+(int)(*i-'a')) )++;
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// char* lastStringInString(char* s1, char* s2);
// #define MAX_SIZE 1000
// int main(void){
//     char small_st[MAX_SIZE+1], big_st[MAX_SIZE+1];
//     printf("input smaller string:\n");
//     if(fgets(small_st,sizeof(small_st),stdin)!=NULL){
//         char* temp=strchr(small_st,'\n');
//         if(temp!=NULL){*temp='\0';};
//         if(temp==NULL){while(getchar()!='\n'){};};
//     }
//     printf("input bigger string:\n");
//     if(fgets(big_st,sizeof(big_st),stdin)!=NULL){
//         char* temp=strchr(big_st,'\n');
//         if(temp!=NULL){*temp='\0';};
//         if(temp==NULL){while(getchar()!='\n'){};}
//     }
//     printf("%s\n",(lastStringInString(small_st,big_st)));
//     //printf("%s\n%s\n",small_st,big_st);
//     return 0;
// }
// char* lastStringInString(char* s1, char* s2) {
//     if(strlen(s1)>strlen(s1)) return NULL;
//     int mark=1;
//     char* result=NULL;
//     for(int index=0; index<=(int)(strlen(s2)-strlen(s1)); index++){
//         mark=1;
//         for(int scan=0; scan<(int)strlen(s1); scan++){
//             if(s2[index+scan]!=s1[scan]) {mark=0; break;};
//         }
//         if(mark) result=s2+index;
//     }
//     return result;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX_SIZE 1000
// char *preamble(char *str, int n);
// void getString(char*);
// int main(void){
//     char st[MAX_SIZE+1];
//     getString(st);
//     int n; printf("input n:\n"); scanf("%d",&n);
//     char* part_st=preamble(st,n);
//     if(part_st!=NULL) printf("%s\n",part_st);

//     free(part_st);
//     part_st=NULL;
//     return 0;
// }
// char *preamble(char *str, int n) {
//     if(str==NULL) return NULL;
//     char* part_st=(char*)malloc((size_t)(n+1)*sizeof(char));//last one for \0
//     if(part_st==NULL) return NULL;
//     else{
//         for(int i=0;i<n;i++) part_st[i]=str[i];
//         part_st[n]='\0';
//     }
//     return part_st;
// }
// void getString(char* st){
//     printf("input a string:\n");
//     if(fgets(st,sizeof(st),stdin)!=NULL){
//         char* temp=strchr(st,'\n');
//         if(temp==NULL) {while(getchar()!='\n'){};};
//         if(temp!=NULL) {*temp='\0';};
//     }
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdbool.h> 
// #define MAX_SIZE 1000
// void getString(char* st);
// char* deleteSubString(char* source, char* substring);
// int main(void){
//     char source[MAX_SIZE+1],substring[MAX_SIZE+1];
//     printf("input source:\n");
//     getString(source);
//     printf("input substring:\n");
//     getString(substring);
//     char* result=deleteSubString(source,substring);
//     if(result!=NULL){
//         printf("the result is:\n%s\n",result);
//     }
//     free(result);
//     result=NULL;
// }
// char* deleteSubString(char* source, char* substring) {
//     if(strlen(substring)>strlen(source)) return NULL;
//     char* resultSt=(char*)malloc((size_t)(strlen(source)-strlen(substring)+1)*sizeof(char));
//     if(resultSt==NULL) return NULL;
//     *resultSt='\0';
//     int position=0;
//     for(int i=0;i<=(int)(strlen(source)-strlen(substring));i++){
//         int mark=1;
//         for(int scan=0; scan<(int)strlen(substring); scan++){
//             if(source[i+scan]!=substring[scan]) mark=0;
//         }
//         if(mark) {position=i; break;};
//     }
//    // printf("position is:%d\n",position);
//     //if(position==0) return NULL;
//    // strncat(resultSt,source,(size_t)position);
//     //strncat(resultSt,source+position+strlen(substring),strlen(source)-strlen(substring));
//     //add the first part 
//     char* source_index=source;
//     char* result_index=resultSt;
//     for(int scan=0; scan<position; scan++){
//         *result_index=*source_index;
//         result_index++;
//         source_index++;
//     }
//     //add second part
//     source_index=source+position+(int)strlen(substring);
//     result_index=resultSt+position;
//     for(int scan=0+position+(int)strlen(substring); scan<(int)strlen(source); scan++){
//         *result_index=*source_index;
//         result_index++;
//         source_index++;
//     }
//     result_index=NULL; source_index=NULL;
//     resultSt[strlen(source)-strlen(substring)]='\0';
//     return resultSt;
// }
// void getString(char* st){
//     if(fgets(st,MAX_SIZE+1,stdin)!=NULL){
//         char* temp=strchr(st,'\n');
//         if(temp==NULL) {while(getchar()!='\n'){};};
//         if(temp!=NULL) {*temp='\0';};
//     }
// }