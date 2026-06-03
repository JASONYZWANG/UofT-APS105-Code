/* #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node{
    int data;
    struct node* next;
}Node;
typedef struct list{
    Node* head;
}LinkedList;
Node* new(int value){
    Node* newnode=(Node*)malloc(sizeof(Node));
    if(newnode!=NULL){
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
    }
    return NULL;
}
void printlist(LinkedList* list){
    if(list->head==NULL){
        printf("NA\n");
        return ;

    }
    Node* curr=list->head;
    while(curr!=NULL){
        printf("%d ", curr->data);
        curr=curr->next;
    }
    printf("\n");
    return;
}
void reorder(LinkedList* list){
    if(list->head==NULL){
        //if the linked list is empty
        return ;
    }
    if(list->head->next==NULL){
        //if theres only one node in the linked list 
        return;
    }
    Node dummy={__INT_MAX__, list->head};
    Node* prev=&dummy;
    Node* curr=dummy.next;
    while(curr->next!=NULL){
        if(curr->data > curr->next->data){
            //the order is not in sequence
            Node* ori_next=curr->next->next;
            Node* prev_next=curr->next;
            prev->next=curr->next;
            prev->next->next=curr;
            curr->next=ori_next;
            //update curr, prev
            prev=prev_next;
        }
        else{
            prev=curr;
            curr=curr->next;
        }
    }
    //update the head
    list->head=dummy.next;
    dummy.next=NULL;
}
int main(void){
    LinkedList list;
    list.head=NULL;
    list.head=new(3);
    list.head->next=new(1);
    list.head->next->next=new(9);
    list.head->next->next->next=new(20);
    list.head->next->next->next->next=new(13);
    printlist(&list);
    reorder(&list);
    printlist(&list);

    return 0;
} */

/* #include <stdio.h>
#include <string.h>
#include <stdbool.h>
// void moveForward(char* arr, int size){
//     if(*(arr+1)=='\0'){
//         return;
//     }
//     *(arr)=*(arr+1);
//     moveForward(arr+1, size-1);
// }
bool function(const char* str, int left, int right){
    //skip the space and dot
    if(str[left]==' '|| str[left]=='.'){
        return function(str, left+1, right);
    }
    if(str[right]==' '|| str[right]=='.'){
        return function(str, left, right-1);
    }
    //base case
    if(left>=right){
        return true;
        //until the end, return true;
    }
    if(str[left]!=str[right]){
        return false;
        //there's index which is not the same
    }
    return function(str, left+1, right-1);
}
bool isCleanPalindrome(const char *str) {
    if(*str=='\0') return false;//if the string is empty, directly return false
    return function(str, 0, (int)strlen(str)-1);
}
int main(void){
    char st[]="a.    ....";
    isCleanPalindrome(st);
    printf("%d\n", isCleanPalindrome(st));
    return 0;
} */

/* #include <stdio.h>
int CountIncreasingLenghth(int* index, int size){
    if(size<=1 || *index>*(index+1)){
        return 1;
    }
    return CountIncreasingLenghth(index+1, size-1)+1;
}
int longestIncreasingRun(int arr[], int size){
    if(size<=0){
        return -__INT_MAX__;
    }
    int max_rest=longestIncreasingRun(arr+1, size-1);//the max IL in the rest array
    int curr_len=CountIncreasingLenghth(arr, size); //the increasing-length at the current index
    if(max_rest < curr_len) return curr_len;
    return max_rest;
}   
int main(void){
    int arr[]={1, 2, 5, 3, 4, 8, 9, 6};
    // printf("%d\n", CountIncreasingLenghth(arr+3, 5));
    printf("%d\n", longestIncreasingRun(arr, (int)(sizeof(arr)/sizeof(int))));
    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>
bool digitsStrictlyIncrease(int n) {
    if(n<10){
        return true;
    }
    if((n/10)%10 >= n%10){
        return false;
    }
    return digitsStrictlyIncrease(n/10);
}
int main(void){
    printf("%d\n", digitsStrictlyIncrease(111111));
    return 0;
} */

#include <stdio.h>
#include <string.h>
void printlist(const char* str, int left, int right){
    if(left>right){
        printf("\n");
        return ;
    }
    printf("%c",*(str+left));
    printlist(str, left+1, right);
}
void function(const char *str, int left, int right){
    int len=(int)strlen(str);
    if(str[right]=='\0'){
        return;
    }
    printlist(str, left, right);
    function(str, left, right+1);
    printlist(str, len-right, len-1);
}
void printPrefixSuffix(const char *str){
    if(*str=='\0'){
        return ;
    }
    function(str, 0, 0);
}
int main(void){
    char st[]="code";
    //printlist(st, 1, 3);
    printPrefixSuffix(st);
    return 0;
}