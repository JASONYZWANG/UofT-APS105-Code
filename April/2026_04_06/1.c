// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     Node* head;
// }LinkedList;
// void printlist(LinkedList* list){
//     if(list->head==NULL){
//         printf("N/A\n");
//         return;
//     }
//     Node* temp = list->head;
//     while(temp!=NULL){
//         printf("%d ", temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
//     return;
// }
// Node* new(int value){
//     Node* new=(Node*)malloc(sizeof(Node));
//     if(new!=NULL){
//         new->data=value;
//         new->next=NULL;
//         return new;
//     }
//     return NULL;
// }
// /* void MoveLinkedList(LinkedList* list, int l, int r){
//     //if l or r is not legel
//     int length=0;
//     Node* temp=list->head;
//     while(temp!=NULL){
//         length++;
//         temp=temp->next;
//     }
//     //if the linked list is empty
//     if(length==0){
//         return;
//     }
//     //if l or r is larger than len, or l larger or equal to r, or l==1, r==length
//     if(l>length || r>length || l>=r || (l==1 && r==length)){
//         return;
//     }
//     //normal case
//     LinkedList sep;
//     sep.head=NULL;
//     Node dummy={__INT_MAX__, list->head};
//     Node* left_prev=&dummy;
//     Node* left=dummy.next;
//     for(int i=0; i<l-1; i++){
//         left_prev=left;
//         left=left->next;
//     }
//     Node* right=&dummy;
//     for(int i=0; i<r; i++){right=right->next;};//find left and right Node* 
    
//     Node* ori_next=right->next;
//     sep.head=left;
//     right->next=NULL;
//     left_prev->next=ori_next; //insert and fix the original linked list

//     list->head=dummy.next;//update head

//     Node* tail=list->head;
//     while(tail->next!=NULL){
//         tail=tail->next;
//     }
//     tail->next=sep.head;
//     sep.head=NULL;//merge sep and list togerther
// } */
// void MoveNode(LinkedList* list, int val){
//     //if the linked list is empty
//     if(list->head==NULL){
//         return ;
//     }
//     Node dummy={__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* curr=dummy.next;
//     LinkedList temp;
//     temp.head=NULL;
//     while(curr!=NULL){
//         //if node is smaller than val
//         Node* curr_next=curr->next;
//         if(curr->data < val){
//             if(temp.head==NULL){//if temp is empty now
//                 temp.head=curr;
//                 curr->next=NULL;
//             }else{
//                 Node* tail=temp.head;
//                 while(tail->next!=NULL){
//                     tail=tail->next;
//                 }
//                 tail->next=curr;
//                 curr->next=NULL;
//             }
//             prev->next=curr_next;
//             //update new prv and curr
//             curr=curr_next;
//             continue;
//         }
//         prev=curr;
//         curr=curr->next;
//     }
    
//                                                                 // printlist(list);
//                                                                 // printlist(&temp);
    
//     Node* tail=&dummy;
//     while(tail->next!=NULL){
//         tail=tail->next;
//     }
//     tail->next=temp.head;
//     temp.head=NULL;
    
//     list->head=dummy.next; //update list head
//     return;
// }
// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=new(1);
//     list.head->next=new(2);
//     list.head->next->next=new(3);
//     list.head->next->next->next=new(4);
//     list.head->next->next->next->next=new(5);
//     printlist(&list);
//     //MoveLinkedList(&list, 1,5);
//     MoveNode(&list, 6);
//     printlist(&list);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node{
    int data;
    struct node* next;
}Node;
typedef struct list{
    Node* head;
}LinkedList;
void printlist(LinkedList* list){
    if(list->head==NULL){
        printf("NA\n");
    }
    Node* curr=list->head;
    while(curr!=NULL){
        printf("%d ", curr->data);
        curr=curr->next;
    }
    printf("\n");return;
}
Node* new(int value){
    Node* new=(Node*)malloc(sizeof(Node));
    if(new!=NULL){
        new->data=value;
        new->next=NULL;
        return new;
    }
    return NULL;
}
// void reverseList(LinkedList* list, int len){
//     if(len==0 || len==1){
//         return;
//     }
//     int l=0;
//     Node* a=list->head;
//     while(a!=NULL){
//         a=a->next;
//         l++;
//     }
//     //if the len is no more than the length of the linked list
//     if(len>l) return;
//     LinkedList temp;
//     temp.head=NULL;
//     LinkedList result;
//     result.head=NULL;
//     Node dummy={__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* curr=dummy.next;
    
//     for(int round=0; round<(int)(l/len); round++){
//         for(int i=0; i<len; i++){
//             ///////// make a reverse linked list in one round /////////
//             Node* curr_next=curr->next;
//             if(temp.head==NULL){//if temp linked list is empty now 
//                 temp.head=curr;
//                 curr->next=NULL;
//             }
//             else{
//                 curr->next=temp.head;
//                 temp.head=curr;
//             }
//             //fixed the original linked list
//             prev->next=curr_next;
//             curr=curr_next;
//         }
        
