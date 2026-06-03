// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <string.h>
// char* removeStrDuplicates(char* str, char* search) {
//     int len=(int)strlen(str);
//     int l_targ=(int)strlen(search);

//     while(true){
//         char* targ=strstr(str, search);
//         if(targ==NULL){//cannot find anymore
//             break;
//         }
//         else{//can find the search
//             int index=(int)(targ-str);
//             for(int i=index; i<=len-l_targ; i++){
//                 str[i]=str[i+l_targ];
//             }
            
//         }
//     }
//     return str;
// }
// int main(void){
//     char targ[]="is";
//     char arr[]="This is an apple";
//     printf("%s\n", removeStrDuplicates(arr, targ));
// }
// #include <stdio.h>
// #include <string.h>
// void merge(char* merged, char* st1, char* st2){
//     if(*st1=='\0' && *st2=='\0'){
//         *merged='\0';
//         return;
//     }
//     if(*st1=='\0' && *st2!='\0'){//st1 ends firsly
//         strcpy(merged, st2);
//         return;
//     }
//     if(*st2=='\0' && *st1!='\0'){//st2 ends firsly
//         strcpy(merged, st1);
//         return;
//     }
//     if(*st1>*st2){
//         *merged=*st2;
//         merge(merged+1, st1, st2+1);
//     }
//     if(*st2>=*st1){
//         *merged=*st1;
//         merge(merged+1, st1+1, st2);
//     }
// }
// int main(void){
//     char lineOne[5] = "ALMZ";
//     char lineTwo[5] = "CPQZ";
//     char merged[100];
//     merge(merged, lineOne, lineTwo);
//     printf("%s\n", merged);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node {
//     int data;
//     struct node* next;
// } Node;
// typedef struct linkedList {
//     Node* head;
//     Node* tail;
// } LinkedList;
// Node* new(int value){
//     Node* newnode=(Node*)malloc(sizeof(Node));
//     if(newnode!=NULL){
//         newnode->next=NULL;
//         newnode->data=value;
//         return newnode;
//     }
//     return NULL;
// }
// void printlist(LinkedList* list){
//     if(list->head==NULL){
//         printf("NA\n");
//         return;
//     }
//     Node* curr=list->head;
//     while(curr!=NULL){
//         printf("%d ", curr->data);
//         curr=curr->next;
//     }
//     printf("\n");
//     return ;
// }
// bool isCycle(LinkedList* list){
//     if(list->head==NULL){
//         //if the linked list is empty
//         return false;
//     }
//     Node* curr=list->head;
//     while(curr!=NULL && curr->next!=list->head){
//         curr=curr->next;
//     }
//     if(curr==NULL){
//         return false;
//     }
//     else if(curr->next==list->head){
//         return true;
//     }
// }
// void Fix_Order(LinkedList* list){
//     if(list->head==NULL){
//         //if the linked list is empty
//         return;
//     }
//     if(list->head->next==NULL){
//         //linked list only has one node
//         return ;
//     }
//     //normal case;
//     Node dummy={__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* curr=dummy.next;
//     while(curr!=NULL){
//         if(curr->next!=NULL && curr->next->data < curr->data){//find the expectional order sequence
//             Node* ori=curr->next->next;
//             prev->next=curr->next;
//             prev->next->next=curr;
//             curr->next=ori;
//             break;
//         }
//         prev=curr;
//         curr=curr->next;
//     }
//     //update the head;
//     list->head=dummy.next;
    

// }
// void removing(LinkedList *list, int value){
//     if(list->head==NULL){
//         //if linked list is empty
//         return;
//     }
//     Node dummy={__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* curr=dummy.next;
//     while(curr!=NULL){
//         if(curr->data==value){
//             //free this node;
//             Node* curr_next=curr->next;
//             free(curr);
//             //fix the original linked list
//             prev->next=curr_next;
//             curr=curr_next;
//         }else{
//             prev=curr;
//             curr=curr->next;
//         }
        
//     }
//     //fix the tail
//     if(dummy.next==NULL){
//         list->tail=NULL;
//     }else{
//         Node* temp=dummy.next;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         list->tail=temp;
//         temp=NULL;
//     }
    
//     //update the head
//     list->head=dummy.next;
// }
// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=new(3);
//     list.tail=list.head;
//     // list.head->next=new(1);
    
//     // list.head->next->next=new(4);
//     // list.head->next->next->next=new(5);
//     //list.tail=list.head->next->next->next;
//     printlist(&list);
//     removing(&list, 3);
    
