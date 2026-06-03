#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char str[]="JASONWANG";
//     printf("%d\n",(int)strlen(str));
//     printf("%d\n",(int)strlen(str+2));
//     return 0;
// }
// //OUTPUT:
// //9
// //7
// #include <stdio.h>
// #include <string.h>
// int fstrlen(char* st){
//     int len=0;
//     for(char* i=st; *i!='\0'; i++) len++;
//     return len;
// }
// int main(void){
//     char st[]="JASONWANG1010";
//     printf("%d\n",fstrlen(st));
// }
// char* strcpy(char *dest, char *src);
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(void) {
//     char name[] = "JASONWANG";
    
//     char* copy_name = (char*)malloc((strlen(name) + 1) * sizeof(char));
//     if (copy_name == NULL) {
//         fprintf(stderr, "Memory allocation failed!\n");
//         return -1;
//     }

//     strcpy(copy_name, name);

//     printf("Copied string is: %s\n", copy_name);
//     free(copy_name);
//     copy_name = NULL;
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// char* fstrcpy(char*,char*);
// int main(void){
//     char name[]="JASONWANG";
//     char* copy_name=(char*)malloc((size_t)(strlen(name)+1)*sizeof(char));
//     printf("%s\n",fstrcpy(copy_name,name));
// }
// char* fstrcpy(char* des,char* src){
//     int i=0;
//     for(; *(src+i)!='\0';i++){
//         des[i]=src[i];
//     }
//     des[i]='\0';
//     return des;
// }
// char* strcat(char *dest, const char *src);
// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char info[20]="Jason "; //the dest array should be as least strlen(dest)+strlen(src)+1
//     char age[]="is 20.";
//     strcat(info,age);
//     printf("%s\n",info);
//     return 0;
// }
//Output: Jason is 20.
// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char info[20]="Jason ";
//     char age[]="is 20.";
//     size_t used_len=strlen(info);
//     size_t safe_len=sizeof(info)-used_len-1;

//     strncat(info,age,2);
//     printf("%s\n",info);
// }
//OUTPUT: Jason is
// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char st1[6]="ABCDE";
//     char st2[10]="ABCDE";
//     if(strcmp(st1,st2)==0) printf("The same\n");
//     else if(strcmp(st1,st2)<0) printf("The first string is smaller\n");
//     else printf("The second string is smaller");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(void) {
//     char s1[40];
//     char s2[40];
//     printf("Enter two strings separated by new line or white space: ");
//     scanf("%s", s1);
//     scanf("%s", s2);
//     if (strcmp(s1, s2) < 0) {
//         printf("'%s' is before '%s' in dictionary!\n", s1, s2);
//     } else if (strcmp(s1, s2) > 0) {
//         printf("'%s' is after '%s' in dictionary!\n", s1, s2);
//     } else if (strcmp(s1, s2) == 0) {
//         printf("'%s' is identical to '%s'!\n", s1, s2);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(void) {
//     char s1[40];
//     char s2[40];
//     int n = 5;
//     printf("Enter two strings separated by new line or white space: ");
//     scanf("%s", s1);
//     scanf("%s", s2);
//     if (strncmp(s1, s2, n) < 0) {
//         printf("'%s' is before '%s' in dictionary!\n", s1, s2);
//     } else if (strncmp(s1, s2, n) > 0) {
//         printf("'%s' is after '%s' in dictionary!\n", s1, s2);
//     } else if (strncmp(s1, s2, n) == 0) {
//         printf("The first %d character in '%s' is identical to '%s'!\n", n, s1
//     ,
//             s2);
//     }
//     return 0;
// }
// char* strchr(const char *s, int c);

// #include <stdio.h>
// #include <string.h>
// int main(void) {
//     char s[] = "Programming";
//     char c = 'm';
//     int dist = strchr(s, c) - s;
//     printf("The first %c is found at index %d in '%s'\n", c, dist, s);
//     return 0;
// }
// //OUTPUT: The first m is found at index 6 in "Programming"
// char* strstr(const char *s1, const char *s2);


// #include <stdio.h>
// #include <string.h>
// int main(void) {
//     char str[] = "Note: Enjoy APS105!";
//     char search[] = "Enjoy";
//     printf("Printing characters after '%s': %s\n", search, strstr(str, search));
//     return 0;
// }
// //OUTPUT: Printing characters after 'Enjoy': Enjoy APS105!
// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char st1[20]="";
//     char st2[]="My name is Jason";
//     strncpy(st1,st2,7);
//     printf("%s\n",st1);
// }
// #include <stdio.h>
// #include <string.h>
// int main(void){
//     char st1[100]="";
//     char st2[100]="";
//     scanf("%s",st1);
//     scanf("%s",st2);
//     printf("St1 is:%s\nSt2 is:%s\n",st1,st2);
// }
// int main(void){
//     char st[10+1];
//     fgets(st,10,stdin);
//     for(char* i=st; *i!='\0'; i++){
//         if(*i=='\n'){*i='\0'; break;}
//     }//Get rid of \n
//     printf("%s\n",st);
//     char temp_c;char leftinbuffer[100]="";
//     int index=0;
//     while(getchar()!='n'){
//         leftinbuffer[index]=temp_c;
//         index++;
//     }
    
//     scanf("%s",leftinbuffer);
//     printf("What's left in buffer: %s\n",leftinbuffer);
//     return 0;
// }
// #define MAX_CHARACTOR 20
// char* getSpring(char*,int);
// int main(void){
//     char st[MAX_CHARACTOR+1];
//     getSpring(st,MAX_CHARACTOR);
//     printf("the string inputed is: \n%s\n",st);
    
// }
// char* getSpring(char* st, int max_len){
//     char temp_c;
//     int index;
//     while((temp_c=(char)getchar())!='\n' && index<max_len){
//         st[index]=temp_c;
//         index++;
//     }
//     st[index]='\0';
//     return st;
// }
// char* getspring(char* st, int max_len){
//     char temp_c; int index;
//     while((temp_c=getchar())!='\n' && index<max_len){
//         st[index]=temp_c;
//         index++;
//     }
//     st[index]='\0';
//     return st;
// }
// int main(void){
//     char st1[20];
//     char st2[]="JASONWANG";
//     strncpy(st1,st2,5);
//     printf("%s",st1);
//     st1[5]='\0';
//     return 0;
// }
// int main(void){
//     char st1[20]="Hi, ";
//     char st2[]="JASONWANG";
//     if(strlen(st2)+strlen(st1)>sizeof(st1)-1) printf("Cannot combine\n");
//     else strcat(st1,st2);
//     printf("%s\n",st1);
//     return 0;
// }
// int main(void){
//     char st1[20]="Hi, ";
//     char st2[]="JASONWANG";
//     int len_copy; printf("input the length to copy in string #2: "); scanf("%d",&len_copy);
//     if((size_t)len_copy>strlen(st2)) {printf("Copy length is not available\n"); return 0;}
//     if((size_t)len_copy+strlen(st1)>sizeof(st1)-1){
//         printf("Cannot combine\n");
//     }else{
//         strncat(st1,st2,(size_t)len_copy);
//     }
//     printf("%s\n",st1);
//     return 0;
// }
int main(void){
    char st1[20]="";
    char st2[]="JASONWANG";
    if(strlen(st2)+strlen(st1)<sizeof(st1)-1) strncat(st1,st2,strlen(st2));
    printf("%s\n",st1);
    return 0;
}