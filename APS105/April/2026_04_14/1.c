/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char *removeTrailingZeros(char *str) {
    int len=(int)strlen(str);
    if(*str=='\0'){
        //if the string is empty
        return NULL;
    }
    bool all_zero=true;
    for(int i=0; i<len; i++){
        if(str[i]!='0'){
            all_zero=false;
        }
    }
    if(all_zero==true){
        strcpy(str, "0");
        return str;
    }
    if(*str=='0'){
        //if the string start firstly with 0
        return NULL;
    }
    if(str[len-1]!='0'){
        //if the string has no trailing zero
        return NULL;
    }
    bool meetRealNumber=false;
    for(int i=len-1; i>=0; --i){
        if(str[i]>'9' || str[i]<'0'){
            //theres number eligle
            return NULL;
        }
        if(str[i]!='0'){
            meetRealNumber=true;
        }
        if(str[i]=='0' && meetRealNumber==false){
            str[i]='\0';
        }
    }
    return str;
}
int main(void){
    char number[]="10300";
    printf("%s\n", removeTrailingZeros(number));
    return 0;
} */

/* #include <stdio.h>
int sumOddDigits(int n) {
    if(n==0){
        return 0;
    }
    if((n%10)%2==1){
        //if the current number is odd
        return n%10+sumOddDigits(n/10);
    }
    return sumOddDigits(n/10);
}
int main(void){
    printf("%d \n", sumOddDigits(57231));
    return 0;
} */

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
    Node* newnode=(Node*)malloc(sizeof(Node));
    if(newnode!=NULL){
        newnode->next=NULL;
        newnode->data=value;
        return newnode;
    }
    return NULL;
}
void deleteOccurrence(LinkedList *list, int value) {
    //if the linked list is empty
    if(list->head==NULL){
        return ;
    }
    //normal case
    Node dummy={__INT_MAX__, list->head};
    Node* prev=&dummy;
    Node* curr=dummy.next;
    while(curr!=NULL){
        Node* curr_next=curr->next;
        if(curr->data == value){
            //delete this node;
            prev->next=curr_next;
            free(curr);
            curr=curr_next;
        }
        else{
            prev=curr;
            curr=curr_next;
        }
    }
  
   
    //update the head
    list->head=dummy.next;
    dummy.next=NULL;
}
int main(void){
    LinkedList list;
    list.head=NULL;
    list.head=new(2);
    list.head->next=new(2);
    list.head->next->next=new(2);
    list.head->next->next->next=new(2);
    list.head->next->next->next->next=new(2);
    printlist(&list);
    deleteOccurrence(&list, 3);
    printlist(&list);
} */

/* #include <stdio.h>
int countRowWithMaxSum(int rows, int cols, int mat[rows][cols]) {
    int maxsum=-__INT_MAX__;
    int maxindex=0;
    for(int i=0; i<rows; i++){
        int round_sum=0;
        for(int j=0; j<cols; j++){
            round_sum+=mat[i][j];
        }
        if(round_sum>maxsum){
            maxsum=round_sum;
            maxindex=i;
        }
    }
    return maxindex;
}
int main(void){
    int arr[3][4]={
        {1  ,2 , 3,  4},
{5,  1  ,0,  1},
{2 , 2,  2 , 2}
    };
    printf("%d\n", countRowWithMaxSum(3,4,arr));
} */

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
int function(const char *str, char ch, int index){
    if(index<0){
        return -1;
    }
    if(str[index]==ch){
        return index;
    }
    return function(str, ch, index-1);
}
int lastCharIndex(const char *str, char ch){
    return function(str, ch, (int)strlen(str)-1);
}
int main(void){
    printf("%d \n",lastCharIndex("cmoutoez", 'z'));
} */

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct item {
    char *word;
} Item;

