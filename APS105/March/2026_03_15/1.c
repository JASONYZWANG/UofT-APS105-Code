
// // #include <stdio.h>
// // #include <string.h>

// // struct Neuron {
// //     int neuronNum;
// //     double input1, input2;
// //     char areaName[20];
// // } globalNeuron = {1, 9.1, 8.3, "Frontal Lobe"};
// // int main(void) {
// //     struct Neuron neuron = {3, 90, 23, "Frontal Cortex"};
// //     strncpy(neuron.areaName, globalNeuron.areaName,sizeof(neuron.areaName)-1);
// //     neuron.areaName[strlen(globalNeuron.areaName)]='\0';
// //     printf("globalNeuron.neuronNum = %d\n", globalNeuron.neuronNum);
// //     printf("globalNeuron.input1 = %.2lf\n", globalNeuron.input1);
// //     printf("globalNeuron.input2 = %.2lf\n", globalNeuron.input2);
// //     printf("globalNeuron.areaName = %s\n\n", globalNeuron.areaName);
// //     printf("neuron.neuronNum = %d\n", neuron.neuronNum);
// //     printf("neuron.input1 = %.2lf\n", neuron.input1);
// //     printf("neuron.input2 = %.2lf\n", neuron.input2);
// //     printf("neuron.areaName = %s\n\n", neuron.areaName);
// //     return 0;
// // }
// // #include <stdio.h>
// // struct Neuron {
// //     int neuronNum;
// //     double input1, input2;
// //     char areaName[20];
// // } globalNeuron = {1, 9.1, 8.3, "Frontal Lobe"};
// // int main(void) {
// //     struct Neuron neuron = {3, 90, 23, "Frontal Cortex"};
// //     printf("globalNeuron.neuronNum = %d\n", globalNeuron.neuronNum);
// //     printf("globalNeuron.input1 = %.2lf\n", globalNeuron.input1);
// //     printf("globalNeuron.input2 = %.2lf\n", globalNeuron.input2);
// //     printf("globalNeuron.areaName = %s\n\n", globalNeuron.areaName);
// //     printf("neuron.neuronNum = %d\n", neuron.neuronNum);
// //     printf("neuron.input1 = %.2lf\n", neuron.input1);
// //     printf("neuron.input2 = %.2lf\n", neuron.input2);
// //     printf("neuron.areaName = %s\n\n", neuron.areaName);
// //     return 0;
// // }


// // #include <stdio.h>
// // struct Neuron {
// //     int neuronNum;
// //     double input1, input2;
// //     char areaName[20];
// // };
// // typedef struct Neuron S_Neuron;
// // int main(void) {
// //     S_Neuron neuron;
// //     neuron.input1 = 7.9;
// //     printf("neuron.input1 = %.2lf\n", neuron.input1);
// //     return 0;
// // }
// // #include <stdio.h>
// // typedef struct student{
// //     char name[100];
// //     double score_avg;
// //     int age;
// // }S_student;
// // int main(void){
// //     S_student Mike={"Mike",93.0,20};
// //     S_student* pMike=&Mike; //pMike point to Mike, of which type is S_student*
// //     printf("Mike average score is:%.2lf\n",(*pMike).score_avg);//method 1
// //     printf("Mike average score is:%.2lf\n", pMike->score_avg);//method 2
// //     return 0;
// // }
// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <time.h>
// // typedef struct student{
// //     char name[100];
// //     double score_avg;
// //     int age;
// // }Student;
// // int main(void){
// //     srand((unsigned int)time(NULL));
// //     int number;
// //     printf("input the number of students:"); scanf("%d",&number);
// //     Student* Arr_Student=(Student*)malloc((size_t)(number)*(sizeof(Student))); 
// //     if(Arr_Student==NULL) return -1;
// //     for(int i=0; i<number; i++){
// //         Arr_Student[i].score_avg=rand()%21+80;
// //     }
// //     for(int i=0; i<number; i++){
// //         printf("#%d's average score is:%.2lf\n",i+1, Arr_Student[i].score_avg);
// //     }
// //     //INPORTANT
// //     free(Arr_Student);
// //     Arr_Student=NULL;
// //     return 0;
// // }
// // struct marks {
// //   double labs[10];
// //   double exams[2];
// // };
// // struct Student{
// //     char* name;
// //     int id;
// //     struct marks grades;
// // }test, allStudents[500];
// // struct AnimalSizes{
// //     char* name;
// //     double length;
// // }snakes[2]={{"Anaconda",3.7},{"Python",2.4}};

// // snakes[0]=;
// // snakes[1]={"Python",2.4};

// // #include <stdio.h>
// // #include <math.h>
// // const double D2R = 3.1415926535 / 180.0;

// // typedef struct rectV {
// //     double x;
// //     double y;
// // }RectCoor;

// // typedef struct polarC {  // angle in radians
// //     double length;
// //     double deg_angle;
// // }PolarCoor;

// // RectCoor polToRec(PolarCoor polin);
// // RectCoor polToRec(PolarCoor polin){
// //     double rad_angle=polin.deg_angle*D2R;
// //     RectCoor result={polin.length*cos(rad_angle),polin.length*sin(rad_angle)};
// //     return result;
// // }
// // int main(void){
// //     PolarCoor p;
// //     RectCoor r;
// //     //printf("input the polar coordinate:");
// //     scanf("%lf%lf",&p.length,&p.deg_angle);
// //     r=polToRec(p);
// //     printf("%lf %lf\n",r.x,r.y);
// //     return 0;
// // }
// // typedef struct name {
// //   char *firstname;
// //   char *lastname;
// // } Name;

// // typedef struct employee {
// //   int SIN;
// //   int employeeNumber;
// //   Name *emplName;
// // } Empl;

