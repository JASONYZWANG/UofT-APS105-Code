/* #include <stdio.h>
int rotateAndFindLongest(int *a, int *b, int *c, int *d){
    int tempa, tempb, tempc, tempd; 
    tempa=((*d)%10)*10+(*d)/10;
    tempb=((*a)%10)*10+(*a)/10;
    tempc=((*b)%10)*10+(*b)/10;
    tempd=((*c)%10)*10+(*c)/10;
    *a=tempa;
    *b=tempb;
    *c=tempc;
    *d=tempd;

    int max=-__INT_MAX__;
    if(max<tempa){
        max=tempa;
    }
    if(max<tempb){
        max=tempb;
    }
    if(max<tempc){
        max=tempc;
    }
    if(max<tempd){
        max=tempd;
    }
    return max;
}
int main(void){
    int a=34, b=26, c=66, d=19;
    printf("%d \n", rotateAndFindLongest(&a, &b, &c, &d));
    printf("%d %d %d %d\n", a,b,c,d);
    return 0;
} */

// #include <stdio.h>
// #include <stdbool.h>
// bool SetValue(int(*arr)[1000], int rowStart, int rowEnd, int colStart, int colEnd, int value){
//     //judge if the parameter is legal 
//     if(rowStart<0 || colStart<0 || rowEnd>=1000 || colEnd>=1000 || colEnd<colStart || rowEnd<rowStart){
//         return false;
//     }
//     for(int i=rowStart; i<rowEnd; i++){
//         for(int j=colStart; j<colEnd; j++){
//             arr[i][j]=value;
//         }
//     }
//     return true;
// }
// int main(void){
//     int A[1000][1000];
//     int rowStart,  rowEnd,  colStart,  colEnd,  value;
//     scanf("%d %d %d %d %d", &rowStart, &rowEnd, &colStart, &colEnd, &value);
//     if(SetValue(A, rowStart, rowEnd, colStart, colEnd, value)==false){
//         printf("eligle\n");
//     }
    
// }
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// char *deleteSubString (char *source, char *substring) {
//     int len_source=(int)strlen(source);
//     int len_sub=(int)strlen(substring);
//     char* result=(char*)malloc((size_t)(len_source+1)*sizeof(char));
//     if(result==NULL){
//         return result;
//     }
//     if(*substring=='\0' && *source!='\0'){
//         //if the substring is empty and source is not empty
//         strcpy(result, source);
//         return result;
//     }
//     if(*source=='\0'){
//         //if source is empty
//         *result='\0';
//         return result;
//     }
//     //normal case
//     char* temp=strstr(source, substring);
//     if(temp==NULL){
//         strcpy(result, source);
//         return result;
//     }
//     int index=(int)(temp-source);
//     for(int i=0; i<index; i++){
//         //copy the first part
//         result[i]=source[i];
//     }
//     result[index]='\0';
//     strcat(result, source+index+len_sub);
//     return result;
// }
// int main(void){
//     char sr[]="This is my apple";
//     char sub[]="aple";
//     char* result=deleteSubString(sr, sub);
//     printf("%s\n", result);
//     free(result);
//     result=NULL;
// }
/* #include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}Node;
Node* buildJoinedList(Node* firstList, Node* secondList){
    //create the head of the new linked list
    Node* head=NULL;
    if(firstList==NULL){
        //if the first linked list is empty 
        if(head==NULL){
            Node* new=(Node*)malloc(sizeof(Node));
            if(new!=NULL){
                new->data=secondList->data;
                new->link=NULL;
                head=new;
            }
        }
        //copy the rest of the linked list
            Node* curr=secondList->link;
            while(curr!=NULL){
                Node* tail=head;
                while(tail->link!=NULL){
                    tail=tail->link;
                }//find the tail
                Node* new=(Node*)malloc(sizeof(Node));
                if(new!=NULL){
                    new->data=curr->data;
                    new->link=NULL;
                    tail->link=new;
                }
                curr=curr->link;
            }
        return head;
    }
    if(secondList==NULL){
        //if the second linked list is empty 
        if(head==NULL){
            Node* new=(Node*)malloc(sizeof(Node));
            if(new!=NULL){
                new->data=firstList->data;
                new->link=NULL;
                head=new;
            }
        }
            Node* curr=firstList->link;
            while(curr!=NULL){
                Node* tail=head;
                while(tail->link!=NULL){
                    tail=tail->link;
                }//find the tail
                Node* new=(Node*)malloc(sizeof(Node));
                if(new!=NULL){
                    new->data=curr->data;
                    new->link=NULL;
                    tail->link=new;
                }
                curr=curr->link;
            }
        return head;
    }
    //normal case
    if(head==NULL){
        //result list is empty now
        Node* new=(Node*)malloc(sizeof(Node));
        if(new!=NULL){
            new->data=secondList->data;
            new->link=NULL;
            head=new;
        }
    }
    //copy the rest of the second
    Node* curr=secondList->link;
    while(curr!=NULL){
        Node* tail=head;
        while(tail->link!=NULL){
            tail=tail->link;
        }//find the tail
        Node* new=(Node*)malloc(sizeof(Node));
        if(new!=NULL){
            new->data=curr->data;
            new->link=NULL;
            tail->link=new;
        }
        curr=curr->link;      
    }
    curr=firstList;
    //copyt the first
    while(curr!=NULL){
        Node* tail=head;
        while(tail->link!=NULL){
            tail=tail->link;
        }//find the tail
        Node* new=(Node*)malloc(sizeof(Node));
        if(new!=NULL){
            new->data=curr->data;
            new->link=NULL;
            tail->link=new;
        }
        curr=curr->link;      
    }
    return head;
}
 */
