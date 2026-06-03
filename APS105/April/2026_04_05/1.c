/* #include <stdio.h>
int CountPath(int Row, int Col, int(*arr)[Col], int r, int c){
    
    if(r<0 || c<0 || r>=Row || c>=Col){ //judge whether the position is out of boundary right now
        return 0;
    }
   
    if(arr[r][c]==1) { //if the path is blocked
        return 0;
    }
    if(r==Row-1 && c==Col-1){ //reach the end, return 1 --> this is a valid path
        return 1;
    } 
    int numPath=CountPath(Row, Col, arr, r+1, c)+
                
                CountPath(Row, Col, arr, r, c+1); //record the valid path for this position
    return numPath;
}
int main(void){
    int grid[3][3] = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };
    printf("num of path is :%d\n",CountPath(3,3,grid,0,0));//0,0 is the start position of the path
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isMatch(char* s, char* p){
    if(*s=='\0' && *p=='\0'){ //finish together
        return true;
    }
    if((*s=='\0' && *p!='\0') || (*s!='\0' && *p=='\0')){// finish separately
        return false;
    }
    if(*s=='*' && *p!='*'){
        char* location=strstr(p,s+1);
        if(location==NULL){//cannot find the string after * in p
            return false;
        }else{
            return isMatch(s+1, location);
        }
    }
    if(*s!='*' && *p=='*'){
        char* location=strstr(s,p+1);
        if(location==NULL){//cannot find the string after * in s
            return false;
        }else{
            return isMatch(p+1, location);
        }
    }
   
    //after filter, normal case--> s+1, p+1
    return isMatch(s+1, p+1);

}
int main(void){
    if(isMatch("abcdefghighi", "a*ghi")==true){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    return 0;
} */

// #include <stdio.h>
// int FindArea(int Row, int Col, int(*arr)[Col], int r, int c){
//     if(r>=Row || c>=Col || r<0 || c<0){//if the location if out of boundary 
//         return 0;
//     }
// /*     if(arr[r][c]==1 && arr[r+1][c]==0 && arr[r-1][c]==0 && arr[r][c+1]==0 && arr[r][c-1]==0){
//         return 0;
//     } */
//     if(arr[r][c]==0){
//         return 0;
//     }
//     //after the filter, this point is an island +1
//     arr[r][c]=0;
//     int count=1;
//     for(int i=-1; i<=1; i++){
//         for(int j=-1; j<=1; j++){
//             if(i==0 && j==0) continue;
//             count+=(FindArea(Row, Col, arr, r+i, c+j));
//         }
//     }
//     return count;
// }
// int MaxIsland(int Row, int Col, int(*arr)[Col]){
//     int MaxArea=-__INT_MAX__;
//     for(int i=0; i<Row; i++){
//         for(int j=0; j<Col; j++){
//             if(arr[i][j]==1){
//                 int round_area=FindArea(Row, Col, arr, i, j);
//                 if(MaxArea<round_area) MaxArea=round_area;
//             }
//         }
//     }
//     return MaxArea;
// }
// int main(void){
//     int grid[5][5] = {
//         {1, 1, 0, 0, 0},
//         {1, 1, 0, 0, 0},
//         {0, 0, 1, 0, 0},
//         {0, 0, 0, 1, 1},
//         {0, 0, 0, 1, 1}
//     };
//     printf("%d\n", MaxIsland(5,5,grid));
// }
/* #include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool SubsetSum(int* arr, int size, int low, int target){
    if(target==0){
        return false;
    }
    if(low==size && )
    for(int i<low; i<size; i++){

    }
}
int main(void){
    int arr={2,4,8,2,3};
    if(SubsetSum(arr, (int)(sizeof(arr)/sizeof(int)),0,13)==true){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    return 0;
} */
/* #include <stdio.h>
#include <stdbool.h>


 * @param nums 整数数组
 * @param n 数组长度
 * @param index 当前处理到第几个数字
 * @param target 剩余需要凑齐的目标和
 */
/*
bool canSum(int n, int nums[], int index, int target) {
    if(target==0){
        return true;
    }
    if(index==n && target!=0){
        return false;
    }
    return (canSum(n, nums, index+1, target))||(canSum(n, nums, index+1, target-nums[index]));

}

int main() {
    int nums[] = {2, 4, 8,12};
    int n = 3;
    int target = 11;

    if (canSum(n, nums, 0, target)) {
        printf("True: A subset exists that sums to %d\n", target);
    } else {
        printf("False: No such subset exists\n");
    }

    return 0;
} */
/* #include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool FindWord(int Row, int Col, char(*arr)[Col], int r, int c,  char* word, int index){
    if(word[index]=='\0'){
        return true;
    }
    if(r<0 || c<0 || r>=Row || c>=Col || arr[r][c]!=word[index]){
        return false;
    }
    char temp=arr[r][c];
    arr[r][c]='#';
    bool found= FindWord(Row, Col, arr, r+1, c, word, index+1)||
        FindWord(Row, Col, arr, r-1, c, word, index+1)||
        FindWord(Row, Col, arr, r, c+1, word, index+1)||
        FindWord(Row, Col, arr, r, c-1, word, index+1);
    arr[r][c]=temp;
    return found;
} */
/* #include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPalindrome(char* str, int start, int end){
    if(str[start]!=str[end]){
        return false;
    }
    if(start>=end){
        return true;
    }
    
    return isPalindrome(str, start+1, end-1);
}
int main(void){
    char str[]="ABCFBA";
    if(isPalindrome(str, 0, (int)(strlen(str))-1)==true){
        printf("true\n");
    }else{
        printf("false\n");
    }
} */
/* #include <stdio.h>
int sumOfDigits(int n){
    if(n==0) return 0;
    return sumOfDigits(n/10)+n%10;
    
}
int main(void){
    printf("%d \n", sumOfDigits(12345));
} */
// #include <stdio.h>
// void hanoi(int n, char A, char B, char C){
//     if(n==0){
//         return;
//     }
//     //move n-1 plate from A to B
//     hanoi(n-1, A, C, B);
//     //move last plate from A to C
//     printf("move plate from %c to %c\n", A, C);
//     //move n-1 plate from B to A
//     hanoi(n-1, B, A, C);
// }
// int main() {
//     int n = 3;
//     printf("Steps to solve Tower of Hanoi with %d disks:\n", n);
//     hanoi(n, 'A', 'B', 'C');
//     return 0;
// }
// int stair(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     if(n==2){
//         return 2;
//     }
//     return stair(n-1)+stair(n-2);
// }
// int main(void){
//     printf("%d\n", stair(10));
// }
/* #include <stdio.h>
#include <string.h>
void print
int main(void){

} */
// #include <stdio.h>
// #include <string.h>
// void printSubsets(char* input, char* output, int i, int j){
//     if(input[i]=='\0'){
//         output[j]='\0';
//         printf("%s\n", output);
//         return;
//     }
//     //include current input[i]
//     output[j]=input[i];
//     printSubsets(input, output, i+1, j+1);

//     //do not include current input[i], skip the current charactor
//     printSubsets(input, output, i+1, j);
// }
// int main(void){
//     char str[]="abc";
//     char temp[1000];
//     printSubsets(str, temp, 0,0);
//     return 0;
// }