//    //Fix_Order(&list);
//     printlist(&list);
// }
// #include <stdio.h>
// #include <string.h>
// char* removeSpecialChars(char* str){
//     if(*str=='\0'){
//         //if the string is empty
//         return str;
//     }
//     int index=0;
//     while(str[index]!='\0'){
//         if(str[index]<'a' || str[index]>'z'){
//             for(int i=index; i<index+(int)strlen(str+index); i++){
//                 str[i]=str[i+1];
//             }
//         }else{
//             index++;
//         }
//     }
//     return str;
// }
// int main(void) {
//     char str[30] = "apple)@&*&";
//     printf("str with special characters: %s\n", removeSpecialChars(str));
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int countExisting(char* l, char* s){
//     if(*s=='\0'){
//         //if the target is empty
//         return 0;
//     }
//     if(*l=='\0'){
//         return 0;
//     }   
//     size_t ls=strlen(s);
//     int find=strncmp(l, s, ls);
//     if(find!=0){
//         //cannot find at current location 
//         return 0+countExisting(l+1, s);
//     }
//     //find at current location 
//     return 1+countExisting(l+ls, s);
// }
// int main(void){
//     char l[]="This is s \"This is\"";
//     char s[]="is";
//     printf("%d\n", countExisting(l,s));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node {
//     int data;
//     struct node *next;
// } Node;
// typedef struct linkedList {
//     Node *head;
// } LinkedList;
// Node* new(int value){
//     Node* new=(Node*)malloc(sizeof(Node));
//     if(new!=NULL){
//         new->next=NULL;
//         new->data=value;
//         return new;
//     }
//     return NULL;
// }
// void printlist(LinkedList* list){
//     if(list->head==NULL){
//         printf("NA\n");
//     }
//     Node* curr=list->head;
//     while(curr!=NULL){
//         printf("%d ", curr->data);
//         curr=curr->next;
//     }
//     printf("\n");return;
// }
// void mergeLinkedList(LinkedList* list, LinkedList* seq){
//     if(list->head==NULL && seq->head!=NULL){
//         //if list is empty 
//         list->head=seq->head;
//         return;
//     }
//     if(list->head==NULL && seq->head==NULL){
//         //both are empty
//         return;
//     }
//     if(list->head!=NULL && seq->head==NULL){
//         //if sequence is empty
//         return ;
//     }
//     //normal case
//     Node dummy={-__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* curr=dummy.next;
//     //find the tail of the seq
//     Node* seq_tail=seq->head;
//     while(seq_tail->next!=NULL) seq_tail=seq_tail->next;

//     while(curr!=NULL){
//         if(curr->data >= seq_tail->data && prev->data <= seq->head->data){
//             //find the target location to insert
//             prev->next=seq->head;
//             seq->head=NULL;
//             seq_tail->next=curr;
//             break;
//         }else{
//             prev=curr;
//             curr=curr->next;
//         }
//     }
//     //if the seq should be inserted in the end 
//     if(curr==NULL){
//         prev->next=seq->head;
//         seq->head=NULL;
//     }
//     //update the list head
//     list->head=dummy.next;
// }
// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=new(1);
//     list.head->next=new(1);
//     list.head->next->next=new(2);
//     list.head->next->next->next=new(5);

//     LinkedList seq;
//     seq.head=NULL;
//     // seq.head=new(7);
//     // seq.head->next=new(8);
//     // seq.head->next->next=new(9);

//     printlist(&list);
//     printlist(&seq);
//     mergeLinkedList(&list, &seq);
//     printf("\n");
//     printlist(&list);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int diagonalsSum(int n, int square[][n]){
//     int result=0;
//     for(int i=0; i<n; i++){
//         result+=(square[i][i]+square[i][n-1-i]);
//     }
//     if(n%2==0){
//         return result;
//     }
//     return result-square[n/2][n/2];
// }
// int main(void){
//     int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     printf("%d\n", diagonalsSum(3, matrix));
//     return 0;
// // }
// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
// char *lastStringInString(char *s1, char *s2){
//     if(*s2=='\0' || *s1=='\0'){
//         return NULL;
//     }

//     int l1=(int)strlen(s1);
//     int l2=(int)strlen(s2);
//     for(int i=l1-l2; i>=0; i--){
//         bool found=true;
//         for(int j=0; j<l2; j++){
//             if(s1[i+j]!=s2[j]){
//                 found=false;
//             }
//         }
//         if(found==true){
//             return s1+i;
//         }
//     }
//     return NULL;
// }
// int main(void){
//     char s1[]="This is an apple";
//     char s2[]="apple";
//     printf("%s\n", lastStringInString(s1, s2));
// }
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <stdbool.h>
// bool compareLines(const char *lineOne, const char *lineTwo){
//     //skip the useless charator
//     while(*lineOne==' ' || *lineOne=='.'){
//         lineOne+=1;
//     }
//     while(*lineTwo==' ' || *lineTwo=='.'){
//         lineTwo+=1;
//     }
//     //if both end together
//     if(*lineOne=='\0' && *lineTwo=='\0'){
//         return true;
//     }
//     //if both end separately
//     if(*lineOne=='\0' && *lineTwo!='\0'){
//         return false;
//     }
//     if(*lineOne!='\0' && *lineTwo=='\0'){
//         return false;
//     }
//     //if the charactors are different
//     if(*lineOne != *lineTwo){
//         return false;
//     }
//     return compareLines(lineOne+1, lineTwo+1);
// }
// int main(void){
//     char lineOne[] = " . . . .    . . . ................Hello.everyone.";
//     char lineTwo[] = "............           .................Hello ..every.one.";
//     printf("%d \n", compareLines(lineOne, lineTwo));
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct paper {
//     char *lastName;
//     struct paper *next;
// } Paper;
// typedef struct linkedList {
//     Paper *head;
// } LinkedList;

// void sortPapers(LinkedList *originalPile, LinkedList sortedPile[]){
//     if(originalPile->head==NULL){
//         //if the original linked list is empty
//         printf("\n");
//         return;
//     }
//     Paper dummy={NULL, originalPile->head};
//     Paper* prev=&dummy;
//     Paper* curr=dummy.next;
//     while(curr!=NULL){
//         Paper* curr_next=curr->next;
//         int index=(int)(*(curr->lastName)-'A');
//         //insert process
//         if((sortedPile[index]).head==NULL){
//             //if the pile is empty
//             curr->next=NULL;
//             (sortedPile[index]).head=curr;
//         }else{
//             curr->next=(sortedPile[index]).head;
//             (sortedPile[index]).head=curr;
//         }
//         //update the curr and prev 
//         prev->next=curr_next;
//         curr=curr_next;
//     }
//     //update the list
//     originalPile->head=dummy.next;
//     //print
//     for(int i=0; i<26; i++){
//         if((sortedPile[i]).head!=NULL){
//             printf("%c: ", 'A'+i);
//             Paper* temp=(sortedPile[i]).head;
//             while(temp!=NULL){
//                 printf("%s ", temp->lastName);
//                 temp=temp->next;
//             }
//             printf("\n");
//         }

//     }
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node {
//     int data;
//     struct node *next;
// } Node;
// typedef struct linkedList {
//     Node *head;
// } LinkedList;
// Node* new(int value){
//     Node* newnode=(Node*)malloc(sizeof(Node));
//     if(newnode!=NULL){
//         newnode->data=value;
//         newnode->next=NULL;
//         return newnode;
//     }
//     return NULL;
// }
// void printlist(LinkedList* list){
//     if(list->head==NULL){
//         printf("NA\n");
//         return ;
//     }
//     Node* curr=list->head;
//     while(curr!=NULL){
//         printf("%d ", curr->data);
//         curr=curr->next;
//     }
//     printf("\n");return;
// }
// void reorder(LinkedList *list){
//     if(list->head==NULL){
//         //if list is empty
//         return;
//     }
//     Node dummy={__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* curr=dummy.next;
//     bool meetRealNum=false;
//     while(curr!=NULL){
//         if(curr->data!=0){
//             meetRealNum=true;
//         }
//         Node* curr_next=curr->next;
//         if(curr->data==0 && meetRealNum==true){
//             //put the curr in the front of the linked list
//             curr->next=dummy.next;
//             dummy.next=curr;
//             //update prev and curr
//             prev->next=curr_next;
//             curr=curr_next;
//         }else{
//             prev=curr;
//             curr=curr->next;
//         }   
//     }
//     //update the head
//     list->head=dummy.next;
// }
// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=new(0);
//     list.head->next=new(0);
//     list.head->next->next=new(15);
//     list.head->next->next->next=new(0);
//     list.head->next->next->next->next=new(13);
//     list.head->next->next->next->next->next=new(0);
//     printlist(&list);
//     reorder(&list);
//     printlist(&list);
// }
// #include <stdio.h>
// #include <string.h>
// void convert(char* input, char* output, int len){
//     *output='\0';
//     int index=0;
//     int j=0;
//     int lineLen=0;
//     while(input[index]!='\0'){
        
//         //skip the space
//         while(input[index]==' '){
//             index++;
//         }
//         //find the start and end index of a single word 
//         int start, end;
//         if(input[index]!=' ' && input[index]!='\n' ){
//             start=index;
//             end=index;
//             while(input[end]!='\0' && input[end]!=' '){
//                 end++;
//             }
//             end--;
//         }
//         index=end+1; 

//         //if this is the first word in output
//         int wordlen=end-start+1;
//         if(*output=='\0'){
//             for(int i=0; i<wordlen; i++){
//                 output[j++]=input[i+start];
//             }
//             lineLen=wordlen;
//         }
//         //if current line is enough to put the word 
//         else if(wordlen+1+wordlen <= len){
//             output[j++]=' ';
//             for(int i=0; i<wordlen; i++){
//                 output[j++]=input[i+start];
//             }
//             lineLen+=(wordlen+1);
//         }
//         //if current line is not enough to put the word 
//         else if(wordlen+1+lineLen > len){
//             output[j++]='\n';
//             for(int i=0; i<wordlen; i++){
//                 output[j++]=input[i+start];
//             }
//             lineLen=wordlen;
//         }
//     }
//     output[j]='\0';
// }
// int main(void) {
//     char *input = "I'd like to believe that this works just fine.\nBut then again it might not.\n";
//     char output[2048];
    
//     printf("%s\n", output);
//     convert(input, output, 15);
//     // Making all spaces visible by replacing them with 'X'
//     for(int i = 0; i < (int)strlen(output); i++) {
//         if (output[i] == ' ') {
//             output[i] = 'X';
//         }
//     }
//     printf("%s\n", output);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// char *preamble(char *str, int n){
//     int len=(int)strlen(str);
//     char* result=(char*)malloc((int)((len+1)*sizeof(char)));
//     strncpy(result, str, (size_t)(n));
//     str[n]='\0';
//     return result;
// }
// int main(void){
//     char st[]="Toronto";
//     printf("%s\n", preamble(st, 3));
// }
// #include <stdio.h>
// int firstMirrorInE(void){
//     const double E = 2.718281828459045;
//     int digit[16];
//     double temp=E-2;
//     digit[0]=2;
//     for(int i=1; i<16; i++){
//         digit[i]=(int)(temp*10)%10;
//         temp=temp*10-digit[i];
//         printf("%d ", digit[i]);
//     }
//     printf("\n");

//     int curr, target;
//     for(int index=0; index<16-1; index++){
//         target=digit[index]*10+digit[index+1];
//         for(int scan=0; scan<index; scan++){
//             curr=digit[scan+1]*10+digit[scan];
//             if(target==curr) {
//                 return target;
//                 // break;
//             }
//         }
//     }
    
// }
// int main(void){
//     printf("%d\n",firstMirrorInE());
    
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     Node* head;
// }LinkedList;
// void printlist(LinkedList* list){
//     if(list->head==NULL){
//         printf("NA\n");
//         return;
//     }
//     Node* curr=list->head;
//     while(curr!=NULL){
//         printf("%d ", curr->data);
//         curr=curr->next;
//     }
//     printf("\n");
//     return ;
// }
// Node* new(int value){
//     Node* newN=(Node*)malloc(sizeof(Node));
//     if(newN!=NULL){
//         newN->data=value;
//         newN->next=NULL;
//         return newN;
//     }
//     return NULL;
// }

// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=new(6);
//     list.head->next=new(3);
//     list.head->next->next=new(3);
//     list.head->next->next->next=new(6);
//     list.head->next->next->next->next=new(7);
//     list.head->next->next->next->next->next=new(4);
//     printlist(&list);

// }
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node {
//     int data;
//     struct node *link;
// } Node;
// void printDuplicates(Node *head) {
//     if(head==NULL || head->link==NULL){
//         //if linked list is empty or the linked list only has one node
//         return;
//     }
//     //normal case
//     Node* targ=head;
//     Node* curr=NULL;
//     while(targ!=NULL){
//         curr=targ->link;
//         while(curr!=NULL){
//             if(curr->data == targ->data){
//                 //find the duplicate
//                 printf("%d\n", targ->data);
//                 break;
//             }else{
//                 curr=curr->link;
//             }
//         }
//         targ=targ->link;
//     }
// }
// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
// int recursiveFindIndex(char *string, char c){
//     if(*string=='\0'){
//         return -1;
//     }
//     if(*string==c){//if find it
//         return 0;
//     }
//     //if hasn't find yet 
//     int temp=recursiveFindIndex(string+1, c);
//     if(temp==-1){
//         return temp;
//     }
//     return temp+1;
    
// }
// int main(void){
//     char st[]="this is an apple";
//     printf("%d\n", recursiveFindIndex(st, 'x'));
// }
#include <stdio.h>
void sortOddEven(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]%2==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(void){
    int arr[8]={1 ,4, 6, 5, 9, 3, 8, 2};
    sortOddEven(arr, 8);
    for(int i=0; i<8; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}