//         ///////// move the reverse linked list into the result ///////////
//         if(result.head==NULL){ //if result is empty
//             result.head=temp.head;
//             temp.head=NULL;
//         }
//         else{
//             Node* tail=result.head;
//             while(tail->next!=NULL){
//                 tail=tail->next;
//             }
//             tail->next=temp.head;
//             temp.head=NULL;
//         }
//     }
    
//     //merge the left node in original linked list to result;
//     Node* tail=result.head;
//     while(tail->next!=NULL) tail=tail->next;
//     tail->next=dummy.next;
//     dummy.next=result.head;
//     //update the list->head;
//     list->head=dummy.next;
// }
// void FList(LinkedList* list){
//     // if linked list only have one or no node
//     if(list->head==NULL || list->head->next==NULL){
//         return;
//     }
//     //if linked list only have two nodes
//     if(list->head!=NULL && list->head->next!=NULL && list->head->next->next==NULL){
//         Node* temp=list->head;
//         list->head=temp->next;
//         temp->next=NULL;
//         list->head->next=temp;
//         return;
//     }
//     Node* prev=list->head;
//     Node* curr=prev->next;
//     while(curr!=NULL && curr->next!=NULL /* && curr->next->next!=NULL */){
//         Node* curr_next=curr->next->next;
//         prev->next=curr->next;
//         curr->next=list->head;
//         list->head=curr;
//         //update prev and curr
//         prev=prev->next;
//         curr=curr_next;
//     }
// }
// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=new(1);
//     list.head->next=new(2);
//      list.head->next->next=new(3);
//     list.head->next->next->next=new(4);
//     // list.head->next->next->next->next=new(5);
//     // list.head->next->next->next->next->next=new(6);
//     // list.head->next->next->next->next->next->next=new(7);
//     printlist(&list);
//     FList(&list);

//     printf("\n");
//     printlist(&list);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// void ReverseMain(char* str, int left, int right){
//     if(left>right){
//         return;
//     }
//     char temp=str[left];
//     str[left]=str[right];
//     str[right]=temp;
//     ReverseMain(str, left+1, right-1);
// }
// void reverse(char* str){
//     // if(str==""){
//     //     return ;
//     // }
//     ReverseMain(str, 0, (int)(strlen(str)-1));
// }

// int main(void){
//     char str[]="abcdef";
//     reverse(str);
//     printf("%s\n", str);
// }
/* #include <stdio.h>
#include <string.h>
void print(char* str, char* temp, int index, int size_temp){ 
    if(str[index]=='\0'){
        temp[size_temp]='\0';
        printf("%s\n",temp);
        return;
    }
    //if choose index
    temp[size_temp]=str[index];
    print(str, temp, index+1, size_temp+1);
    //if dont choose this index
    print(str, temp, index+1, size_temp);

}
void Entrance(char* str){
    char temp[100];
    print(str, temp, 0, 0);
    return ;
}
int main(void){
    char str[]="abcd";
    Entrance(str);
    return 0;
} */
// #include <stdio.h>
// #include <string.h>

// void Entrance(char* str, int index){
//     if(str[index]=='\0'){
//         return;
//     }
//     //if separate from index
//     for(int i=0; i<index; i++){
//         printf("%c", str[i]);
//     }
//     printf(" ");
//     printf("%s\n", str+index);
//     Entrance(str, index+1);

//     //if do not seperate
//     Entrance(str, index+1);
// }
// int main(void){
//     char str[]="abc";
//     Entrance(str,0);
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>
/* void print(char* result, int l_result, int n, int left, int right){
    if(l_result==n*2 && left==right){//meet the requirement, print out
        if(result[0]==')') return;
        bool legal=true;
        for(int i=0; i<n*2; i++){
            if(result[i]=='('){
                bool foundright=false;
                for(int j=i+1; j<n*2; j++){
                    if(result[j]==')'){
                        foundright=true;
                    }
                }
                if(foundright==false){
                    legal=false;
                    break;
                }
            }
        }
        if(legal==true){
            result[l_result]='\0';
            printf("%s\n", result);
            return ;
        }else{
            return;
        }
        
    }
    if(l_result==n*2 && left!=right){//does not meet the requirement
        return;
    }
    //choose left
    result[l_result]='(';
    print(result, l_result+1, n, left+1, right);
    //choose right
    result[l_result]=')';
    print(result, l_result+1, n, left, right+1);
} */
#include <stdio.h>

void print(char* res, int len, int n, int left, int right){
    // 生成完成
    if(len == 2*n){
        res[len] = '\0';
        printf("%s\n", res);
        return;
    }

    // 1️⃣ 可以放左括号
    if(left < n){
        res[len] = '(';
        print(res, len+1, n, left+1, right);
    }

    // 2️⃣ 可以放右括号（关键剪枝）
    if(right < left){
        res[len] = ')';
        print(res, len+1, n, left, right+1);
    }
}
int main(void){
    char result[100];
    print(result,0,3,0,0);
    return 0;
}