/* #include <stdio.h>
#include <stdlib.h>
double bestRally (double price[], int listLength){
    double roundIncease=0;
    double max=0;
    for(int i=0; i<listLength-1; i++){
        if(price[i+1]>price[i]){
            roundIncease+=(price[i+1]-price[i]);
            if(roundIncease>max){
                max=roundIncease;
            }
        }else{
            roundIncease=0;
        }
    }
    return max;
}
int main(void){
    double prices[]={10, 12, 15, 11, 13, 19, 8};
    printf("%f \n", bestRally(prices, (int)(sizeof(prices)/sizeof(double))));
    return 0;
} */

/* #include <stdio.h>
#include <stdlib.h>
// Struct for a node in the doubly linked list
typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
} Node;

// Struct for the linked list
typedef struct {
    Node* head;
    Node* tail;
} DoublyLinkedList;

void insertAfterNode(DoublyLinkedList* list, Node* prevNode, int val){
    if(list->head==NULL){
        //if the linked list is empty
        return;
    }
    if(prevNode==NULL){
        //if the node is empty
        return;
    }
    //normal case
    Node* newNode=(Node*)malloc(sizeof(Node));//create node
    if(newNode!=NULL){
        newNode->data=val;
        newNode->next=NULL;
        newNode->prev=NULL;
    }
    else{
        return;
    }
    //insert the new node
    if(prevNode==list->tail){
        //if insert at the end
        prevNode->next=newNode;
        newNode->prev=prevNode;
        list->tail=newNode;
    }else{
        newNode->next=prevNode->next;
        prevNode->next->prev=newNode;
        prevNode->next=newNode;
        newNode->prev=prevNode;    
    }
}

int main(void) {
    DoublyLinkedList listA;
    Node a1 = {1, NULL, NULL};
    Node a2 = {2, &a1, NULL};
    a1.next = &a2;
    listA.head = &a1;
    listA.tail = &a2;
    insertAfterNode(&listA, &a2, 7);
    return 0;
} */

/* #include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
bool isStringRotation(char* s1, char* s2){
    if(strlen(s1)!=strlen(s2)){
        return false;
    }
    int len=(int)strlen(s2);
    char* temp=(char*)malloc((size_t)(len*2+1)*(sizeof(char)));
    if(temp!=NULL){
        strcpy(temp, s2);
        strcat(temp, s2);
    }
    if(strstr(temp, s1)!=NULL){
        free(temp);
        return true;
    }
    free(temp);
    return false;
}
int main(void){
    char* s1 = "hellothere";
    char* s2 = "llotherhee"; 
    bool flag = isStringRotation(s1, s2); // should return f
    printf("%d \n", flag);
    return 0;
} */

