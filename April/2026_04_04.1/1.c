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
/* void Reorder(LinkedList* list){
    if(list->head==NULL || list->head->next==NULL){
        return;
    }
    LinkedList temp;
    temp.head=NULL;
    Node* prev=list->head;
    Node* curr=list->head->next;
    while(curr!=NULL){
        Node* ori_next=curr->next;
        //insert the node into the current linked list
        if(temp.head==NULL){
            //if temp is empty
            temp.head=curr;
            curr->next=NULL;
        }
        else{
            //if temp is not empty
            Node* temp_next=temp.head;
            temp.head=curr;
            curr->next=temp_next;
        }
        //update prev and curr
        prev->next=ori_next;
        curr=ori_next;
    }
    list->head->next=temp.head;
    temp.head=NULL;
} */
/* void SwapInPairs(LinkedList* list){
    //if linked list only has one or no node
    if(list->head==NULL || list->head->next==NULL){
        return;
    }
    //normal case;
    Node dummy={__INT_MAX__, list->head};
    Node* prev=&dummy;
    Node* curr=dummy.next;
    while(curr!=NULL && curr->next!=NULL){//stop when on node, or only one node left
        Node* next_curr=curr->next->next;
        Node* next_prev=curr;
        //swap curr, curr->next
        prev->next=curr->next;
        prev->next->next=curr;
        curr->next=next_curr;
        //update prev and curr;
        prev=next_prev;
        curr=next_curr;
    }
    //update the head;
    list->head=dummy.next;
} */
// void ReserveNode(LinkedList* list, int k){
//     LinkedList temp;
//     temp.head=NULL;
//     Node temp_dummy={__INT_MAX__, temp.head};
//     Node* round_tail=&temp_dummy;
    
//     Node dummy={__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* curr=dummy.next;
//     while(true){
//         //firsly judge left node is enough
//         Node* jud=curr;
//         int index=0;
//         while(jud->next!=NULL && index<k-1){
//             jud=jud->next;
//             index++
//         }
//         if(jud->next==NULL){
//             break;
//         }
//         //if left node is enough
//         Node* next_curr=jud->next;
//         for(int i=0; i<k-1; i++){
//             Node* ori_next=curr->next;
//             //find tail in temp
//             while(round_tail->next!=NULL){round_tail=round_tail->next;};
//             curr->next=round_tail->next;
//             round_tail->next=curr;
            
//             prev->next=ori_next;
//             curr=ori_next;
            

//         }
//         //update the curr
//         curr=next_curr;
//     }
// }
void SortList(LinkedList* list){
    if(list->head==NULL){
        return;
    }
    //normal case;
    Node dummy={__INT_MAX__, list->head};
    Node* prev=&dummy;
    Node* curr=dummy.next;

    LinkedList temp;
    temp.head=NULL;
    Node tdummy={__INT_MAX__, temp.head};

    while(curr!=NULL){
        Node* next_curr=curr->next;
        //insert
        Node* tprev=&tdummy;
        Node* tcurr=tdummy.next;
        while(tcurr!=NULL && tcurr->data < curr->data){//find the proper position to insert
            tprev=tcurr;
            tcurr=tcurr->next;
        }
        curr->next=NULL;
        curr->next=tcurr;
        tprev->next=curr;

        //update the original linked list 
        prev->next=next_curr;
        curr=next_curr;
    }
   
    //update the head;
    temp.head=tdummy.next; 
    list->head=temp.head;
    temp.head=NULL;
    
}
int main(void){
    LinkedList list;
    list.head=NULL;
    list.head=crea(5);
    list.head->next=crea(4);
    list.head->next->next=crea(1);
    list.head->next->next->next=crea(2);
    list.head->next->next->next->next=crea(0);
    printlist(&list);
    //Reorder(&list);
    //SwapInPairs(&list);
    //ReserveNode(&list, 3);
    SortList(&list);
    printlist(&list);
    return 0;
}