void readWords(Item items[]) {
    char temp[100];
    for (int i = 0; i < 3; i++) {
        printf("Enter word: ");
        scanf("%s", temp);
        // items[i].word = temp;
        size_t len=strlen(temp)+1;
        char* temp=(char*)malloc(len);
        if(temp!=NULL){
            items[i].word=temp;
            temp=NULL;
            strcpy(items[i].word, temp);
        }
    }
} */

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printForwardBackward(char *str){
    int l=(int)strlen(str);
    if(l==0){
        return;
    }
    printf("%s\n", str);
    char temp=str[l-1];
    str[l-1]='\0';
    printForwardBackward(str);
    str[l-1]=temp;
    printf("%s\n", str);
}
int main(void){
    char st[]="hello";
    printForwardBackward(st);
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
void printReverseString(const char *str) {
    if(*str=='\0'){
        return;
    }
    printReverseString(str+1);
    printf("%c",*str);
}
int main(void){
    char st[]="hello";
    printReverseString(st);
    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool compareIgnoreCase(const char *s1, const char *s2) {
    int delta=(int)('a'-'A');
    if(*s1=='\0' && *s2=='\0'){
        return true;
    }
    if((*s1=='\0' && *s2!='\0') || (*s1!='\0' && *s2=='\0')){
        return false;
    }
    if(*s1<*s2 && *s1+delta!=*s2){
        return false;
    }
    else if(*s2<*s1 && *s1+delta!=*s2){
        return false;
    }
    return compareIgnoreCase(s1+1, s2+1);
}
int main(void){
    char s1[]="Testing";
    char s2[]="TestinG";
    printf("%d\n", compareIgnoreCase(s1,s2));
    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isSubsequence(const char *s1, const char *s2) {
    if(*s1=='\0'){
        return true;
    }
    if(strchr(s2, *s1)==NULL){
        return false;
    }
    return isSubsequence(s1+1, strchr(s2, *s1)+1);
}
int main(void){
    char s1[]="abc";
    char s2[]="abeedewece";
    printf("%d\n", isSubsequence(s1, s2));
    return 0;
} */

/* #include <stdio.h>
int findMax(int* arr, int size){
    if(size<=0){
        return -__INT_MAX__;
    }
    int rest_max=findMax(arr+1, size-1);
    if(rest_max>*arr){
        return rest_max;
    }
    return *arr;
}
int main(void){
    int arr[] = {3, 9, 2, 7};
    printf("%d\n",findMax(arr, 4)); 
    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>
bool isSorted(int arr[], int size){
    if(size<=1){
        //successfully reach the end of the array
        return true;
    }
    if(*(arr+1) < *arr){
        return false;
    }
    return isSorted(arr+1, size-1);
}
int main(void){
    int arr[]={1,2,3,4,0};
    printf("%d\n", isSorted(arr, (int)sizeof(arr)/sizeof(int)));
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
void moveforward(char* index){
    for(char* i=index; *i!='\0'; i++){
        *i=*(i+1);
    }
}
void removeChar(char *str, char ch){
    if(*str=='\0'){
        return;
    }
    if(*str==ch){
        moveforward(str);
        removeChar(str, ch);
    }
    removeChar(str+1, ch);

}
int main(void){
    char str[]="baaaaaaa";
    removeChar(str, 'a');
    printf("%s\n", str);
} */

/* #include <stdio.h>
#include <string.h>
int countOccurrences(const char *text, const char *pattern) {
    if(*text=='\0'){
        return 0;
    }
    //if the current location next charactors is same as pattern 
    size_t len_p=strlen(pattern);
    int compare=strncmp(text, pattern, len_p);
    if(compare==0){
        //same
        return countOccurrences(text+1, pattern)+1;
    }
    return countOccurrences(text+1, pattern)+0;
}
int main(void){
    char st[]="aaaaaaaaa";
    char pattern[]="a";
    printf("%d\n", countOccurrences(st, pattern));
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(const char *str, int left, int right) {
    if(left>=right){
        return true;
    }
    if(*(str+left)!=*(str+right)){
        return false;
    }
    return isPalindrome(str, left+1, right-1);
}
int main(void){
    char st[]="meth";
    printf("%d\n", isPalindrome(st, 0, (int)strlen(st)-1));
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool sameIgnoringSpaces(const char *s1, const char *s2) {
    //skip the space
    while(*s1==' ' && *s1!='\0'){
        ++s1;
    }
    while(*s2==' ' && *s2!='\0'){
        ++s2;
    }
    //end together
    if(*s1=='\0' && *s2=='\0'){
        return true;
    }
    if((*s1=='\0' && *s2!='\0') || (*s1!='\0' && *s2=='\0')){
        // not end together 
        return false;
    }
    //if meet different charactor
    if(*s1!=*s2){
        return false;
    }
    return sameIgnoringSpaces(s1+1, s2+1);
}
int main(void){
    char st[]="a b   c";
    char st2[]="a       b    c";
    printf("%d\n", sameIgnoringSpaces(st, st2));
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool comesBefore(const char *s1, const char *s2) {
    if(*s1=='\0' && *s2=='\0'){
        //if end together, which means both string are the same
        return false;
    }
    if((*s1=='\0' && *s2!='\0') || (*s1!='\0' && *s2=='\0')){
        //if not end together, which means the test of the string are exactly the same
        if(strlen(s1)<strlen(s2)){
            return true;
        }else{
            return false;
        }
    }
    if(*s1 > *s2){
        return false;
    }
    if(*s1 < *s2){
        return true;
    }
    return comesBefore(s1+1, s2+1);
}
int main(void){
    char s1[]="apple";
    char s2[]="applepie";
    printf("%d \n", comesBefore(s1, s2));
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
void moveForward(char* index){
    for(char* i=index; *i!='\0'; i++){
        *i=*(i+1);
    }
}
void removeConsecutiveDuplicates(char *str){
    if(*str=='\0'){
        return ;
    }
    if(*str==*(str+1)){
        //the next is duplicated with the curr location, move forward
        moveForward(str+1);
        removeConsecutiveDuplicates(str);
    }
    removeConsecutiveDuplicates(str+1);
}
int main(void){
    char st[]="weufhweofhewofawefieiifiewifiiiieiiiiiiiii";
    
    //char st1[]="abcde";moveForward(st1+1);printf("%s\n",st1);
    removeConsecutiveDuplicates(st);
    printf("%s\n", st);
    return 0;
} */

/* #include <stdio.h>
int sumGreaterThanPrevious(int arr[], int size){
    if(size<=1){
        return 0;
    }
    if(*arr < *(arr+1)){
        //the next number is bigger than the previous number
        //printf("%d ", *(arr+1));
        return *(arr+1)+sumGreaterThanPrevious(arr+1, size-1);
    }
    return sumGreaterThanPrevious(arr+1, size-1);
}
int main(void){
    int arr[]={1,2,3,4,5,6};
    printf("%d\n", sumGreaterThanPrevious(arr, (int)sizeof(arr)/sizeof(int)));
    return 0;
} */

/* #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int sum(int* arr, int size){
    if(size<=0){return 0;}
    return *arr+sum(arr+1, size-1);
}
bool Function(int* arr, int right, int size){
    if(size<=0){
        //until the end, return false
        return false;
    }
    //update the right, and left for the current index
    int left_sum=sum(arr, size);
    right+=(*arr);

    printf("%d %d\n", right, left_sum);
    if(right==left_sum){
        return true;
    }
    return Function(arr+1, right, size-1);
}
bool canSplitEqual(int arr[], int size){
    return Function(arr, 0, size);
}
int main(void){
    int arr[]={2, 1, 1, 5};
    printf("%d\n", canSplitEqual(arr, (int)sizeof(arr)/sizeof(int)));
    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>
bool digitsAlternateParity(int n){
    if(n<10 && n>=0){
        //until the end, which means returing true;
        return true;
    }
    int curr_dig=n%10;
    int prev_dig=(n/10)%10;
    if((prev_dig%2==1 && curr_dig%2==0) || (prev_dig%2==0 && curr_dig%2==1)){
        return digitsAlternateParity(n/10);
    }else{
        return false;
    }
}
int main(void){
    printf("%d\n", digitsAlternateParity(29874321));
} */

/* #include <stdio.h>
int function(int n, int result){
    if(n<=0){
        return result;
    }
    return function(n/10, result*10+n%10);
}
int reverseNumber(int n) {
    return function(n, 0);
}
int main(void){
    printf("%d", reverseNumber(1234));
    return 0;
} */

/* #include <stdio.h>

void moveLeft(int* arr, int size){
    for(int* i=arr; i<arr+size-1; i++){
        *i=*(i+1);
    }
}
int removeValue(int arr[], int size, int target){
    if(size<=0){
        return 0;
    }
    if(*arr==target){
        moveLeft(arr, size);
        return removeValue(arr, size-1, target);
    }
    return removeValue(arr+1, size-1, target)+1;
}
int main(void){
    int arr[]={1,3,4,5,3,2};
    int l=(int)(sizeof(arr)/sizeof(int));
    printf("%d\n", removeValue(arr, l, 20));
    for(int i=0; i<l; i++) printf("%d ", arr[i]);
} */

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
void function(const char* small, const char* big, char* combination, int Size_combination, int *count){
    if(*big=='\0'){
        combination[Size_combination]='\0';
        printf("%s\n", combination);
        if(strcmp(combination, small)==0) (*count)++;
        return;
    }
    //choose the current location?
    //choose
    combination[Size_combination]=*big;
    function(small, big+1, combination, Size_combination+1, count);
    //not choose
    function(small, big+1, combination, Size_combination, count);
}
int countWaysSubsequence(const char *small, const char *big) {
    int len_big=(int)strlen(big);
    //create a temporary string to store the combination 
    char* combination=(char*)malloc((size_t)(len_big+1)*sizeof(char));
    if(combination==NULL){
        return -1;
    }
    //main function entrance
    int result=0;
    function(small, big, combination, 0, &result);

    free(combination);
    return result;
}
int main(void){
    char st[]="abcdef";
    char sub[]="abc";
    printf("%d\n", countWaysSubsequence(sub,st));
    return 0;
} */

/* #include <stdio.h>
#include <stdbool.h>
bool isMirrorSections(int arr[], int size){
    if(size<=0){
        return true;
    }
    if(*arr!=*(arr+size-1)){
        return false;
    }
    return isMirrorSections(arr+1, size-2);
}
int main(void){
    int arr[]={1,1,1,1,1,1,1,1};
    printf("%d\n", isMirrorSections(arr, (int)(sizeof(arr)/sizeof(int))));
    return 0;
} */

/* #include <stdio.h>
int DeepSearching(int rows, int cols, char(*map)[cols], int X, int Y){//X is current row, Y is current col
    if(X<0 || Y<0 || X>rows || Y>cols || map[X][Y]=='.'){//if out of boundary, return 0
        return 0;
    }
    //if current location is still a block
    int area=0;
    if(map[X][Y]=='X'){
        map[X][Y]='.';
        area=1;
        for(int i=-1; i<=1; i++){
            for(int j=-1; j<=1; j++){
                if(i==0 && j==0){
                    //ignore the current location
                    continue;
                }
                area+=(DeepSearching(rows, cols, map, X+i, Y+j));
            }
        }//search the 8 locations around itself
    }
    return area;
}
int countBlocks(int rows, int cols, char grid[rows][cols]){
    int Area=0;
    for(int i=0; i<rows; i++){//find the maximum area
        for(int j=0; j<cols; j++){
            if(grid[i][j]=='X'){
                //if this location is in the block 
                int curr_area=DeepSearching(rows, cols, grid, i, j);
                Area+=curr_area;
            }
        }
    }
    return Area;
}
int main(void){
    char grid[4][5] = {
        {'X', 'X', '.', '.', '.'},
        {'X', '.', 'X', 'X', 'X'},
        {'.', '.', 'X', 'X', 'X'},
        {'.', '.', '.', '.', 'X'}
    };
    printf("%d\n", countBlocks(4,5,grid));
    return 0;
} */

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

int PathSearching(int rows, int cols, int map[rows][cols], int X, int Y) {
    // 1. 越界-->死路
    if (X < 0 || X >= rows || Y < 0 || Y >= cols) {
        return INT_MAX;
    }

    // 2. 遇到障碍 / 已访问 -->死路
    if (map[X][Y] == 1) {
        return INT_MAX;
    }

    // 3. 到达终点
    if (X == rows - 1 && Y == cols - 1) {
        return 1;
    }

    // 4. 标记当前点为已访问
    map[X][Y] = 1;

    // 5. 递归搜索
    int right = PathSearching(rows, cols, map, X, Y + 1);
    int down  = PathSearching(rows, cols, map, X + 1, Y);

    // 6. 回溯：恢复现场
    map[X][Y] = 0;

    // 7. 取更短的路径
    int min = right < down ? right : down;

    if (min == INT_MAX) {
        return INT_MAX;
    }

    return min + 1;
}

int shortestPath(int rows, int cols, int maze[rows][cols]) {
    int ans = PathSearching(rows, cols, maze, 0, 0);

    if (ans == INT_MAX) {
        return -1;
    }

    return ans;
}

int main(void) {
    int maze2[4][4] = {
        {0, 0, 1, 0},
        {1, 0, 1, 0},
        {0, 0, 0, 0},
        {1, 1, 1, 0}
    };

    printf("%d\n", shortestPath(4, 4, maze2));
    return 0;
}
int main(void){
    int maze2[4][4] = {
        {0, 0, 1, 0},
        {1, 0, 1, 0},
        {0, 0, 0, 0},
        {1, 1, 1, 0}
    };
    printf("%d\n", shortestPath(4,4,maze2));    
    return 0;
}