/* #include <stdio.h>
#include <stdlib.h>
int printNthElementinSpiralOrder(int rows, int cols, int arr[rows][cols], int n){
    if(n>rows*cols){
        return -1; //the number is eligle
    }
    int upper=0; 
    int bottom=rows-1;
    int left=0;
    int right=cols-1;
    int index=0;
    int* temp=(int*)malloc((size_t)(rows*cols+1)*sizeof(int));
    if(temp==NULL){
        return -1;
    }
    while(left<=right && upper<=bottom){
        //trav the upper row 
        for(int i=left; i<=right; i++){
            temp[index++]=arr[upper][i];
        }
        upper++;
        //trav the right col
        for(int i=upper; i<=bottom; i++){
            temp[index++]=arr[i][right];
        }
        right--;
        //trav bottom row
        for(int i=right; i>=left; i--){
            temp[index++]=arr[bottom][i];
        }
        bottom--;
        //trav left col
        for(int i=bottom; i>=upper; i--){
            temp[index++]=arr[i][left];
        }
        left++;
    }
    

    for(int i=0; i<rows*cols; i++){
        printf("%d ", temp[i]);
    }
    printf("\n");
    int result=temp[n-1];
    free(temp);
    return result;
}
int main(void){
    int array[3][6] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}}; // for n == 18 it should return 11 
    printf("%d\n", printNthElementinSpiralOrder(3,6,array,6));
    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// Struct for a node in a linked list
typedef struct node {
    int data;
    struct node* next;
} Node;

// Struct for the linked list
typedef struct list {
   Node* head;
} LinkedList;

void printlist(LinkedList* list){
    if(list->head==NULL){
        printf("NA\n");
        return;
    }
    Node* curr=list->head;
    while(curr!=NULL){
        printf("%d ", curr->data);
        curr=curr->next;
    }
    printf("\n");
    return ;
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
LinkedList* mergeLists(LinkedList* left, LinkedList* right){
    if(left->head==NULL && right->head==NULL){
        return NULL;
    }
    if(left->head==NULL && right->head!=NULL){
        return right;
    }
    if(right->head==NULL && left->head!=NULL){
        return left;
    }
    //normal case
    Node dummy={__INT_MAX__, right->head};
    Node* rprev=&dummy;
    Node* rcurr=dummy.next;
    Node* lcurr=left->head;
    while(lcurr!=NULL){
        Node* lcurr_next=lcurr->next;

        //find the proper location to insert
        rprev=&dummy;
        rcurr=dummy.next;
        while(rcurr!=NULL){
            if(rcurr->data > lcurr->data){
                lcurr->next=rcurr;
                rprev->next=lcurr;
                break;
            }
            rprev=rcurr;
            rcurr=rcurr->next;
        }
        if(rcurr==NULL){
            lcurr->next=NULL;
            rprev->next=lcurr;
        }

        left->head=lcurr_next;
        lcurr=lcurr_next;
    }
    //update the head of right 
    right->head=dummy.next;

    LinkedList* result=(LinkedList*)malloc(sizeof(LinkedList));
    if(result!=NULL){
        result->head=right->head;
        right->head=NULL;
    }
    return result;
   
}
int main(void){
    LinkedList left;
    LinkedList right;
    left.head=NULL;
    left.head=new(1);
    left.head->next=new(3);
    left.head->next->next=new(100);

    right.head=NULL;
    right.head=new(2);
    right.head->next=new(3);
    right.head->next->next=new(5);

    printlist(&left);
    printlist(&right);

    printlist(mergeLists(&left, &right));
    return 0;
} */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sorting(int* arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int searching(int* arr, int size, int value){
    int left=0, right=size-1;
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]>value){
            right=mid-1;
        }
        else if(arr[mid]<value){
            left=mid+1;
        }
        else if(arr[mid]==value){
            return mid;
        }
    }
    return -1;
}
int rev_searching(int* arr, int left, int right, int value){

    if(left>right){
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==value) return mid;
    
    if(arr[mid]>value) return rev_searching(arr, left, mid-1, value);
    if(arr[mid]<value) return rev_searching(arr, mid+1, right, value);
}
int main(void){
    srand((unsigned int)time(NULL));
    int arr[20];
    for(int i=0; i<20; i++) {arr[i]=rand()%100+0; printf("%d ", arr[i]);};printf("\n");
    sorting(arr, 20);
    for(int i=0;i<20;i++) printf("%d ", arr[i]);
    printf("\n"); 
    int targ;
    scanf("%d", &targ);
    printf("location is %d\n", rev_searching(arr, 0, 20-1, targ));
    return 0;
}