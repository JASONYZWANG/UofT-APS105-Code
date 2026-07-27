/* #include <stdio.h>
int factorial(int n) { // returns n!
    int result = 1;
    for(int i=1; i<=n; i++) result*=i;
    return result;
}
int main(void) {
    int const RowDesired = 8; //counts from 1
    int pascalRow[8]; //hint: row #n has n+1 elements
    for(int r=0; r<RowDesired; r++){
        int n=RowDesired-1;
        int temp=(factorial(n))/(factorial(r)*factorial(n-r));
        pascalRow[r]=temp;
    }
    for(int i=0; i<RowDesired; i++) printf("%d ", pascalRow[i]);
    printf("\n");
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
void countLetters(char* str, int* arr);
int main(void){
    char str[1000];
    printf("Enter a sentence: ");
    if(fgets(str, 1000-1, stdin)!=NULL){
        char* temp=strchr(str,'\n');
        if(temp!=NULL){
            *temp='\0';
        }
        if(temp==NULL){
            while(getchar()!='\n'){};
        }
    }
    int alpha[26];
    for(int i=0; i<26; i++){
        alpha[i]=0;
    }
    countLetters(str, alpha);
    printf("The frequency that each lower case letter appears is:\n");
    for(int i=0; i<26; i++){
        if(alpha[i]!=0) {
            printf("%c: %d\n", (char)('a'+i), alpha[i]);
        }
        
    }
    printf("\n");
}
void countLetters(char* str, int* arr){
    int size=(int)strlen(str);
    //("%d\n",size);
    for(int i=0; i<size; i++){
        if(str[i]<='z' && str[i]>='a'){
            arr[(int)(str[i]-'a')]++;
        }
    }
} */

/* #include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;
typedef struct linkedList {
    Node *head;
} LinkedList;
Node* create(int value){
    Node* new=(Node*)malloc(sizeof(Node));
    if(new!=NULL){
        new->data=value;
        new->next=NULL;
        return new;
    }
    return NULL;
}
void printlist(LinkedList* list){
    if(list->head==NULL) {
        printf("N/A\n");
        return;
    }
    Node* current=list->head;
    while(current!=NULL){
        printf("%d ", current->data);
        current=current->next;
    }
    printf("\n");
    return;
}
void bubbleSortLinkedList(LinkedList *list){
    if(list->head==NULL){
        return ;
    }
    Node* i=list->head;
    Node* j=list->head;
    while(i->next!=NULL){
        j=list->head;
        while(j->next!=NULL){
            if(j->next->data < j->data){
                int temp=j->next->data;
                j->next->data=j->data;
                j->data=temp;
            }
            j=j->next;
        }
        i=i->next;
    }
}
int main(void){
    LinkedList list;
    list.head=NULL;
    list.head=create(40);
    list.head->next=create(30);
    list.head->next->next=create(20);
    list.head->next->next->next=create(10);
    printlist(&list);
    bubbleSortLinkedList(&list);
    printlist(&list);
    
}
 */

/* #include <stdio.h>
#include <string.h>
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
void  permutateHelper(char* str, int low, int high){
    if(low==high){
        printf("%s\n", str);
        return;
    }
    for(int i=low; i<=high; i++){
        swap(str+i, str+low);
        permutateHelper(str, low+1, high);
        swap(str+i, str+low);
    }
}

void permutate(char*str){
    int size=(int)strlen(str);
    permutateHelper(str, 0, size-1);
}
int main(void){
    char str[] = "abc";
    permutate(str);
} */


/* #include <stdio.h>
#include <string.h>
char *alignText(char* inStrings[], int lineLength){
    int index=0;
    int len=0;
    while(strcmp(inStrings[index],".")!=0){
        len+=(int)strlen(inStrings[index]);
        index++;
    }
    len=len+index*3+5; //in case, give enough space
    char* result=(char*)malloc((int)(len)*sizeof(char));
    *result='\0';
    if(result==NULL) return NULL;
    
    int lineLen=strlen(inStrings[0]);// insert the first word
    strcat(result, inStrings[0]);
    index=1;
    while(strcmp(inStrings[index],".")!=0){
        //if this line is enough, insert inStrings[i]+' '
        if(lineLen+(int)strlen(inStrings[index])+1 <= lineLength){
            strcat(result, " ");
            strcat(result, inStrings[index]);
            lineLen+=((int)strlen(inStrings[index])+1);
        }

        //if this line is not enough, start a new line. 
        else if(lineLen+(int)strlen(inStrings[index])+1 > lineLength){
            strcat(result,"\n ");
            strcat(result, inStrings[index]);
            lineLen=(int)strlen(inStrings[index]);// every new line length starts from the length of the first word
        }
        index++;
    }
    //insert ".\0";
    strcat(result, ".\0");
    return result;
}
int main(void){

} */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node {
    int data;
    struct node *next;
} Node;
typedef struct linkedList {
    Node *head;
} LinkedList;
// void sortLinkedlist(LinkedList* list){
//     if(list->head==NULL){
//         return;
//     }
//     Node dummy={__INT_MAX__, list->head};
    
//     while(true){ //outer i loop
//         bool swapped=false;
//         Node* prev=&dummy;
//         Node* curr=dummy.next;

//         while(curr->next!=NULL){//inner j loop
//             if(curr->data > curr->next->data){
//                 swapped=true;
//                 //swap curr, curr->next
//                 Node* prev_next=curr->next;
//                 Node* ori_next=curr->next->next;
//                 prev->next=curr->next;
//                 prev->next->next=curr;
//                 curr->next=ori_next;
//                 //update prev, curr
            