// // Empl employees[1000];
// // char c=employees[1].emplName->lastname[0];
// // struct petal {
// //   int num;
// //   char color[25];
// // };
// // struct flower {
// //   char name[25];
// //   struct petal Petals;
// // }Flower={"Rose",{39, "red"}};
// // char c=((*(employees[1].emplName)).lastname)[0];

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct student {
//     char* lastName;
// } Student;
  
// void getNames(char* lastName, Student* students) {
//     for (int i = 0; i < 2; i++) {
//         printf("Enter last name: ");
//         scanf("%s", lastName);
//         students[i].lastName=(char*)malloc((size_t)(20)*sizeof(char));//create space directly for lastName in student
//         strcpy(students[i].lastName,lastName);
//     }
// }
  
// int main() {
//     Student students[2];
    
//     char* lastName = malloc(sizeof(char) * 20);
//     getNames(lastName, students);
    
//     for (int i = 0; i < 2; i++) {
//         printf("%s\n", students[i].lastName);
//     }
//     free(lastName);
//     lastName = NULL;
//     for(int i=0;i<2;i++){
//         free(students[i].lastName);
//         students[i].lastName=NULL;
//     }
//     return 0;
// }
// #include <stdio.h>
// int find_max(int*, int);
// int main(void){
//     int arr[10]={1,3,3,4,5,2,20,1,1,-12};
//     printf("largest is:\n%d\n",find_max(arr,(int)(sizeof(arr))/sizeof(int)));
//     return 0;
// }
// int find_max(int* arr, int size){
//     if(size==1) return *arr;
//     if(*arr>find_max(arr+1,size-1)) return *arr;
//     else return find_max(arr+1,size-1);
// }
// #include <stdio.h>
// struct student{
//     char* name;
//     int age;
//     double gpa;
// };
// typedef struct student Student;
// int main(void){
//     Student Jason={"Jason",10,98.0};
//     printf("gpa is %.2lf\n",Jason.gpa);
//     return 0;
// // }
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node{
//     int data;
//     struct node *next;
// }Node;
// int main(void){
//     Node firstnode;
//     firstnode.data=10;
//     firstnode.next=NULL;

//     Node secondnode;
//     secondnode.data=20;
//     secondnode.next=NULL;

//     firstnode.next=&secondnode;
//     printf("%d\n", (firstnode.next)->data);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// int main(void){
//     Node* head=NULL;
//     //create a new temperary node
//     Node* new_node=(Node*)malloc((size_t)(sizeof(Node)));
//     if(new_node==NULL) return -1;
//     head=new_node;

//     new_node=(Node*)malloc((size_t)(sizeof(Node)));
//     if(new_node==NULL) return -1;
//     head->next=new_node;

//     head->next->next=NULL;
    
//     printf("%d\n",head->next->data);
//     free(head->next); head->next=NULL;
//     free(head); head=NULL;

//     return 0;

// }
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// Node* create_new_node(int value);
// Node* create_link_list(int number);
// Node* get_nth_node(int n,Node* header);
// void free_linklist(Node* header, int n);

// int main(void){
//     int number_of_nodes;
//     printf("input the number of node to create:\n");
//     scanf("%d",&number_of_nodes);
//     //create link list, function will return the header of link list
//     Node* header=create_link_list(number_of_nodes);
//     //Get nth node's content
//     int nth; 
//     printf("Input n:\n");
//     scanf("%d",&nth);
//     printf("Nth node's content is:%d\n", get_nth_node(nth, header)->data);
//     //Free space
//     free_linklist(header,number_of_nodes);
//     return 0;
// }
// //free the space of link list
// void free_linklist(Node* header, int n) {
//     if (n <= 0 || header == NULL) {
//         return;
//     } 
//     free_linklist(header->next,n -1);
//     printf("free the node (content is %d)\n", header->data);
//     free(header); 
// }
// //get the Nth node, return Nth Node* pointer
// Node* get_nth_node(int n, Node* header){
//     Node* current=header;
//     for(int i=2; i<=n && current->next!=NULL; i++){
//         current=current->next;
//     }
//     return current;
// }
// //create number nodes, return the Node* pointer header
// Node* create_link_list(int number){
//     Node* header=NULL;
//     if(number==0) return header;
//     if(number>0){
//         header=create_new_node(1);
//         Node* current=header;
//         for(int i=2; i<=number; i++){
//             current->next=create_new_node(i);
//             current=current->next;
//         }
//         current->next=NULL;
//     }
//     return header;
// }
// //create single node, return Node* pointer to the created space
// Node* create_new_node(int value){
//     Node* new_node=(Node*)malloc((size_t)(1)*sizeof(Node));
//     if(new_node!=NULL){
//         new_node->data=value;
//         return new_node;
//     }
//     return NULL;
// }


// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node{
//     int data;
//     struct node* next;
// }Node;

// Node* create_new_node(int value);
// Node* create_link_list(int number);
// Node* get_nth_node(int n,Node* header);
// void free_linklist(Node* header, int n);

// int main(void){
//     int number_of_nodes;
//     printf("input the number of node to create:\n");
//     scanf("%d",&number_of_nodes);
    
//     //create link list, function will return the header of link list
//     Node* header=create_link_list(number_of_nodes);
    
//     //Get nth node's content
//     int nth; 
//     printf("Input n:\n");
//     scanf("%d",&nth);
//     Node* target = get_nth_node(nth, header);
//     if(target != NULL) {
//         printf("Nth node's content is:%d\n", target->data);
//     } else {
//         printf("Node not found.\n");
//     }

//     //Free space
//     free_linklist(header,number_of_nodes);
//     header = NULL; // free header
    
//     return 0;
// }

// //free the space of link list
// void free_linklist(Node* header, int n) {
//     if (n <= 0 || header == NULL) {
//         return;
//     } 
//     free_linklist(header->next, n - 1);
//     printf("free the node (content is %d)\n", header->data);
//     free(header); 
// }

// //get the Nth node, return Nth Node* pointer
// Node* get_nth_node(int n, Node* header){
//     if (header == NULL || n <= 0) return NULL;
//     Node* current=header;
//     // 从2开始循环，因为current初始已经指向第1个节点
//     for(int i=2; i<=n && current->next!=NULL; i++){
//         current=current->next;
//     }
//     return current;
// }

// //create number nodes, return the Node* pointer header
// Node* create_link_list(int number){
//     Node* header=NULL;
//     if(number<=0) return header;
    
//     if(number>0){
//         header=create_new_node(1);
//         Node* current=header;
//         for(int i=2; i<=number; i++){
//             current->next=create_new_node(i);
//             current=current->next;
//         }
//         current->next=NULL; // 封底
//     }
//     return header;
// }
// //create single node, return Node* pointer to the created space
// Node* create_new_node(int value){
//     Node* new_node=(Node*)malloc(sizeof(Node));
//     if(new_node!=NULL){
//         new_node->data=value;
//         new_node->next=NULL; // 初始化时将next设为NULL比较安全
//         return new_node;
//     }
//     return NULL;
// }
// #include <stdlib.h>
// #include <stdio.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;

// Node* create_node(int value);
// void free_linklist(Node* header);
// bool insertAtFront(Node **headPtr, int value);

// int main(void){
//     //create a 3-node link list
//     Node* header=NULL;
//     header=create_node(10);
//     header->next=create_node(20);
//     header->next->next=create_node(30);
//     header->next->next->next=NULL;

//     // //insert a node at beginning
//     // Node* new_first_node=create_node(0);
//     // new_first_node->next=header;
//     // header=new_first_node;
//     // printf("head is %d\n",header->data);
//     insertAtFront(&header,__INT_MAX__);

//     //free the space
//     free_linklist(header);
//     return 0;
// }
// bool insertAtFront(Node **headPtr, int value){ 
//     // Node** headPtr point to original header. Value is content in the new node
//     // return TRUE or FALSE
//     Node* new_first_node=create_node(value);
//     if(new_first_node==NULL) return false;
//     else if(new_first_node!=NULL){
//         new_first_node->next=*headPtr;
//         *headPtr=new_first_node;
//         printf("insert a node successfully, the content is %d\n", (*headPtr)->data);
//     }
//     return true;
// }
// Node* create_node(int value){
// //     Node* new_node=(Node*)malloc((size_t)(1)*(sizeof(Node)));
// //     if(new_node!=NULL){
// //         new_node->data=value;
// //         return new_node;
// //     }
// //     if(new_node==NULL) return NULL;
// //     return NULL;
// // }
// // void free_linklist(Node* header){
// //     if(header==NULL) return;
// //     free_linklist(header->next);
// //     free(header);
// // }


// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// // 蓝色的方块：数据节点
// typedef struct node {
//     int data;
//     struct node* next;
// } Node;

// // 灰色的方块：管理结构（控制面板）
// typedef struct {
//     Node* head;
// } LinkedList;

// bool insertAtFront(LinkedList *list, int value) {
//     // 第 2 步：创建一个新节点 temp (孤立状态)
//     Node *temp = (Node*)malloc(sizeof(Node));
    
//     // 第 3-5 步：检查内存分配是否成功
//     if (temp == NULL) {
//         return false;
//     }
    
//     // 初始化新节点的数据
//     temp->data = value;

//     // 第 6 步（核心）：将新节点连向当前的头
//     // 对应图中 temp->next 指向值为 1 的节点
//     temp->next = list->head;

//     // 第 7 步（核心）：更新管理结构的 head 指针
//     // 对应图中 list->head 重新指向 temp
//     list->head = temp;

//     return true;
// }
// int main() {
//     // 初始化管理结构（调度室）
//     LinkedList myList;
//     myList.head = NULL;

//     // 插入数据
//     insertAtFront(&myList, 2); // 链表: 2 -> NULL
//     insertAtFront(&myList, 1); // 链表: 1 -> 2 -> NULL
//     insertAtFront(&myList, 10); // 链表: 10 -> 1 -> 2 -> NULL

//     // 打印验证
//     Node* p = myList.head;
//     while(p != NULL) {
//         printf("%d -> ", p->data);
//         p = p->next;
//     }
//     printf("NULL\n");

//     return 0;
// }
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node {
//     int data;
//     struct node *next;
// } Node;

// typedef struct list {
//     Node *head;
// } LinkedList;

// Node *createNode(int value);
// bool insertAtFront(LinkedList *list, int value);
// void printList(LinkedList *list);

// int main(void) {
//     LinkedList list;
//     list.head = createNode(1);
//     (list.head)->next = createNode(2);
//     insertAtFront(&list, 0);
//     printList(&list);
//     return 0;
// }

// bool insertAtFront(LinkedList *list, int value) {
//     Node *temp = createNode(value);
//     if (temp == NULL) {
//         return false;
//     }
//     temp->next = list->head;
//     list->head = temp;
//     return true;
// }

// void printList(LinkedList *list) {
//     Node *current = list->head;

//  (current != NULL) {
//         // Print out the data at this element.
//         printf("%d ->", current->data);
//         // Move to the next element in the list.
//         current = current->next;
//     }
// }

// Node *createNode(int value) {

//     Node *newNode = (Node *)malloc(sizeof(Node));

//     if (newNode != NULL) {
//         newNode->data = value;
//         newNode->next = NULL;
//     }

//     return newNode;
// }
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct link{
//     Node* header;
// }Linklist;
// Node* create_one_node(int value);
// bool insert_at_end(Linklist* list, int value);

// int main(void){
//     Linklist list;
//     list.header=create_one_node(10);
//     list.header->next=create_one_node(20);
//     list.header->next->next=create_one_node(30);
//     list.header->next->next->next=NULL;
// }
// bool insert_at_end(Linklist* list, int value) {
//     // 1. 先造节点，万一内存满了就早点退出
//     Node* temp = create_one_node(value);
//     if (temp == NULL) return false;
//     temp->next = NULL; // 确保新节点的尾部是干净的

//     // 2. 特殊情况：如果是空链表，新节点就是头
//     if (list->header == NULL) {
//         list->header = temp;
//         return true;
//     }

//     // 3. 普通情况：顺着链表找到那个 next 为 NULL 的倒霉蛋
//     Node* end = list->header;
//     while (end->next != NULL) {
//         end = end->next;
//     }

//     // 4. 把新节点焊在它后面
//     end->next = temp;
//     return true;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct link{
//     struct node* header;
// }Linkedlist;
// Node* create_one_node(int value);
// bool delete_lastnode(Linkedlist* list);

// int main(void){
//     Linkedlist link;
//     link.header=create_one_node(10);
//     link.header->next=create_one_node(20);
//     link.header->next->next=create_one_node(30);
//     link.header->next->next->next=NULL;
    
//     printf("now the first node is %d\n",link.header->data);
//     return 0;
// }
//delete all nodes
// bool delete_all_nodes(Linkedlist* list){
//     //if there's no node, cannot delete
//     if(list->header==NULL || list==NULL) return false;
//     //normal case
//     Node* current=list->header;
//     Node* next;
//     while(current!=NULL){
//         next=current->next;
//         free(current);
//         current=next;
//     }
// }
// bool deleteFirstMatch(LinkedList *list, int searchVal) {
//     //if there's no node in the list
//     if (list->head == NULL) {
//         return false;
//     }
//     // The first node matches the value.
//     if (list->head->data == searchVal) {
//         deleteFront(list);
//         return true;
//     }

//     // Search for a node that matches the value, but maintain a pointer to the
//     // node just before it.
//     Node *current = list->head;
//     while (current->next != NULL && current->next->data != searchVal) {
//         current = current->next;
//     }

//     // current now points to a node just before the node that matched, 
//     // OR current points to the last node.
//     if (current->next != NULL) {
//         // current does not point to the last node.
//         Node *temp = current->next; // temp is the node we must delete.
//         current->next = temp->next; // Update n so that temp is no longer linked.
//         free(temp);

//         return true;
//     }

//     return false;
// }
// Node* create_one_node(int value){
//     Node* temp=(Node*)malloc(sizeof(Node));
//     if(temp!=NULL){
//         temp->data=value;
//         temp->next=NULL;
//         return temp;
//     }
//     return NULL;
// }
// bool delete_second_last(Linkedlist* list){
//     //if the length of the list is 0 and 1
//     if(list->header==NULL || list->header->next=NULL) return false;
//     //if the length of the list is 2
//     if(list->header->next->next==NULL){
//         Node* temp=list->header;
//         list->header=list->header->next;
//         free(temp);
//         temp=NULL;
//         return true;
//     }
//     //normal case
//     Node* second_last=list->header;
//     while(second_last->next->next!=NULL){
//         second_last=second_last->next;
//     }
//     Node* third_last=list->header;
//     while(third_last->next->next->next!=NULL){
//         third_last=third_last->next;
//     }
//     third_last->next=second_last->next;
//     free(second_last);
//     second_last=NULL;
//     third_last=NULL;
//     return true;
// }
// #include <stdio.h>
// void print_row(int n){
//     if(n==0) {printf("\n");return;}
//     printf("*");
//     print_row(n-1);
// }
// void print_trangle(int n){
//     if(n==0){ return ;}
//     print_row(n);
//     print_trangle(n-1);
//     print_row(n);
// }
// int main(void){
//     int n;
//     printf("input n\n"); 
//     scanf("%d",&n);
//    // print_row(n);
//    print_trangle(n);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int find_index(int* arr, int target, int size){
//     if(size==0 || arr[0]==target) return 0;
//     return (find_index(arr+1, target, size-1)+1);
// }
// int main(void){
//     srand((unsigned int)time(NULL));
//     int array[20];
//     for(int i=0; i<20; i++) {array[i]=rand()%100+0; printf("%d ",array[i]);};
//     int target=0; 
//     printf("\ninput target:\n");scanf("%d",&target);
//     printf("index is %d\n",find_index(array,target,(int)(sizeof(array)/sizeof(int))));
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     struct node* header;
// }LinkedList;
// bool insert_sorted(LinkedList* list, int new_value);
// Node* create_one_node(int new_value);

// int main(void){
//     LinkedList list;
//     // list.header=create_one_node(10);
//     // list.header->next=create_one_node(20);
//     // list.header->next->next=create_one_node(30);
//     //function
//     insert_sorted(&list,25);
//     return 0;
// }
// bool insert_sorted(LinkedList* list, int new_value){
//     //insert in the begining 1. no initially 2. the second is larger than new
//     if(list->header==NULL){
//         Node* new=create_one_node(new_value);
//         list->header=new;
//         printf("%d\n",list->header->data);
//         return true;
//     }
//     if(list->header!=NULL && list->header->data > new_value){
//         Node* new=create_one_node(new_value);
//         new->next=list->header;
//         list->header=new;
//         printf("%d %d\n",list->header->data, list->header->next->data);
//         return true;
//     }
//     //normal case 1. there's position 2. insert in the end 
//     Node* temp=list->header;
//     for(int i=0; temp!=NULL && temp->next!=NULL && temp->next->data<new_value; i++){
//         temp=temp->next;
//     }
//     Node* new=create_one_node(new_value);
//     new->next=temp->next;
//     temp->next=new;
//     printf("%d %d\n", temp->data, temp->next->data);
//     return true;

// }
// Node* create_one_node(int new_value){
//     Node* new_node=(Node*)malloc(sizeof(Node));
//     if(new_node==NULL) return NULL;
//     if(new_node!=NULL){
//         new_node->next=NULL;
//         new_node->data=new_value;
//         return new_node;
//     }
//     return NULL;
// }

// void print(LinkedList* list){
    
// }
// int calculate_sum(Node* header){
//     // //if there's no node in the linked list 
//     // if(list->header==NULL){
//     //     return 0;
//     // }
//     // //normal case
//     // int result=0;
//     // Node* trace=list->header;
//     // for(int i=0; trace!=NULL; i++){
//     //     result+=(trace->data);
//     //     trace=trace->next;
//     // }
//     // return result;
    
//     if(header==NULL) return 0;
//     return header->data+calculate_sum(header->next);
// }
// Node* create_node(int value){
//     Node* new_node=(Node*)malloc(sizeof(Node));
//     if(new_node!=NULL){
//         new_node->next=NULL;
//         new_node->data=value;
//         return new_node;
//     }
//     return 
// #include <stdio.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     struct node* header;
// }LinkedList;
// Node* create_node

// int main(void){

// }
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     struct node* header;
// }LinkedList;
// Node* create_node(int value);
// // int calculate_sum(Node* list);
// //void print(LinkedList* list);
// void print_link(Node* list);


// int main(void){
//     LinkedList list;
//     list.header=create_node(10);
//     list.header->next=create_node(20);
//     list.header->next->next=create_node(30);
//     list.header->next->next->next=NULL;
//     print_link(list.header);
//     printf("\n");
//  //   printf("the sum of the content in linked list is: %d\n", calculate_sum(list.header));
//     return 0;
// }
// void print_link(Node* header){
//     if(header==NULL) return;
//     if(header->next!=NULL)printf("%d->",header->data);
//     else if(header->next==NULL) printf("%d",header->data);
//     print_link(header->next);
// }
// Node* create_node(int new_value){
//     Node* new_node=(Node*)malloc(sizeof(Node));
//     if(new_node==NULL) return NULL;
//     if(new_node!=NULL){
//         new_node->next=NULL;
//         new_node->data=new_value;
//         return new_node;
//     }
//     return NULL;
// }
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// typedef struct student{
//     double height;
//     int age;
//     char name[100];
// }Student;
// int main(void){
//     srand((unsigned int)time(NULL));
//     Student class[50];
//     // for(int i=0; i<50; i++){
//     //     class[i].age=rand()%30+10;
//     //     printf("student%d's age is %d\n",i,class[i].age);
//     // }
//     for(Student* i=class; i<class+50; i++){
//         (*i).age=rand()%30+10;
//         printf("student%d's age is %d\n", (int)(i-class),(*i).age);
//     }
//     return 0;
// }
// #include <stdio.h>
// void print_binary(int n);
// int main(void){
//     int temp;

//     printf("intput the interget:\n");
//     scanf("%d",&temp);
//     print_binary(temp); printf("\n");
//     return 0;
// }
// void print_binary(int number){
//     if(number==0) return;
//     print_binary(number/2);
//     printf("%d",number%2);
// }


// #include <stdio.h>
// #include <string.h>
// void reverse_print(char *s);
// void get_string(char* st, int max_size);
// #define MAX_SIZE 1000
// int main(void){
//     char st[MAX_SIZE];
//     printf("input the string:\n");
//     get_string(st, MAX_SIZE);
//     reverse_print(st);
//     printf("\n");
//     return 0;
// }
// void get_string(char* st, int maxsize){
//     if(fgets(st,maxsize,stdin)!=NULL){
//         char* temp=strchr(st, '\n');
//         if(temp!=NULL){
//             *temp='\0';
//         }
//         if(temp==NULL){
//             while(getchar()!='\n'){};
//         }
//     }
// }
// void reverse_print(char* st){
//     if(st[0]=='\0') return;
//     reverse_print(st+1);
//     printf("%c",st[0]);
// }

// #include <stdio.h>
// int sum_digits(int n);
// int main(void){
//     printf("input the integer:\n");
//     int n;
//     scanf("%d",&n);
//     printf("%d\n", sum_digits(n));
//     return 0;
// }
// int sum_digits(int number){
//     if(number==0) return 0;
//     return number%10+sum_digits(number/10);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     struct node* header;
// }Linkedlist;
// void print(Node* header);
// Node* create_one_node(int new_value);
// bool delete_by_value(Linkedlist* list, int target);

// int main(void){
//     Linkedlist list;
//     list.header=create_one_node(10);
//     list.header->next=create_one_node(20);
//     list.header->next->next=create_one_node(30);
    

//     delete_by_value(&list, 20);
//     return 0;
// }
// bool delete_by_value(Linkedlist* list, int target){
//     //if the linked list is empty
//     if(list->header==NULL){
//         printf("there's no target to deleted\n");
//         return false;
//     }
//     //if the first node is the target
//     if(list->header!=NULL && list->header->data==target){
//         Node* temp=list->header;//temp store the address for later free()
//         list->header=list->header->next;
//         free(temp);
//         temp=NULL;
//         print(list->header);
//         return true;
//     }
//     //normal case 1.cannot find target 2. can find target
//     Node* previous=list->header;
//     Node* current=list->header->next;
//     bool found=false;
//     for(int i=0; current!=NULL; i++){
//         if(current->data==target){
//             found=true;
//             break;
//         }
//         previous=previous->next;
//         current=current->next;
//     }
//     if(found==false){
//         printf("out of boundary");
//         return false;
//     }
//     Node* free_temp=previous->next;
//     previous->next=previous->next->next;
//     free(free_temp);
//     free_temp=NULL;
//     current=NULL;
//     previous=NULL;
//     print(list->header);
//     return true;
// }
// Node* create_one_node(int new_value){
//     Node* new_node=(Node*)malloc(sizeof(Node));
//     if(new_node!=NULL){
//         new_node->next=NULL;
//         new_node->data=new_value;
//         return new_node;
//     }
//     return NULL;
// }
// void print(Node* header){
//     if(header==NULL) return;
//     printf("%d ", header->data);
//     print(header->next);
// }
// bool insert_at_index(Linkedlist* list, int val, int index){
//     //if insert in the beginning
//     if(list->header==NULL && index>0){ //empty but index!=0
//         printf("out of boundary\n");
//         return false;
//     }
//     if(list->header==NULL && index==0){//empty but index==0
//         list->header=create_one_node(val);
//         print(list->header);
//         return true;
//     }
//     if(list->header!=NULL && index==0){//not empty but index==0;
//         Node* new_node=create_one_node(val);
//         new_node->next=list->header;
//         list->header=new_node;
//         print(list->header);
//         return true;
//     } 
//     //normal case
//     Node* temp=list->header;
//     for(int i=0; i<index-1 && temp!=NULL; i++){
//         temp=temp->next;
//     }
//     if(temp==NULL) {
//         printf("out of boundary\n");
//         return false;
//     }
//     Node* new_node=create_one_node(val);
//     new_node->next=temp->next;
//     temp->next=new_node;
//     print(list->header);
//     return true;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     struct node* header;
// }Linkedlist;
// int print_linkedlist(Linkedlist* list);
// Node* create_node(int value);
// bool delete_target(Linkedlist* list, int targ);

// int main(void){
//     Linkedlist list;
//     list.header=create_node(20);
//     list.header->next=create_node(20);
//     list.header->next->next=create_node(20);
//     list.header->next->next->next=create_node(20);
//     list.header->next->next->next->next=create_node(20);
//     printf("created linked list: "); int length=print_linkedlist(&list);
//     printf("length: %d\n",length);
//     delete_target(&list, 20);
//     return 0;
// }

// bool delete_target(Linkedlist* list, int targ) {
//     //if the linked list is empty
//     if (list->header == NULL) return false;

//     //create dummy node in the front
//     Node dummy; 
//     dummy.next = list->header;
    
//     Node* prev = &dummy;
//     Node* curr = dummy.next;

//     while (curr != NULL) {
//         if (curr->data == targ) {
//             prev->next = curr->next;
//             free(curr);
//             curr = prev->next; //
//         } else {
//             prev = curr;
//             curr = curr->next;
//         }
//     }

//     //update the original list->header, currently, the header should be dummy.next;
//     list->header = dummy.next;
//     printf("After deletion: "); print_linkedlist(list);
//     return true;
// }
// int print_linkedlist(Linkedlist* list){
//     Node* temp=list->header;
//     int i;
//     for(i=0; temp!=NULL; i++){
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
//     if(i==0) printf("N/A");
//     printf("\n");
//     return i;
// }
// Node* create_node(int value){
//     Node* newnode=(Node*)malloc(sizeof(Node));
//     if(newnode!=NULL){
//         newnode->next=NULL;
//         newnode->data=value;
//         return newnode;
//     }
//     return NULL;
// }
// #include <stdio.h>

// // 插入排序函数
// void insertionSort(int arr[], int n) {
//     int i, key, j;
//     for (i = 1; i < n; i++) {
//         key = arr[i]; // 当前待插入的元素
//         j = i - 1;

//         /* 将大于 key 的元素向后移动一位 */
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         // 将 key 插入到正确位置
//         arr[j + 1] = key;
//     }
// }

// // 辅助函数：打印数组
// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("原始数组: \n");
//     printArray(arr, n);

//     insertionSort(arr, n);

//     printf("排序后的数组: \n");
//     printArray(arr, n);

//     return 0;
// }
// #include <stdio.h>
// #include <stdbool.h>
// void sort_arr(int* arr, int size);
// void print_arr(int* arr, int size);
// int main(void){
//     int arr[5]={12,11,13,5,6};
//     sort_arr(arr, (int)(sizeof(arr)/sizeof(int)));
//     return 0;
// }
// void sort_arr(int* arr, int size){
//     int key, index;
//     for(int i=1; i<size; i++){
        
//         key=arr[i];
//         index=i-1;//one before key
//         while(index>=0 && arr[index]>key){ //if arr[index] larger than key, move backward 
//             arr[index+1]=arr[index]; 
//             index--;
//         }
//         arr[index+1]=key; //insert key into the right position
//         print_arr(arr, size);
//     }
// }
// void sort_arr(int* arr, int size){
//     for(int i=1; i<size; i++){
//         int target=arr[i];
//         int j;
//         for(j=i-1; j>=0 && arr[j]>target; j--){  //continue only: 1.j>=0 2.the jth number is larger than target
//             arr[j+1]=arr[j];//move the larger number backward
                
//         }
//         arr[j+1]=target;//insert into the right location
//         print_arr(arr,size);
//     }
// }
// void sort_arr(int* arr, int size){
//     for(int i=1; i<size; i++){
//         int target=arr[i];
//         int j;
//         for(j=i-1; j>=0 && arr[j]>target; j--){
//             arr[j+1]=arr[j];
//         }
//         arr[j+1]=target;
//         print_arr(arr,size);
//     }
// }
// void sort_arr(int* arr, int size){
//     for(int start=0; start<size-1; start++){
//         int min_index=-1;
//         int min=__INT_MAX__;
//         for(int i=start; i<size; i++){
//             if(arr[i]<min){
//                 min=arr[i];
//                 min_index=i;
//             }
//         }
//         int temp=arr[min_index];
//         arr[min_index]=arr[start];
//         arr[start]=temp;
//         print_arr(arr,size);
//     }
// }
// void sort_arr(int* arr, int size){
//     for(int i=0; i<size-1; i++){
//         bool swap_or_not=false;
//         for(int j=0; j<size-1; j++){
//             if(arr[j]>arr[j+1]){ //if the front is larger than latter one, swap
//                 swap_or_not=true;
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//         if(swap_or_not==false) break; //if there's no swap in one round, which means in order already
//         print_arr(arr, size);
//     }
//     print_arr(arr, size);
// }
/*
void sort_arr(int* arr, int size){
    //insert sort
    for(int i=1; i<size; i++){
        int target=arr[i],j;
        for(j=i-1; j>=0 && arr[j]>target; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=target;
        print_arr(arr, size);
    }
}
*/
// void sort_arr(int* arr, int size){
//     for(int i=0; i<size-1; i++){
//         int min_index=-1;
//         int min=__INT_MAX__;
//         for(int j=i; j<size; j++){
//             if(arr[j]<min){
//                 min_index=j;
//                 min=arr[j];
//             }
//         }
//         //swap
//         int temp=arr[min_index];
//         arr[min_index]=arr[i];
//         arr[i]=temp;
//         print_arr(arr,size);
//     }
// }
// void sort_arr(int* arr, int size){
//     for(int i=0; i<size-1; i++){
//         bool mark_swap=false;
//         for(int j=0; j<size-1; j++){
//             if(arr[j]>arr[j+1]){
//                 mark_swap=true;
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         if(mark_swap==false) break;
//         print_arr(arr,size);
//     }
// }
// void print_arr(int* arr, int size){
//     for(int i=0; i<size;i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <stdbool.h>
// void sort_arr(int* arr, int size);
// void print_arr(int* arr, int size);
// int find_target(int* arr, int low, int high, int target);
// int main(void){
//     int arr[50];
//     int size_arr=(int)(sizeof(arr)/sizeof(int));
//     for(int i=0; i<size_arr; i++){
//         arr[i]=i*2;
//     }
//     print_arr(arr, size_arr);
//     sort_arr(arr, size_arr);
//     print_arr(arr,size_arr);
//     int target; 
//     printf("input the number to find: ");
//     scanf("%d",&target);
//     printf("the index of the target is: %d\n", find_target(arr, 0, size_arr-1, target));
//     return 0;
// }
// int find_target(int* arr, int size, int target){
//     int time;
//     int bottom=0, top=size-1, mid;
//     for(time=1; bottom<=top; time++){
//         mid=(bottom+top)/2;
//         if(arr[mid]==target){
//             break;
//         }
//         if(arr[mid]<target){
//             bottom=mid+1;
//         }
//         if(arr[mid]>target){
//             top=mid-1;
//         }
//     }
//     printf("after %d times\n", time);
//     return mid;
// }
// int find_target(int* arr, int size, int target) {
//     int time, bottom=0, top=size-1, mid;
//     for(time=1; bottom<=top; time++){
//         mid=bottom+(top-bottom)/2; //avoid two larger integer add together, and overflow
//         if(arr[mid]==target){
//             printf("after %d times\n", time);
//             return mid;
//         }
//         if(arr[mid]<target){ //if middle value is smaller, range=(mid+1, top)
//             bottom=mid+1;
//         }
//         if(arr[mid]>target){ //if middle value is larger, range=(bottom, mid-1)
//             top=mid-1;
//         }
//     }
//     printf("cannot find\n");
//     return -1;
// }
// int find_target(int* arr, int low, int high, int target){
//     if(high<low) return -1;
//     //if there's no target
    
//     int mid=low+(high-low)/2;

//     if(arr[mid]==target) return mid;
//     //if the target is found

//     if(arr[mid]<target) return find_target(arr, mid+1, high, target); 
//     //if mid-value is smaller, return Result from the latter half

//     if(arr[mid]>target) return find_target(arr, low, mid-1, target);
//     //if mid-value is larger, return Result from the front half
// }
// void sort_arr(int* arr, int size){
//     for(int i=1; i<size; i++){
//         int target=arr[i],j;
//         for(j=i-1; j>=0 && arr[j]>target; j--){
//             arr[j+1]=arr[j];
//         }
//         arr[j+1]=target;
//     }
// }
// void print_arr(int* arr, int size){
//     for(int* i=arr; i<arr+size; i++){
//         printf("%d ",*i);
//     }
//     printf("\n");
// }
// #include <stdio.h>
// #include <stdbool.h>
// // void swap(int* a, int* b);
// // void sort_arr(int* arr, int size);
// int find(int*, int, int);
// int main(void){
//     int arr[]={5,1,3,7,9};
//     int target;
//     printf("input the target: ");  scanf("%d",&target);
//   //  printf("\n");
//     int index=find(arr, (int)(sizeof(arr)/sizeof(int)), target);
//    // printf("\n");
//     if(index!=-1) printf("target index is %d\n", index);
//     else printf("cannot find\n");
//     return 0;
// }
// int find(int* arr, int size, int target) {
//     int bottom = 0;
//     int top = size - 1;
//     int mid;

//     // 使用 while 循环处理二分逻辑，更符合习惯
//     while (bottom <= top) {
//         // 防止溢出的写法：mid = bottom + (top - bottom) / 2; 
//         // 你的写法已经是正确的
//         mid = bottom + (top - bottom) / 2;

//         if (arr[mid] == target) {
//             return mid; // 直接返回索引
//         } 
//         else if (arr[mid] > target) {
//             top = mid - 1; // 目标在左半区
//         } 
//         else {
//             bottom = mid + 1; // 目标在右半区
//         }
//     }

//     return -1; // 循环结束未找到
// }
// void sort_arr(int* arr, int size){
//     // for(int i=1; i<size; i++){
//     //     int target=arr[i],j;
//     //     for(j=i-1; j>=0 && arr[j]>target; j--){
//     //             arr[j+1]=arr[j];
//     //     }
//     //     arr[j+1]=target;
//     // }
//     // for(int i=1; i<size; i++){
//     //     int temp=arr[i], j=i-1;
//     //     while(j>=0 && arr[j]>temp){
//     //         arr[j+1]=arr[j];
//     //         j--;
//     //     }
//     //     arr[j+1]=temp;
//     // }
//     // for(int i=0; i<size-1; i++){
//     //     int round_min=__INT_MAX__;
//     //     int min_index=-1;
//     //     for(int j=i; j<size-1; j++){
//     //         if(arr[j]<round_min){
//     //             round_min=arr[j];
//     //             min_index=j;
//     //         }
            
//     //     }
//     //     swap(&arr[i],&arr[min_index]);
//     // }
//     for(int i=0; i<size; i++){
//         int swap_round=0;
//         for(int j=0; j<size; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(&arr[j],&arr[j+1]);
//                 swap_round++;
//             }
//         }
//         if(swap_round==0) return;
//     }
// }
// void swap(int* a, int* b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//     return;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     struct node* header;
// }LinkedList;
// Node* create_node(int value);
// size_t print_linkedlist(LinkedList* list);
// bool insert_tail(LinkedList* list , int value);
// bool insert_head(LinkedList* list, int value);
// bool insert_at_index(LinkedList* list, int index, int value);

// int main(void){
//     LinkedList list;
//     list.header=create_node(10);
//     // list.header->next=create_node(20);
//     // list.header->next->next=create_node(30);
//     print_linkedlist(&list);

//     int new_value; printf("input new value: "); scanf("%d", &new_value);
//     //insert_tail(&list, new_value);
//     int index; printf("input the index:"); scanf("%d",&index);

//     insert_at_index(&list, index, new_value);
//     print_linkedlist(&list);
//     return 0;
// }

// bool insert_at_index(LinkedList* list, int index, int value){
//     //if the index is not eligle
//     if(index<0){
//         printf("index is not legal\n");
//         return false;
//     }
//     //if the linked list is empty && index==0
//     if(list->header==NULL && index==0){
//         Node* new_node=create_node(value);
//         if(new_node!=NULL){
//             list->header=new_node;
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     //if the linked list is empty && index!=0
//     if(list->header==NULL && index!=0){
//         printf("out of bound\n");
//         return false;
//     }
//     //if the linked list is not empty && index==0
//     if(list->header!=NULL && index==0){
//         Node* new_node=create_node(value);
//         if(new_node!=NULL){
//             new_node->next=list->header;
//             list->header=new_node;
//             return true;
//         }else{
//             return false;
//         }
//     }
//     //normal case 1.the index is out of boundary 2. the index is ok
//     Node* temp=list->header;
//     int times=0;
//     while(temp!=NULL && times<index-1){
//         temp=temp->next;
//         times++;
//     }
//     if(temp==NULL){
//         printf("index out of bound\n");
//         return false;
//     }
//     else{
//         Node* new_node=create_node(value);
//         if(new_node!=NULL){
//             new_node->next=temp->next;
//             temp->next=new_node;
//             return true;
//         }else{
//             return false;
//         }
//     }
    
// }
// bool insert_head(LinkedList* list, int value){
//     Node* new_node=create_node(value);
//     if(new_node!=NULL){
//         new_node->next=list->header;
//         list->header=new_node;
//         return true;
//     }else{
//         return false;
//     }
// }
// bool insert_tail(LinkedList* list , int value){
//     //if the linked list is empty 
//     if(list->header==NULL){
//         Node* new_node=create_node(value);
//         if(new_node!=NULL){
//             list->header=new_node;
//         }
//         else return false;
//         return true;
//     }
//     //normal case
//     Node* temp=list->header;
//     while(temp->next != NULL){
//         temp=temp->next;
//     }
//     Node* new_node=create_node(value);
//     if(new_node!=NULL){
//         temp->next=new_node;
//     }else {
//         return false;
//     }
//     return true;
// }

// size_t print_linkedlist(LinkedList* list){
//     Node* i=list->header;
//     size_t length=0;
//     while(i!=NULL){
//         printf("%d ", i->data);
//         i=i->next;
//         length++;
//     }
//     if(length==0){
//         printf("empty");
//     }
//     printf("\n");
//     return length;
// }
// Node* create_node(int value){
//     Node* new=(Node*)malloc((size_t)(sizeof(Node)));
//     if(new!=NULL){
//         new->next=NULL;
//         new->data=value;
//         return new;
//     }
//     return new;
// }
// #include <stdio.h>
// #include <stdbool.h>
// int find_index(int* arr, int target, int low, int high);
// int main(void){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     printf("input a target: ");int target; scanf("%d",&target);
//     printf("index is :%d\n", find_index(arr, target, 0, (int)(sizeof(arr)/sizeof(int))-1));
// }
// int find_index(int* arr, int target, int low, int high){
//     if(low>high) return -1;
//     int mid=low+(high-low)/2;
//     if(arr[mid]==target) return mid;
//     if(arr[mid]>target) return find_index(arr, target, low, mid-1);
//     if(arr[mid]<target) return find_index(arr, target, mid+1, high);

// }

// typedef struct node {
//     int data;
//     struct node* next;
// } Node;
// typedef struct linkedList {
//     Node* head;
// } LinkedList;
// void removeTail(LinkedList* list) {
//     Node* current = list->head;
//     Node* prev = NULL;
//     if (list->head == NULL) {
//         return;
//     }
//     while (current->next != NULL) {
//         prev = current;
//         current = current->next;
//     }
//     prev->next=NULL;
//     free(current);
//     prev=NULL;
//     current=NULL;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #define SIZE 3
// bool isMagicSquare(int n, int square[][n]);
// int main(void){
//     int arr[SIZE][SIZE]={{0, 5, 4},
//                 {7 ,3, -1},
//                 {2 ,1 ,6}};
//     printf("%d\n", isMagicSquare(SIZE, arr));
// }
// bool isMagicSquare(int n, int(*square)[n]){
//     //diagonal
//     int standard=0;
//     for(int i=0; i<n; i++){
//         standard+=square[i][i];
//     }
    
//     int total=0;
//     for(int i=0; i<n; i++){
//         total+=square[i][n-1-i];
//     }
//     if(total!=standard) return false;

//     //row
//     for(int i=0; i<n; i++){
//         total=0;
//         for(int j=0; j<n; j++){
//             total+=square[i][j];
//         }
//         if(total!=standard) return false;
//     }
//     //col
//     for(int i=0; i<n; i++){
//         total=0;
//         for(int j=0; j<n; j++){
//             total+=square[j][i];
//         }
//         if(total!=standard) return false;
//     }
//     return true;
// }
// #include <stdio.h>
// void recurCount(int n);
// int main(void){
//     recurCount(10);
//     return 0;
// }
// void recurCount(int n){
//     if(n==0) return;
//     printf("Count Down: %d\n", n);
//     recurCount(n-1);
//     if(n%2==0){
//         printf("Count Up: %d\n", n/2);
//     }
    

// }
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct database {
//     int* arr;
//     int length;
//     int size;
// } Database;
// void addElement(Database* x, int num){
//     //if there's no additional space for the number
//     if(x->size==x->length){
//         int* temp_arr=(int*)malloc((size_t)((x->size*2)*sizeof(int)));
//         if(temp_arr==NULL){
//             return;
//         }else if(temp_arr!=NULL){
//             x->size*=2;
//             for(int i=0; i<x->length; i++){
//                 temp_arr[i]=(x->arr)[i];
//             }
//             free(x->arr);
//             x->arr=temp_arr;
//             temp_arr=NULL;
//             (x->arr)[x->length]=num;
//             x->length++;
//         }
//     }
//     //there's enough space for the number
//     else{
//         (x->arr)[x->length]=num;
//         x->length++;
//     }
// }
// int main(void){
    
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

// // bool isCycle(LinkedList* list){
// //     //if the linked list is empty
// //     if (list->head==NULL){
// //         return false;
// //     }
// //     //normal case
// //     Node* temp=list->head;
// //     for(;true;){
// //         temp=temp->next;
// //         if(temp==NULL || temp==list->head){
// //             break;
// //         }
// //     }
// //     if(temp==NULL) return false;
// //     else if(temp==list->head) return true;

// // }

// int main(void){

// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node {
//     int data;
//     struct node *next;
// } Node;
// typedef struct linkedlist {
//     Node *head;
//     Node *tail;
// } LinkedList;
// bool Remove(LinkedList *list, int value);
// int printList(LinkedList* list){
//     if(list->head==NULL){
//         printf("NA\n");
//         return 0;
//     }
//     int length=0;
//     Node* temp=list->head;
//     for(length=1; temp!=NULL; length++){
//         printf("%d ", temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
//     return length;
// }
// Node* create_node(int value){
//     Node* new=(Node*)malloc((size_t)(sizeof(Node)));
//     if(new!=NULL){
//         new->next=NULL;
//         new->data=value;
//         return new;
//     }
//     else if(new==NULL){
//         return NULL;
//     }
//     return NULL;
// }
// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=create_node(10);
//     list.head->next=create_node(20);
//     list.head->next->next=create_node(30);
//     printList(&list);
//     Remove(&list, 20);
//     printList(&list);
//     return 0;
// }
// bool Remove(LinkedList *list, int value) {
//     if (list->head == NULL) {
//         return false;
//     }

//     Node dummy = {-1, list->head};
//     Node* prev = &dummy;
//     Node* current = list->head;

//     while (current != NULL) {
//         if (current->data == value) {
//             break;
//         }
//         prev = current;
//         current = current->next;
//     }

//     if (current == NULL) {
//         return false;
//     }

//     // 只有在删除的是最后一个节点时，才更新 tail
//     if (current == list->tail) {
//         // 如果 prev 是 dummy，说明删掉的是唯一的节点，tail 变 NULL
//         // 否则 tail 移向它的前驱节点 prev
//         list->tail = (prev == &dummy) ? NULL : prev;
//     }

//     // 常规删除操作
//     prev->next = current->next;
//     free(current);
    
//     // 更新 head（处理删除头节点的情况）
//     list->head = dummy.next;

//     return true;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdbool.h>
// char* removeStrDuplicates(char* str, char* search);
// int main(void){
//     char st1[]="This is an apple";
//     char st2[]="is";
//     printf("result is:\n%s\n", removeStrDuplicates(st1, st2));
//     return 0;
// }
// char* removeStrDuplicates(char* str, char* search){
//     int len_str=0;
//     int len_search=0;
//     for(len_str=0; str[len_str]!='\0'; len_str++){};
//     for(len_search=0; search[len_search]!='\0'; len_search++){};
//     //printf("%d %d\n", len_str, len_search);
    
//     //make the duplicate part \0
//     for(int index=0; index<len_str-len_search; index++){
//         bool round_found=true;
//         for(int scan=0; scan<len_search; scan++){
//             if(search[scan]!=str[index+scan]){
//                 round_found=false;
//                 break;
//             }
//         }
//         if(round_found==true){
//             for(int i=0; i<len_search; i++){
//                 str[index+i]='\0';
//             }
//         }
//     }
//     //extract the rest charactors
//     char* result=(char*)malloc((size_t)(len_str+1)*sizeof(char));
//     if(result==NULL) return NULL;
//     int number=0;
//     for(int i=0; i<len_str; i++){
//         if(str[i]!='\0'){
//             result[number]=str[i];
//             number++;
//         }
//     }
//     result[number]='\0';

//     //duplicate back
//     for(int i=0; i<len_str;i++){
//         str[i]='\0';
//     }
//     strcpy(str, result);
//     free(result);
//     result=NULL;
//     return str;

// }
// #include <stdio.h>
// #include <string.h>
// void mergeLines(char* merged, char* lineOne, char* lineTwo);
// int main(void){
//     char merge[100];
//     char lineOne[]= "ALZ";
//     char lineTwo[]="CPQ";
//     mergeLines(merge, lineOne, lineTwo);
//     printf("%s\n", merge);
//     return 0;
// }   


// void mergeLines(char* merged, char* lineOne, char* lineTwo) {
//     if(lineOne[0]=='\0' && lineTwo[0]=='\0'){
//         return;
//     }
//     else if(lineOne[0]=='\0' && lineTwo[0]!='\0'){
//         strncat(merged, lineTwo, strlen(lineTwo));
//         return ;
//     }
//     else if(lineOne[0]!='\0' && lineTwo[0]=='\0'){
//         strncat(merged, lineOne, strlen(lineOne));
//         return ;
//     }
//     else if(lineOne[0]>lineTwo[0]){
//         merged[0]=lineTwo[0];
//         mergeLines(merged+1, lineOne+1, lineTwo+1);
//     }else if(lineOne[0]<lineTwo[0]){
//         merged[0]=lineOne[0];
//         mergeLines(merged+1, lineOne+1, lineTwo+1);
//     }
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
// } LinkedList;
// Node* create(int value){
//     Node* new=(Node*)malloc((sizeof(Node)));
//     if(new!=NULL){
//         new->next=NULL;
//         new->data=value;
//         return new;
//     }
//     return new;
// }
// void print_list(LinkedList* list){
//     if(list->head==NULL) printf("NA\n");
//     Node* temp=list->head;
//     while(temp!=NULL){
//         printf("%d ", temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
//     return;
// }
// void fixOrder(LinkedList* list);

// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=create(7);
//     list.head->next=create(3);
//     // list.head->next->next=create(3);
//     // list.head->next->next->next=create(7);
//     print_list(&list);
//     fixOrder(&list);
//     print_list(&list);
//     return 0;
// }

// void fixOrder(LinkedList* list){
//     //if the linked list is empty 
//     if(list->head==NULL || list->head->next==NULL){
//         return;
//     }
//     //normal case

//     Node dummy={-1, list->head};
//     Node* prepre=&dummy;
//     Node* prev=dummy.next;
//     Node* current=dummy.next->next;
//     while(current!=NULL){
//         if(prev->data > current->data){
//             //swap the node;
//             Node* first=current;
//             Node* second=prev;
//             Node* third=current->next;
//             prepre->next=first;
//             first->next=second;
//             second->next=third;
//         }
//         prepre=prev;
//         prev=current;
//         current=current->next;
//     }
//     list->head=dummy.next;
//     dummy.next=NULL;
// }]
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct List{
//     struct node* head;
// }LinkedList;
// int print_list(Node* list);
// Node* create(int value);
// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=create(10);
//     list.head->next=create(20);
//     list.head->next->next=create(30);
//     print_list(list.head);
//     //printf("\nlength=%d\n",length);
//     return 0;
// }

// int print_list(Node list){
//     if(list==NULL) return 0;
//     printf("%d ", list->data);
//     return 1+print_list(list->next);

//     // if(list->head==NULL){
//     //     printf("NA\n");
//     //     return 0;
//     // }
//     // Node* temp=list->head;
//     // int length=0;
//     // while(temp!=NULL){
//     //     length++;
//     //     printf("%d ", temp->data);
//     //     temp=temp->next;
//     // }
//     // printf("\n");
//     // return length;
// }
// Node* create(int value){
//     Node* new=(Node*)malloc(sizeof(Node));
//     if(new!=NULL){
//         new->next=NULL;
//         new->data=value;
//         return new;
//     }
//     return NULL;
// }
// struct Node{
//     double resistance;
//     double reactance;
//     double voltage;
//     struct Node *next;
// };
// double calculateMagnitude (double resistance, double reactance){
//     return sqrt(pow(resistance, 2) + pow(reactance, 2));
// }
// double equivalentMagnitude (struct Node *ptr, int n){
//     double result=0.0;
//     for(int i=0; ptr!=NULL && i<n; i++){
//         result+=calculateMagnitude(ptr->resistance, ptr->reactance);
//         ptr=ptr->next;
 
//     }
//     return result;
// }
// #include <stdio.h>
// int diagonalSum(int size, int(*arr)[size]);
// int main(void){
//     int arr[4][4];
//     int count=0;
//     for(int i=0; i<4; i++){
//         for(int j=0; j<4; j++){
//             arr[i][j]=count;
//             count++;
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("result is %d",diagonalSum(4,arr));
// }
// int diagonalSum(int size, int(*arr)[size]){
//     int result=0;
//     for(int i=0; i<size; i++){
//             result+=(arr[i][i]+arr[i][size-1-i]);
//     }
//     return result;
// }
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int sortArray(int inArray[],int outArray[], int sizeOfInArray){
//     int countArray[600];
//     for(int i=0; i<600; i++) countArray[i]=0;
//     for(int i=0; i<sizeOfInArray; i++){
//         countArray[inArray[i]]++;
//     }
//     int index=0;
//     int sizeofOUT=0;
//     for(int i=0; i<600; i++){
//         if(countArray[i]!=0){
//             sizeofOUT+=countArray[i];
//             for(int time=0; time<countArray[i]; time++){
//                 outArray[index]=i;
//                 index++;
                
//             }
//         }
//     }
//     return sizeofOUT;
// }
// int main(void){
//     int in[10];
//     int out[10];
//     for(int i=0; i<10; i++) {in[i]=rand()%600+0; printf("%d ", in[i]);};
//     printf("\n");
//     sortArray(in, out, 10);
//     for(int i=0; i<10; i++) {printf("%d ", out[i]);};
// }
// #include <stdio.h>
// void printReverse();
// int main(void){
//     printReverse();
//     return 0;
// }
// void printReverse(){
//     printf("Enter num: ");
//     int n;
//     scanf("%d",&n);
//     if(n==0){
//         printf("Reversed sequence: ");
//         return ;
//     }
//     printReverse();
//     printf("%d ", n);
// }
// #include <stdio.h>
// #include <string.h>
// char* removeSpecialChars(char* str){
    // int size=(int)strlen(str);
    // char temp[100];
    // int index=0;
    // for(int i=0; i<size; i++){
    //     if(str[i]!='\0' && str[i]<='z' && str[i]>='a'){
    //         temp[index]=str[i];
    //         index++;
    //     }
    // }
    // temp[index]='\0';
    // for(int i=0; i<size; i++){
    //     str[i]='\0';
    // }
    // strcpy(str, temp);
//     // return str;
//     int size=(int)strlen(str);
//     for(int index=0; index<size; index++){
//         size=(int)(strlen(str));
//         if(str[index]!='\0' && (str[index]>'z' || str[index]<'a')){
//             for(int i=index; i<size; i++){
//                 str[i]=str[i+1];
//             }
//             index=index-1;
//         }
       
//     }
//     return str;
// }

// int main(void) {
//     char str[30] = "a&pp*(leisa(fr*$uit";
//     printf("str with special characters: %s\n", removeSpecialChars(str));
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int numOccurances(char* large, char* small);
// int main(void){
//     char st1[]="isumpoiissisisis";
//     char st2[]="is";
//     printf("%d\n",numOccurances(st1, st2));
// }
// int numOccurances(char* large, char* small){
//     if(strlen(large)<strlen(small)) return 0;
//     for(int i=0; i<(int)strlen(small); i++){
//         if(*(large+i)!=small[i]) {
//             return numOccurances(large+1, small)+0;
//         }
//     }
//     return numOccurances(large+strlen(small), small)+1;
// }

// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node {
//     int data;
//     struct node *next;
// } Node;
// typedef struct linkedList {
//     Node *head;
// } LinkedList;
// bool insertSequence(LinkedList *list, LinkedList *seq);
// Node* create(int value){
//     Node* new=(Node*)malloc(sizeof(Node));
//     if(new!=NULL){
//         new->data=value;
//         new->next=NULL;
//         return new;
//     }
//     return NULL;
// }
// void printlist(LinkedList* list){
//     if(list->head==NULL){
//         printf("NA\n");
//         return;
//     }
//     Node* current=list->head;
//     while(current!=NULL){
//         printf("%d ", current->data);
//         current=current->next;
//     }
//     printf("\n");
// }
// bool insertSequence(LinkedList *list, LinkedList *seq){
//     //if list is empty, seq is not empty
//     if(list->head==NULL && seq->head!=NULL){
//         return false;
//     }
//     //if seq is empty
//     if(seq->head==NULL){
//         return true;
//     }

//     //normal case
//     Node* last_seq=seq->head;
//     while(last_seq->next!=NULL){
//         last_seq=last_seq->next;
//     }
//     int smallest=seq->head->data;
//     int largest=last_seq->data;

//     Node dummy={-__INT_MAX__, list->head};
//     Node* prev=&dummy; 
//     Node* current=dummy.next;
//     while(current!=NULL){
//         if(current->data>largest && prev->data<smallest){
//             //insert
//             prev->next=seq->head;
//             last_seq->next=current;
//             break;
//         }
//         prev=current;
//         current=current->next;
//     }

//     //insert at the end
//     if(current==NULL){
//         prev->next=seq->head;
//     }
//     //updata head
//     list->head=dummy.next;
//     dummy.next=NULL; current=NULL; prev=NULL;
//     //printlist(list);
//     return true;
// }

// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=create(5);
//     list.head->next=create(10);
//     list.head->next->next=create(20);
//     list.head->next->next->next=create(70);
//     printlist(&list);

//     LinkedList sequence;
    
//     sequence.head=NULL;
//     sequence.head=create(15);
//     sequence.head->next=create(16);
//     printlist(&sequence);

//     bool a=insertSequence(&list, &sequence);
//     printf("%d\n", a);
//     printlist(&list);
//    // printlist(&sequence);
//     return 0;   
// // }
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node {
//     int data;
//     struct node *left, *right;
// } Node;
// typedef struct binarytree {
//     Node *root;
// } BinaryTree;
// int height(BinaryTree *tree){
//     if(tree->root==NULL) return 0;//if the tree is empty
//     if(tree->root->data%2==0) return calculateheight(tree->root);//meet a even node, return subtree's height

//     BinaryTree left_subtree;
//     left_subtree.root=tree->root->left;
//     BinaryTree right_subtree;
//     right_subtree.root=tree->root->right;

//     int height_left=height(&left_subtree);
//     int height_right=height(&right_subtree);

//     if(height_left>=height_right) return height_left;
//     return height_right;
// }
// int calculateheight(Node* SubRootNode) {
//     // 第一步：先检查自己是不是空的（防止崩溃）
//     if (SubRootNode == NULL) {
//         return 0; 
//     }

//     // 第二步：递归计算左右子树的高度
//     int left_branch_height = calculateheight(SubRootNode->left);
//     int right_branch_height = calculateheight(SubRootNode->right);

//     // 第三步：返回左右中较大的那个，再加上自己这一层 (+1)
//     if (left_branch_height >= right_branch_height) {
//         return left_branch_height + 1;
//     } else {
//         return right_branch_height + 1;
//     }
// }
// int calculateheight(Node* Subrootnode){
//     if(Subrootnode==NULL){
//         return 0;
//     }
//     int left=calculateheight(Node->left);
//     int right=calculateheight(Node->right);
//     if(left>right){
//         return left+1;
//     }
//     return right+1;
// // }
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     struct node* head;
// }LinkedList;
// Node* create(int value);
// void printList(LinkedList* list);
// void free_list(LinkedList* list);
// void insert_at_index(LinkedList* list, int index, int value);

// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=create(0);
//     list.head->next=create(10);
//     list.head->next->next=create(20);
//     list.head->next->next->next=create(30);
//     while(true){
//         int n;
//         printf("input a number: ");
//         scanf("%d",&n);
//         int p;   
//         printf("input a position: ");
//         scanf("%d",&p);
//         insert_at_index(&list, p, n);
//         if(n<0) {
//             break;
//             printf("END\n");
//         }
//         printList(&list);
//     }
//     free_list(&list);
//     return 0;
// }
// void insert_at_index(LinkedList* list, int index, int value){
    // //if the linked list is empty, index=0
    // if(list->head==NULL && index==0){
    //     Node* new=create(value);
    //     list->head=new;
    //     return;
    // }
    // //if the linked list is not empty, index!=0
    // if(list->head==NULL && index!=0){
    //     printf("The index is out of boundary\n");
    //     return;
    // }
    // //if the linked list is not empty, but index==0;
    // if(list->head!=NULL && index==0){
    //     Node* new=create(value);
    //     new->next=list->head;
    //     list->head=new;
    //     return;
    // }
    // //insert at a legible position 
    // Node* current=list->head;
    // for(int i=0; current!=NULL && i<index-1; i++){
    //     current=current->next;
    // }
    // if(current==NULL){//the index is out of boundary
    //     printf("The index is out of boundary\n");
    //     return;
    // }
    // Node* Newnode=create(value);
    // Newnode->next=current->next;
    // current->next=Newnode;
//     // return;
//     Node dummy={__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     for(int i=0; prev!=NULL && i<index; i++){
//         prev=prev->next;
//     }
//     if(prev==NULL){
//         printf("Out of boundary\n");
//         return;
//     }
//     Node* new=create(value);
//     new->next=prev->next;
//     prev->next=new;
//     //update head
//     list->head=dummy.next;
//     return;
    
// }
// Node* create(int value){
//     Node* new=(Node*)malloc(sizeof(Node));
//     if(new!=NULL){
//         new->data=value;
//         new->next=NULL;
//         return new;
//     }
//     return NULL;
// }
// void printList(LinkedList* list){
//     if(list->head==NULL) printf("N/A\n");
//     Node* current=list->head;
//     while(current!=NULL){
//         printf("%d ", current->data);
//         current=current->next;
//     }
//     printf("\n");
//     return;
// }
// void free_list(LinkedList* list){
//     if(list->head==NULL){
//         return;
//     }
//     Node* current=list->head;
//     Node* after=current->next;
//     while(current!=NULL){
//         printf("free %d\n", current->data);
//         after=current->next;
//         free(current);
//         current=after;
//     }
//     current=NULL;
//     after=NULL;
//     return;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct List{
//     struct node* head;
// }LinkedList;
// Node* create(int value);
// void freelist(LinkedList* list);
// void printflist(LinkedList* list);
// bool delete_node(LinkedList* list, int target);


// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=create(10);
//     list.head->next=create(20);
//     list.head->next->next=create(30);
//     list.head->next->next->next=create(5840);
//     list.head->next->next->next->next=create(990);
//     printflist(&list);
//     int target; scanf("%d",&target);
//     delete_node(&list, target);
//     printflist(&list);
//     freelist(&list);
//     return 0;
// }
// Node* create(int value){
//     Node* new=(Node*)malloc(sizeof(Node));
//     if(new!=NULL){
//         new->next=NULL;
//         new->data=value;
//         return new;
//     }
//     return NULL;
// }
// void printflist(LinkedList* list){
//     if(list->head==NULL){
//         printf("N/A\n");
//         return;
//     }
//     Node* current=list->head;
//     while(current!=NULL){
//         printf("%d ", current->data);
//         current=current->next;
//     }
//     printf("\n");
// }
// void freelist(LinkedList* list){
//     //if the linked list is empty
//     if(list->head==NULL) return;
//     //normal case
//     Node* current=list->head;
//     Node* after=current->next;
//     while(current!=NULL){
//         after=current->next;
//         printf("free %d \n", current->data); free(current);
//         current=after;
//     }
//     list->head=NULL;
//     return;
// }
// bool delete_node(LinkedList* list, int target){
//     //if the linked list is empty
//     if(list->head==NULL){
//         printf("the linked list is empty \n");
//         return false;
//     }
//     //if the linked list contain the target
//     Node dummy={__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* current=dummy.next;
//     int count=0;
//     while(current!=NULL){
//         if(current->data==target){
//             prev->next=current->next;
//             Node* temp=current->next;
//             printf("free %d\n", current->data);
//             free(current);
//             current=temp;
//             count++;
//             continue;
//         }
//         prev=current;
//         current=current->next;
//     }
//     //if the linked list does not contain the target, CANNOT FIND
//     if(count==0){
//         printf("There's no target in the linked list\n");
//         return false;
//     }
//     //update the head;
//     list->head=dummy.next;
//     dummy.next=NULL;
//     return true;
// }
// #include <stdio.h>
//  int main(void) {
//  int x, y, z, w, *h, *i;
//  h = &z;
//  x = 20;
//  y = 60;
//  i = &w;
//  *h = x - y;
//  *i = y + *h;
// h = &x;
//  *i = y + *h - x;
// *h = y + z;
//  w -= *i;
// printf("*h = %d, x = %d, *i = %d\n", *h, x, *i);
// printf("y = %d, z = %d, w = %d\n", y, z, w);
//  return 0;
//  }
// #include <stdio.h>
// void merge(int list[], int low, int mid, int high) {
// int buffer[5] = {0};
// int startLow = low, startMid = mid + 1, i = low;
// while (startLow <= mid && startMid <= high) {
// if (list[startLow] <= list[startMid]) {
// buffer[i] = list[startLow];
// startLow++;
// } else {
// buffer[i] = list[startMid];
// startMid++;
// }
// i++;
// }
// while (startLow <= mid) {
// buffer[i] = list[startLow];
// i++;
// startLow++;
// }
// while (startMid <= high) {
// buffer[i] = list[startMid];
// i++;
// startMid++;
// }
// for (i = low; i <= high; i++) {
// list[i] = buffer[i];
// printf("%d ", list[i]);
// }
// printf("\n");
// }
// void process(int list[], int low, int high) {
// if (low < high) {
// int mid = (low + high) / 2;
// process(list, low, mid);
// process(list, mid + 1, high);
// merge(list, low, mid, high);
// } else {
// return;
// }
// }
// int main(void) {
// int list[] = {7, 3, 5, 8, 2};
// process(list, 0, 4);
// return 0;
// }
// #include <stdio.h>
// #include <string.h>
// void printNum(char *str) {
//     int i = 0;
//     while (str[i] == '0') {
//         i++;
//     }
//     int rest_size=10-i;
//     while(i>0){
//         for(int index=i; index<i+rest_size; index++){
//             str[index-1]=str[index];
//         }
//         i--;
//     }
//     printf("%s\n", str);
// }
// int main(void) {
//     char s[10] = "000089876";
//     printNum(s);
//     return 0;
// }
// #include <stdio.h>
// int main(void){
//     int result=0;
//     for(int i=1; i<=999; i++){
//         if(i%9!=0){
//             continue;
//         }
//         if(i%2!=0){
//             continue;
//         }
//         int second_digit=(i-(i/100)*100)/10;
//         if(second_digit==7) continue;
//         result+=i;
//         printf("%d\n", i);
//     }
//     printf("%d", result);
// }
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int borderSum(int mat[][26], int n);
// int main(void){
//     int arr[26][26];
//     for(int i=0; i<4; i++){
//         for(int j=0; j<4; j++){
//             arr[i][j]=rand()%10+0;
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("the sum is %d", borderSum(arr, 3));
//     return 0;
// }
// int borderSum(int(*mat)[26], int n){
//     int result=0;
//     for(int i=0; i<n; i++){
//         result+=(mat[i][0]+mat[i][n-1]);
//     }
//     for(int j=1; j<n-1; j++){
//         result+=(mat[0][j]+mat[n-1][j]);
//     }
//     return result;
// }
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// char *lastStringInString(char *s1, char *s2);
// int main(void){
//     char st1[]="ThIs Is an apple";
//     char st2[]="is";
//     printf("%s\n", lastStringInString(st2, st1));
//     return 0;
// }
// char* lastStringInString(char* s1, char* s2){
//     int size1=(int)strlen(s1);//"is"
//     int size2=(int)strlen(s2);//“This is a sample string”
//     for(int i=size2-size1; i>=0; i--){
//         bool found=true;
//         for(int index=0; index<size1; index++){
//             if(s2[i+index]!=s1[index]){
//                 found=false;
//             }
//         }
//         if(found==true) return s2+i;
//     }
//     return NULL;
// }
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// bool compareLines(const char *lineOne, const char *lineTwo);
// int main(void){
//     char lineOne[] = "Hi m    y name i.. .. .. . .. ............s Jas. . .. .. ..  .. on      ";
//     char lineTwo[] = "Hi m.. .. .. ..y nam ... ...........e is Jason ";
//     bool same=compareLines(lineOne, lineTwo);
//     if(same) printf("same\n");
//     else printf("different\n");
//     return 0;
// }
// bool compareLines(const char *lineOne, const char *lineTwo){
//     //////////skip . ////////
//     if(lineOne[0]=='.'||lineOne[0]==' '){
//         return compareLines(lineOne+1, lineTwo);
//     }
//     if(lineTwo[0]=='.'||lineTwo[0]==' '){
//         return compareLines(lineOne, lineTwo+1);
//     }

//     /////////// END CONDITION ///////////
//     //if lineOne and lineTwo end simultaneously
//     if(lineOne[0]=='\0' && lineTwo[0]=='\0'){
//         return true;
//     }
//     //end separately
//     if(lineOne[0]=='0' && lineTwo[0]!='\0'){
//         return false; 
//     }
//     if(lineOne[0]!='0' && lineTwo[0]=='\0'){
//         return false; 
//     }
    
//     //if the lineOne and Linetwo charactors are different
//     if(lineOne[0]!=lineTwo[0]){
//         return false;
//     }
//     return compareLines(lineOne+1, lineTwo+1);
// }







// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node {
//     int data;
//     struct node *left;
//     struct node *right;
// } Node;
// typedef struct bstree {
//     struct node *root;
// } BSTree;
// Node *secondSmallestNode(BSTree *tree) {
//     // 1. Handle empty tree or tree with no root
//     if (tree == NULL || tree->root == NULL) {
//         return NULL;
//     }

//     Node *curr = tree->root;
//     Node *parent = NULL;

//     // 2. Handle a tree with exactly one node
//     if (curr->left == NULL && curr->right == NULL) {
//         return NULL;
//     }

//     // 3. Traverse to the leftmost node (the smallest node)
//     // Keep track of the parent as we go down
//     while (curr->left != NULL) {
//         parent = curr;
//         curr = curr->left;
//     }

//     // 4. Scenario A: The smallest node has a right subtree
//     // In your example image, node 3 has a right child (4), so 4 is second smallest.
//     if (curr->right != NULL) {
//         curr = curr->right;
//         while (curr->left != NULL) {
//             curr = curr->left;
//         }
//         return curr;
//     }

//     // 5. Scenario B: The smallest node has no right subtree
//     // The parent is the next value up in the sorted order.
//     return parent;
// }

// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// typedef struct node {
//     int data;
//     struct node *next;
// } Node;
// typedef struct linkedList {
//     Node *head;
// } LinkedList;
// Node* create(int value){
//     Node* new=(Node*)malloc(sizeof(Node));
//     if(new!=NULL){
//         new->data=value;
//         new->next=NULL;
//         return new;
//     }
//     return NULL;
// }
// void printlist(LinkedList* list){
//     if(list->head==NULL) {
//         printf("N/A\n");
//         return;
//     }
//     Node* current=list->head;
//     while(current!=NULL){
//         printf("%d ", current->data);
//         current=current->next;
//     }
//     printf("\n");
//     return ;
// }
// void reorder(LinkedList *list);
// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=create(0);
//     list.head->next=create(50);
//     list.head->next->next=create(0);
//     list.head->next->next->next=create(0);
//     list.head->next->next->next->next=create(0);
//     list.head->next->next->next->next->next=create(0);
//     printlist(&list);
//     reorder(&list);
//     printlist(&list);
//     return 0;
// }
// void reorder(LinkedList *list){
//     //if the linked list is empty
//     if(list->head==NULL){
//         return;
//     }
//     //normal case
//     Node dummy={__INT_MAX__, list->head};
//     Node* prev=&dummy;
//     Node* current=dummy.next;
//     bool first_nonzero=false;
//     while(current!=NULL){
//         if(current->data!=0) first_nonzero=true;
//         if(current->data==0 && first_nonzero==true){
//             Node* original_head=dummy.next;
//             Node* original_next=current->next;
//             dummy.next=current;
//             dummy.next->next=original_head;
//             prev->next=original_next;
//             current=original_next;
//         }
//         else{
//             current=current->next;
//             prev=prev->next;
//         }
//     }
//     list->head=dummy.next;
//     dummy.next=NULL;
// }   

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct paper {
//     char *lastName;
//     struct paper *next;
// } Paper;
// typedef struct linkedList {
//     Paper *head;
// } LinkedList;

// void sortPapers(LinkedList *originalPile, LinkedList sortedPile[]){
//     Paper* current=originalPile->head;
//     while(current!=NULL){
//         char first_letter=current->lastName[0];
//         int index=(int)(first_letter-'A');
//         //remove from original list
//         Paper* original_next=current->next;
//         originalPile->head=original_next;

//         //insert in the front if the sortedPile[index]
//         current->next=sortedPile[index].head;
//         sortedPile[index].head=current;

//         current=original_next;
//     }
//     for(int i=0; i<26 ;i++){
//         if(sortedPile[i].head!=NULL){
//             printf("%c: ", (char)('A'+i));
//             Paper* temp=sortedPile[i].head;
//             while(temp!=NULL){
//                 printf("%s ", temp->lastName);
//                 temp=temp->next;
//             }
//             printf("\n");
//         }
//     }
// }
// #include <stdio.h>
// void sort(int*, int size);
// int main(void){
//     int arr[10]={1,4,3,6,7,9,3,5,4,1};
//     for(int i=0; i<10; i++) printf("%d ", arr[i]);
//     printf("\n");
//     sort(arr,10);
//     for(int i=0; i<10; i++) printf("%d ", arr[i]);
//     printf("\n");
//     return 0;
// }
// void sort(int* arr, int size){
//     //insert sort
//     // for(int i=1; i<size; i++){
//     //     int temp=arr[i];
//     //     int j=i-1;
//     //     while(j>=0 && arr[j]>temp){
//     //         arr[j+1]=arr[j];
//     //         j--;
//     //     }
//     //     arr[j+1]=temp;
//     // }
//     //selection sort 
//     // for(int i=0; i<size; i++){
//     //     int min=__INT_MAX__;
//     //     int index_min=-1;
//     //     for(int j=i; j<size; j++){
//     //         if(arr[j]<min){
//     //             min=arr[j];
//     //             index_min=j;
//     //         }
//     //     }
//     //     int temp=arr[i];
//     //     arr[i]=arr[index_min];
//     //     arr[index_min]=temp;
//     // }
//     //bubble sort
//     for(int i=0; i<size-1; i++){
//         for(int j=0; j<size-1; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct List{
//     struct node* head;
// }LinkedList;
// void swap_node(LinkedList* list, Node* n1, Node* n2);
// void printlist(LinkedList* list){
//     if(list->head==NULL){
//         printf("N/A\n");
//         return;
//     }
//     Node* current=list->head;
//     while(current!=NULL){
//         printf("%d ", current->data);
//         current=current->next;
//     }
//     printf("\n");
//     return;
// }
// Node* create(int value){
//     Node* new=(Node*)malloc(sizeof(Node));
//     if(new!=NULL){
//         new->next=NULL;
//         new->data=value;
//         return new;
//     }
//     return NULL;
// }
// void sort_list(LinkedList* list){
//     //if the linked list is empty 
//     if(list->head==NULL){
//         return;
//     }
//     //normal case, BUBBLE SORTING
//     Node* inode=list->head;
//     Node* jnode=list->head;
    
// }
/* 
void sort_list(LinkedList* list){
    //if linked list is empty
    if(list->head==NULL){
        return;
    }
    //normal case
    Node* indexNode=list->head;//start node of each round
    while(indexNode!=NULL){
        Node* startNode=indexNode;
        Node* maxNode=NULL; 
        int maxValue=-__INT_MAX__;
        while(startNode!=NULL){
            if(startNode->data > maxValue){
                maxValue=startNode->data;
                maxNode=startNode;
            }
            startNode=startNode->next;
        }
        printf("max number is: %d\n", maxNode->data);

        Node* temp=indexNode->next;
        swap_node(list, indexNode, maxNode);printf("swap %d and %d\n", indexNode->data, maxNode->data);
        
        indexNode=temp;
        
    }
}
  */
/* 
void swap_node(LinkedList* list, Node* n1, Node* n2){
    if(n1==n2) return;
    Node dummy={__INT_MAX__, list->head};
    //if n1 and n2 are neightbour
    if(n1->next==n2){
        Node* prev=&dummy;
        Node* after=n2->next;
        while(prev->next!=n1){
            prev=prev->next;
        }
        prev->next=n2;
        n2->next=n1;
        n1->next=after;
        list->head=dummy.next;
        return;
    }
    if(n2->next==n1){
        Node* prev=&dummy;
        Node* after=n1->next;
        while(prev->next!=n2){
            prev=prev->next;
        }
        prev->next=n1;
        n1->next=n2;
        n2->next=after;
        list->head=dummy.next;
        return;
    }

    //delete these two nodes temperarily
    Node* prev_n1=&dummy;
    while(prev_n1->next!=n1){
        prev_n1=prev_n1->next;
    }
    prev_n1->next=n1->next;

    Node* prev_n2=&dummy;
    while(prev_n2->next!=n2){
        prev_n2=prev_n2->next;
    }
    prev_n2->next=n2->next;

    //swap the n1->next and n2->next
    Node* temp=n2->next;
    n2->next=n1->next;
    n1->next=temp;

    //insert back
    prev_n1->next=n2;
    prev_n2->next=n1;

    //update the head
    list->head=dummy.next;
}
 */
// int main(void){
//     LinkedList list;
//     list.head=NULL;
//     list.head=create(0);
//     list.head->next=create(2);
//     list.head->next->next=create(3);
//     list.head->next->next->next=create(9);
//     list.head->next->next->next->next=create(10);
//     printlist(&list);
//     sort_list(&list);
//     printlist(&list);
//     return 0;
// }
// #include <stdio.h>
// #include <stdio.h>
// // this function uses a one-dimensional input array of size 6, and
// // puts values into the one-dimensional output array of size 4
// void performAI(double *inArray, double *outArray) {
//     // these are the weighting arrays as in the diagram
//     double w1[6][7] = {
//     {0.795279571, 0.565454091, 0.569392801, 0.649519912, 0.311228459, 0.869033219, 0.963890145},
//     {0.261182548, 0.967901447, 0.015463096, 0.101966965, 0.454071297, 0.396147575, 0.853833996},
//     {0.976180547, 0.762522649, 0.223067359, 0.120228416, 0.710471648, 0.220771538, 0.052876278},
//     {0.173285965, 0.795507616, 0.258332188, 0.813302777, 0.528470338, 0.885245811, 0.190564347},
//     {0.14018923, 0.324797853, 0.012649753, 0.928367252, 0.048519668, 0.321836138, 0.360198988},
//     {0.063248883, 0.72395506, 0.606492812, 0.435057638, 0.462896967, 0.12061378, 0.28806367}};
//     double w2[7][4] = {
//     {0.036340161, 0.702081192, 0.406643568, 0.383400727},
//     {0.786459022, 0.627286192, 0.190417846, 0.259622675},
//     {0.996272492, 0.115783107, 0.922042574, 0.805576672},
//     {0.254649714, 0.818737484, 0.23760355, 0.884876231},
//     {0.587934606, 0.566762923, 0.254228386, 0.735145224},
//     {0.709219708, 0.815306359, 0.395073347, 0.191438772},
//     {0.743663242, 0.969784133, 0.055612809, 0.992284824}};
//     // write your code here
//     double mid[7];
//     for(int i=0; i<7; i++){
//         double round_result=0;
//         for(int row=0; row<6; row++){
//             round_result+=(inArray[row]*w1[row][i]);
//         }
//         mid[i]=round_result;
//     }
//     for(int i=0; i<4; i++){
//         double round_result=0;
//         for(int row=0; row<7; row++){
//             round_result+=(mid[row]*w2[row][i]);
//         }
//         outArray[i]=round_result;
//     }

// }
// int main(void){
//     double inData[] = {10, 11, 14, 51, 22, 24};
//     double outData[4];
//     performAI(inData, outData);
//     for(int i=0; i<4; i++){
//         printf("%lf ", outData[i]);
//     }
//     printf("\n");
//     return 0;
// }
// #include <stdio.h>
// unsigned int generateInt(int list[], int size);
// int main(void) {
//     int list[] = {0, 3, 4, 9};
//     unsigned int result = generateInt(list, 4);
//     printf("result = %d\n", result);
//     printf("result = %x\n", result);
//     return 0;
// }
// unsigned int generateInt(int list[], int size){
//     unsigned int result=0;
//     for(int i=0; i<size; i++){
//         unsigned int temp=1;
//         for(int pow=0; pow<list[i]; pow++){
//             temp*=2;
//         }
//         result+=temp;
//     }
//     return result;
// }
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// void convert(char *input, char *output, int lineLength) ;
// int main(void) {
//     char *input = "I'd like to believe that this works just fine.\nBut then again it might not.\n";
//     char output[2048];
//     convert(input, output, 15);
//     printf("%s\n", output);
//     // Making all spaces visible by replacing them with 'X'
//     for(int i = 0; i < strlen(output); i++) {
//         if (output[i] == ' ') {
//             output[i] = 'X';
//         }
//     }
//     printf("%s\n", output);
//     return 0;
// }
// void convert(char *input, char *output, int lineLength) {
//     int start=0;
//     int end=start;
//     int currentLen=0;
//     int size=(int)strlen(input);
//     int Outindex=0;
//     while(start<size){
//         //skip the space in the front of the word
//         while(start<size && (input[start]==' ' || input[start]=='\n')){
//             start++;
//         }
//         //find the space after each word
//         while(end<size && input[end]!=' '){
//             end++;
//         }
//         int word_len=end-start;
//         //insert the word in the output array
//         if(currentLen+ word_len + 1 <= lineLength){
//             //this line is enough
//             currentLen+=(word_len+1);
//             for(int i=0; i<word_len; i++){
//                 output[Outindex]=input[start+i];
//                 Outindex++;
//             }
//             output[Outindex++]=' ';
//         }else if(currentLen!=0 && currentLen+ word_len + 1 > lineLength){
//             //this line is not enough, new line, word+space
//             currentLen=word_len+1;
//             output[Outindex]='\n';
//             Outindex++;
//             for(int i=0; i<word_len; i++){
//                 output[Outindex]=input[start+i];
//                 Outindex++;
//             }
//             output[Outindex++]=' ';
//         }
//         start=end;
//         end++;
//     }
//     output[Outindex]='\0';
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void moveforward(char* str, char* start, int index){
//     //remove the string from start forward index charactors
//     for(int i=(int)(start-str); i<((int)strlen(str)); i++){
//         str[i-index]=str[i];
//     }
//     str[strlen(str)-index]='\0';
// }
// char* removeStringFromString(char* str, char* target){
//     if(*str=='\0') return str;
//     char* found=strstr(str, target);
//     int str_targ=(int)strlen(target);
//     if(found!=NULL){
//         char* temp=found+str_targ;
//         moveforward(str, temp, str_targ);
//         return removeStringFromString(temp+1, target);
//     }else
//     {
//         return removeStringFromString(str+1, target);
//     }
    
// }
// int main(void){
//     char s[100] = "Hello World!";
//     //moveforward(s, s+2, 2);
//     //printf("%s\n",s);
//     const char *p = removeStringFromString(s, "l");
//     const char *q = removeStringFromString(s, "el");
//     printf("%s\n", p);
//    // printf("%s\n", q);
// }

/*
Heo Word!
Hlo World!
*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // 辅助函数：负责真正的递归删除逻辑
// // str: 当前正在处理的字符串（副本）
// // start: 当前检查到的下标位置
// // substr: 要删除的目标子串
// void removeStringHelper(char *str, int start, const char *substr) {
//     // 递归出口：如果检查到了字符串末尾，直接返回
//     if (str[start] == '\0') {
//         return;
//     }

//     int subLen = (int)strlen(substr);

//     // 检查从当前 start 位置开始，是否匹配 substr
//     // strncmp(a, b, n) 只比较前 n 个字符，非常适合这里
//     if (strncmp(str + start, substr, subLen) == 0) {
//         // 1. 匹配成功：执行“覆盖式删除”
//         // 将 substr 之后的所有内容（包括 '\0'）向前挪动 subLen 位
//         for (int i = start; str[i] != '\0'; i++) {
//             str[i] = str[i + subLen];
//         }

//         // 2. 关键点：删除后，【停在原地】继续递归检查
//         // 因为挪过来的新字符可能又凑成了子串，或者是连续的子串（如 "aaaa" 删 "aa"）
//         removeStringHelper(str, start, substr);
//     } else {
//         // 3. 匹配失败：移动到【下一个字符】继续检查
//         removeStringHelper(str, start + 1, substr);
//     }
// }

// // 主函数：负责申请内存和启动递归
// const char *removeStringFromString(const char *str, const char *substr) {
//     if (str == NULL) return NULL;

//     // 1. 在堆（Heap）上申请一块足够大的空间，存放新字符串
//     char *newStr = (char *)malloc(sizeof(char) * (strlen(str) + 1));
//     if (newStr == NULL) return NULL; // 内存分配失败保护

//     // 2. 将原字符串内容拷贝到新空间中
//     strcpy(newStr, str);

//     // 3. 调用递归辅助函数处理这个副本
//     removeStringHelper(newStr, 0, substr);

//     // 4. 返回处理好的新字符串指针
//     return newStr;
// }

// int main(void) {
//     char *s = "Hello World!";

//     // 第一次调用：删除 "l"
//     const char *p = removeStringFromString(s, "l");
//     // 第二次调用：删除 "el"
//     const char *q = removeStringFromString(s, "el");

//     // 打印结果
//     printf("%s\n", p); // 预期输出: Heo Word!
//     printf("%s\n", q); // 预期输出: Hlo World!

//     // 记得释放 malloc 申请的内存，防止内存泄漏
//     free((void *)p);
//     free((void *)q);

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // 你的思路：将 start 之后的内容向前挪动 index 位
// void moveforward(char* str_start, int index) {
//     // 这里的 str_start 是发现子串的位置
//     int i = 0;
//     // 使用 do-while 确保连带 '\0' 一起挪动
//     do {
//         str_start[i] = str_start[i + index];
//     } while (str_start[i++] != '\0');
// }

// // 递归助手：使用你的 strstr 思路
// void helper(char* current, const char* target) {
//     // 基准情况：到头了
//     if (*current == '\0') return;

//     int target_len = (int)strlen(target);
//     // 使用 strstr 找子串
//     char* found = strstr(current, target);

//     // 你的思路：如果找着了，且正好在当前位置 (found == current)
//     if (found == current) {
//         moveforward(current, target_len);
//         // 【关键】删完之后，原地再次检查（处理连续出现的子串）
//         helper(current, target);
//     } else {
//         // 没找着，或者找着了但在后面，我们就老老实实往后走一步
//         helper(current + 1, target);
//     }
// }

// // 包装函数：为了让 main 函数里的 p 和 q 拿到不同的结果
// char* removeStringFromString(const char* input, const char* target) {
//     // 1. 借地盘（申请新内存）
//     char* copy = (char*)malloc(strlen(input) + 1);
//     // 2. 复印一份
//     strcpy(copy, input);
//     // 3. 开始递归处理副本
//     helper(copy, target);
//     // 4. 返回副本地址
//     return copy;
// }

// int main(void) {
//     char s[] = "Hello World!";

//     // 按照你的 main 函数逻辑
//     char *p = removeStringFromString(s, "l");
//     char *q = removeStringFromString(s, "el");

//     // 现在 p 和 q 都有各自独立的内存空间，打印就不会出错了
//     printf("p: %s\n", p); // Heo Word!
//     printf("q: %s\n", q); // Hlo World!

//     // 别忘了释放内存
//     free(p);
//     free(q);

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// typedef struct node{
//     int data;
//     struct node* next;
// }Node;
// typedef struct list{
//     struct node* head;
// }LinkedList;
// void printlist(LinkedList* list){
//     if(list->head==NULL){
//         printf("N/A\n");
//         return;
//     }
//     Node* current=list->head;
//     while(current!=NULL){
//         printf("%d ", current->data);
//         current=current->next;
//     }
//     printf("\n");
//     return ;
// }
// Node* create(int value){
//     Node* new=(Node*)malloc(sizeof(Node));
//     if(new!=NULL){
//         new->next=NULL;
//         new->data=value;
//         return new;
//     }
//     return NULL;
// }
// LinkedList* mergeLists(LinkedList* left, LinkedList* right){
//     LinkedList* merge=(LinkedList*)malloc(sizeof(LinkedList));
//     merge->head=left->head;
//     //pass through right, insert node in right into the merge linked list
//     Node dummy={__INT_MAX__, merge->head};
//     Node* current=right->head; //trace the right

//     while(current!=NULL){
//         Node* ori_next=current->next;
//         Node* mprev=&dummy;
//         Node* mcurrent=dummy.next; //trace the merge
//         while(mcurrent!=NULL){
//             if(mcurrent->data >= current->data){
//                 mprev->next = current;
//                 current->next = mcurrent;
//                 break;
//             }
//             mprev=mcurrent;
//             mcurrent=mcurrent->next;
//         }
//         if(mcurrent==NULL){//insert in the end of the linked list 
//             mprev->next=current;
//         }
//         current=ori_next;
//     }
//     //update the merge head
//     merge->head=dummy.next;
//     dummy.next=NULL;
//     printlist(merge);
//     return merge;
// }
// int main(void){
//     LinkedList l1;
//     l1.head=NULL;
//     l1.head=create(1);
//     l1.head->next=create(3);
//     l1.head->next->next=create(10);
//     l1.head->next->next->next=create(20);
//     printlist(&l1);

//     LinkedList l2;
//     l2.head=NULL;
//     l2.head=create(2);
//     l2.head->next=create(3);
//     l2.head->next->next=create(8);
//    // l2.head->next->next->next=create(9);

    
//     printlist(&l2);

    
//     mergeLists(&l1, &l2);

//     return 0;
   
// }
// #include <string.h>
// #include <stdio.h>

// void recur(char* str){
//     if(*(str)=='\0') {/* printf("%s\n",str);printf("%s\n",str); */return;}
//     printf("%s\n", str);
//     char temp=str[strlen(str)-1];
//     str[strlen(str)-1]='\0';
//     recur(str);
    
//     str[strlen(str)]=temp;
//     printf("%s\n", str);
    
// }
// int main(void){
//     char str[]="APS105";
//     recur(str);
//     return 0;

// }
// #include <stdio.h>
// int main(void){
   
// char str[] = {'H', 'e', 'l', 'l', 'o'};
// int a=-215;
// printf("%d\n", a%2);
// }

// #include <stdio.h>
// int* foo(void) {
//   int x = 1;
//   int* px = &x;
//   return px;
// }

// int main(void) {
//   int* y = foo();
//   printf("foo returns: %d\n", *y);
//   return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE 3

// typedef struct employee {
//     int ID;
//     char* name;
// } Employee;

// int main(void) {
//     Employee* employees = malloc(sizeof(Employee)*SIZE);
//     for (int i = 0; i < SIZE; i++) {
//         employees[i].name=(char*)malloc((int)(10*sizeof(char)));
//         if(employees[i].name!=NULL) scanf("%s", employees[i].name);
//         scanf("%d", &(employees[i].ID));
//     }
//     for (int i = 0; i < SIZE; i++) {
//         printf("Employee %d\n Name: %s\n ID: %d\n", i + 1, employees[i].name, employees[i].ID);
//     }
//     // Assume freeData function is called here to free any dynamically allocated space
//     return 0;
// }


//32
/* #include <stdio.h>
#include <stdlib.h>
// Struct for a node in the doubly linked list
typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
} Node;

typedef struct {
    Node* head;
    Node* tail;
} DoublyLinkedList;
void insertAfterNode(DoublyLinkedList* list, Node* prevNode, int val){
    //if the linked list is empty
    if(list->head==NULL && list->tail==NULL && prevNode==NULL){
        return;
    }
    //if the prevNode is the last node originally, insert in the end.
    if(prevNode->next==NULL && list->tail==prevNode){
        Node* new=(Node*)malloc(sizeof(Node));
        if(new!=NULL){
            new->data=val;
            new->next=NULL;
            //link prevNode with new node
            new->prev=prevNode;
            prevNode->next=new;
            //uptdata the new tail
            list->tail=new;
            return;
        }
    }
    //normal case
    Node* new=(Node*)malloc(sizeof(Node));
    Node* ori_next=prevNode->next;
    new->data=val;
    //link original next node with the new node
    new->next=ori_next;
    ori_next->prev=new;
    //link prevNode with the new node
    new->prev=prevNode;
    prevNode->next=new;
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

//33
/* #include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isStringRotation(char* s1, char* s2){
    int l1=(int)strlen(s1);
    int l2=(int)strlen(s2);
    if(l1!=l2){//if two are different lenghth
        return false;
    }
    bool found=false;
    for(int i=0; i<=l1; i++){//i is the compare lenghth
        char t1[10000];
        char t2[10000];
        for(int j=0; j<i; j++){
            t1[j]=s1[j];
        }
        t1[i]='\0';
        for(int j=0; j<l1-i; j++){
            t2[j]=s1[i+j];
        }
        t2[l1-i]='\0';
       // printf("%s %s\n", t1, t2);
        if(strstr(s2, t1)!=NULL && strstr(s2, t2)!=NULL){
            found=true;
        }
    }
    return found;
}

int main(void){
    char* s1 = "ABCD";
char* s2 = "BDCA";
    bool flag = isStringRotation(s1, s2); // should return true
    printf("%d\n",flag);
} */

//34
/* #include <stdio.h>
#include <string.h>
void recurPrint(char* str){
    if((*str)=='\0'){
        return;
    }
    printf("%s\n", str);
    char temp=str[strlen(str)-1];
    str[strlen(str)-1]='\0';
    recurPrint(str);
    str[strlen(str)]=temp;
    printf("%s\n",str);
}
int main(void) {
    char s[] = "A";
    recurPrint(s);
    return 0;
} */

//35
/* #include <stdio.h>
#define ROW 5
#define COL 6
int printNthElementinSpiralOrder(int rows, int cols, int arr[rows][cols], int n){
    int LOOP=rows/2;
    int index=0;
    for(int loop=0; loop<LOOP;loop++){
        for(int c=loop; c<cols-loop-1; c++){
            printf("%d ", arr[loop][c]);
            index++;
            if(index==n) return arr[loop][c];
        }
        for(int r=loop; r<rows-loop-1; r++){
            printf("%d ", arr[r][cols-loop-1]);  
            index++;
            if(index==n) return arr[r][cols-loop-1];
        }
        for(int c=cols-loop-1; c>=loop+1; c--){
            printf("%d ", arr[rows-loop-1][c]);
            index++;
            if(index==n) return arr[rows-loop-1][c];
        }
        for(int r=rows-loop-1; r>=loop+1; r--){
            printf("%d ", arr[r][loop]);  
            index++;
            if(index==n) return arr[r][loop];
        }
    }
    // if the row is not even 
    if(rows%2==1){
        for(int c=LOOP; c<cols-LOOP; c++){
            printf("%d ", arr[LOOP][c]);  
            index++;
            if(index==n) return arr[LOOP][c];
        }
    }
    return 0;
}
int main(void){
    int array[ROW][COL] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30}};
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    int a=printNthElementinSpiralOrder(ROW, COL, array, 30);
    printf("\n");
    printf("%d\n",a);
} */

//37
/* #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node {
    int data;
    struct node *next;
} Node;
typedef struct linkedList {
    Node *head;
} LinkedList;
void printDuplicates(LinkedList* list){
    Node* curr=list->head;
    Node* comp=NULL;
    while(curr->next!=NULL){
    //  bool dup=false;
        comp=curr->next;
        while(comp!=NULL){
            if(comp->data==curr->data){
                printf("%d ", comp->data);
                break;
            }
            comp=comp->next;
        }
        curr=curr->next;
    }
    printf("\n");
}
void printlist(LinkedList* list){
    if(list->head==NULL){
        printf("N/A\n");
    }
    Node* current=list->head;
    while(current!=NULL){
        printf("%d ", current->data);
        current=current->next;
    }
    printf("\n");
    return ;
}
Node* create(int value){
    Node* new=(Node*)malloc(sizeof(Node));
    if(new!=NULL){
        new->data=value;
        new->next=NULL;
        return new;
    }
    return NULL;
}
int main(void){
    LinkedList list;
    list.head=NULL;
    list.head=create(1);
    list.head->next=create(3);
    list.head->next->next=create(3);
    list.head->next->next->next=create(9);
    list.head->next->next->next->next=create(9);
    printlist(&list);
    printDuplicates(&list);
    return 0;

} */

//38
/* #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node {
    int data;
    struct node *next;
} Node;
typedef struct linkedList {
    Node *head;
} LinkedList;

void printlist(LinkedList* list){
    if(list->head==NULL){
        printf("N/A\n");
    }
    Node* current=list->head;
    while(current!=NULL){
        printf("%d ", current->data);
        current=current->next;
    }
    printf("\n");
    return ;
}
Node* create(int value){
    Node* new=(Node*)malloc(sizeof(Node));
    if(new!=NULL){
        new->data=value;
        new->next=NULL;
        return new;
    }
    return NULL;
}
LinkedList* mergeLists(LinkedList* left, LinkedList* right){
    if(left->head==NULL && right->head==NULL) return NULL;
    LinkedList* merge=(LinkedList*)malloc(sizeof(LinkedList));
    if(left->head==NULL && right->head!=NULL){
        merge->head=right->head;
        return merge;
    }
    if(right->head==NULL && left->head!=NULL){
        merge->head=left->head;
        return merge;
    }
    merge->head=left->head;
    Node dummy={__INT_MAX__, merge->head};
    Node* prev=&dummy;
    Node* curr=dummy.next;
    Node* Tcurr=right->head;
    while(Tcurr!=NULL){
        Node* ori_next=Tcurr->next;
        prev=&dummy;
        curr=dummy.next;
        while(curr!=NULL){
            if(curr->data > Tcurr->data){
                prev->next=Tcurr;
                Tcurr->next=curr;
                break; // prev, curr return to start, for the next one;
            }
            prev=curr;
            curr=curr->next; //if this round does not insert, go on
        }
        //if this Tcurr is larger than all of the node in merge
        if(curr==NULL){
            prev->next = Tcurr;
            Tcurr->next=NULL;
        }
        Tcurr=ori_next;
    }
    //update the head
    merge->head=dummy.next;
    printlist(merge);
    return merge;
}
int main(void){
    LinkedList l1;
    l1.head=NULL;
    l1.head=create(1);
    l1.head->next=create(3);
    l1.head->next->next=create(4);
    l1.head->next->next->next=create(10);
    printlist(&l1);
    LinkedList l2;
    l2.head=NULL;
    l2.head=create(2);
    l2.head->next=create(6);
    l2.head->next->next=create(7);
    printlist(&l2);
    mergeLists(&l1,&l2);
    return 0;

}

#include <stdio.h>
 int count_zero_around(int rows, int cols, int arr[rows][cols]){
    int result=0;
    for(int i=-1; i<=1; i++){
        for(int j=-1; j<=1;j++){
            if(i==0 && j==0) continue;
            if(arr[rows+i][cols+j]==0){
                ++result;
            }
        }
    }
    return result;
} */
/* int Count_area_FromOnePoint(int rows, int cols, int arr[rows][cols]){
    if(arr[rows][cols]==1) return 0;
    for(int i=-1; i<=1; i++){
        for(int j=-1; j<=1; j++){
            if(i==0 && j==0) continue;//omit it self
            if(arr[rows][cols]==0) return 1+Count_area_FromOnePoint(rows+i, cols+j, arr);
            if(arr[rows][cols]==1) return 0+Count_area_FromOnePoint(rows+i, cols+j, arr);
        }
    }
}
int findLargestWaterBody(int rows, int cols, int arr[rows][cols]){
    int max=-__INT_MAX__;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            int area=Count_area_FromOnePoint(i, j, arr);
            if(area>max){
                max=area;
            }
        }
    }
    return max;
}
int main(void){
    int example1[4][4] = {{0,1,1,1},{1,0,1,1},{0,0,0,1},{1,1,1,1}};
    printf("%d \n", findLargestWaterBody(4,4,example1));
}

 */ 
// #include <stdio.h>

// int countWater(int r, int c, int rows, int cols, int arr[rows][cols]) {
//     //base case
//     if(r<0 || c<0 || r>=rows || r>=cols || arr[r][c]!=0) return 0;
//     int area=1;
//     arr[r][c]=1;
//     for(int i=-1; i<=1; i++){
//         for(int j=-1; j<=1; j++){
//             if(i==0 && j==0) continue;
//             area+=countWater(r+i, c+j, rows, cols, arr);
//         }
//     }
//     return area;
// }

// int findLargestWaterBody(int rows, int cols, int arr[rows][cols]) {
//     int maxarea=-__INT_MAX__;
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(arr[i][j]==0){
//                 int area=countWater(i,j,rows,cols,arr);
//                 if(area>maxarea){
//                     maxarea=area;
//                 }
//             }
            
//         }
//     }
//     return maxarea;
// }
// int main(void){
//     int example1[4][4] = {{0,1,1,1},{1,0,1,1},{0,0,0,1},{1,1,1,1}};
//     printf("%d ", findLargestWaterBody(4,4,example1));
// }
#include <stdio.h>
int factorial(int n) { // returns n!
    int result = 1;
    for(int i=1; i<=n; i++) result*=i;
    return result;
}
int main(void) {
    int const RowDesired = 5; //counts from 1
    int pascalRow[5]; //hint: row #n has n+1 elements
    for(int r=0; r<RowDesired; r++){
        int n=RowDesired-1;
        int temp=(factorial(n))/(factorial(r)*factorial(n-r));
        pascalRow[r]=temp;
    }
    for(int i=0; i<RowDesired; i++) printf("%d ", pascalRow[i]);
    printf("\n");
    return 0;
}