//                 prev=prev_next;
//                 continue;
//             }
//             prev=curr;
//             curr=curr->next;
//         }
//         if(swapped==false) break;
//     }
//     //update head
//     list->head=dummy.next;
// }

void printlist(LinkedList* list){
    if(list->head==NULL) {
        printf("N/A\n");
        return;
    }   
    Node* curr=list->head;
    while(curr!=NULL){
        printf("%d ", curr->data);
        curr=curr->next;
    }
    printf("\n");
    return;
}
Node* crea(int value){
    Node* new=(Node*)malloc(sizeof(Node));
    if(new!=NULL){
        new->data=value;
        new->next=NULL;
        return new;
    }
    return NULL;
}
// void partitionList(LinkedList* list, int x){
//     if(list->head==NULL){
//         return ;
//     }
//     LinkedList l1;
//     l1.head=NULL;
//     LinkedList l2;
//     l2.head=NULL;
    
//     Node dummy={-__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* curr=dummy.next;
//     while(curr!=NULL){
//         Node* ori_next=curr->next;
//         if(curr->data < x){
//             if(l1.head==NULL){//if l1 is empty originally
//                 l1.head=curr;
//                 curr->next=NULL;
//             }
//             else{
//                 Node* tail=l1.head;
//                 while(tail->next!=NULL){
//                     tail=tail->next;
//                 }
//                 tail->next=curr;
//                 curr->next=NULL;
//             }
//             prev->next=ori_next;
//             curr=ori_next;
//         }
//         else if(curr->data >= x){
//             if(l2.head==NULL){//if l2 is empty originally
//                 l2.head=curr;
//                 curr->next=NULL;
//             }
//             else{
//                 Node* tail=l2.head;
//                 while(tail->next!=NULL){
//                     tail=tail->next;
//                 }
//                 tail->next=curr;
//                 curr->next=NULL;
//             }
//             prev->next=ori_next;
//             curr=ori_next;
//         }
//     }
//     printlist(&l1);
//     printlist(&l2);
//     dummy.next=NULL;
//     list->head=l1.head;
//     //if l1 is empty, list->head will be null
//     if(list->head==NULL){
//         list->head=l2.head;
//     }
//     else{
//         Node* tail_l1=list->head;
//         while(tail_l1->next!=NULL){
//             tail_l1=tail_l1->next;
//         }
//         tail_l1->next=l2.head;
//     }
    
// }
// void Rotatelist(LinkedList* list, int n){
//     //update the legal n and know the length of the linked list
//     int len=0;
//     Node* curr=list->head;
//     while(curr!=NULL){
//         len++;
//         curr=curr->next;
//     }
//     n=n%len;
//     if(n==0) return; //if n%len==0, the position wont change

//     //seperate the linked list
//     int len1=len-n;
//     curr=list->head;
//     for(int i=0; i<len1-1; i++){
//         curr=curr->next;
//     }
//     LinkedList temp;
//     temp.head=NULL;
//     temp.head=curr->next;
//     curr->next=NULL;

//     //update the list->head
//     Node* tempTail=temp.head;//temptail would point to the last in temp list
//     while(tempTail->next!=NULL){
//         tempTail=tempTail->next;
//     }
//     tempTail->next=list->head;
//     list->head=temp.head;
//     temp.head=NULL;
//     return ;
    
// }
void OddEven(LinkedList* list){
    //if the linked list is empty
    if(list->head==NULL){
        return;
    }
    LinkedList Odd;
    Odd.head=NULL;
    LinkedList Even;
    Even.head=NULL;
    Node dummy={__INT_MAX__, list->head};
    Node* prev=&dummy;
    Node* curr=dummy.next;
    //normal case
    while(curr!=NULL){
        Node* ori_next=curr->next;
        if(curr->data%2==1){
            //insert in the Odd linked list 
            if(Odd.head==NULL){
                Odd.head=curr;
                curr->next=NULL;
            }
            else{//if the Odd linked list is not empty
                Node* tail=Odd.head;
                while(tail->next!=NULL){
                    tail=tail->next;
                }
                tail->next=curr;
                curr->next=NULL;
            }
        }
        else if(curr->data%2==0){
            if(Even.head==NULL){
                Even.head=curr;
                curr->next=NULL;
            }
            else{
                Node* tail=Even.head;
                while(tail->next!=NULL){
                    tail=tail->next;
                }
                tail->next=curr;
                curr->next=NULL;
            }
            
        }
        //reconnect the linked list, update curr 
        prev->next=ori_next;
        curr=ori_next;
    }
    printlist(&Odd);
    printlist(&Even);
    //merge Odd and Even together 
    list->head=Odd.head;
    if(list->head==NULL){//if the Odd linked list is empty
        list->head=Even.head;
    }else{//if Odd linked list is not empty
        Node* tail=list->head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=Even.head;
    }
    
    Odd.head=NULL;
    Even.head=NULL;
}
int main(void){

    LinkedList list;
    list.head=NULL;
    list.head=crea(5);
    list.head->next=crea(3);
    list.head->next->next=crea(1);
    list.head->next->next->next=crea(9);
    list.head->next->next->next->next=crea(7);
  
    printlist(&list);
    OddEven(&list);
    printlist(&list);
    return 0;

}