#include <stdio.h>
#define ARR_SIZE 17
#define RULE_SIZE 8
void initializeArray(int, int*);
void initializeRule(int*,int);
void printArray(int*);
void iterate_array(int*,int*,int);

int main(void){
    int arr[ARR_SIZE],alive_cell,iterate,rule_num;
    int rule_table[RULE_SIZE]={0};
    //initialization
    printf("Enter input: ");
    scanf("%d%d%d",&alive_cell,&rule_num,&iterate);
    initializeArray(alive_cell,arr);
    initializeRule(rule_table,rule_num);
    //iteration
    iterate_array(arr,rule_table,iterate);
}

//initialize rule table 30-->0 0 0 1 1 1 1 0
void initializeRule(int* array, int rule_num){
    int index=RULE_SIZE-1;
    while(rule_num>0){
        array[index]=rule_num%2;
        rule_num/=2;
        index--;
    }
}
void initializeArray(int aliveIndex, int array[]){
    for(int* i=array;i<array+ARR_SIZE;*i=0,i++);
    array[aliveIndex]=1;
}
void printArray(int array[]){
    for(int* i=array;i<array+ARR_SIZE;i++){
        if(*i==0) printf(" ");
        else if(*i==1) printf("*");
    }
    printf("\n");
}

void iterate_array(int* array, int* rule_table, int iterations){
    int temp[ARR_SIZE]={0};
    for(int time=1;time<=iterations;time++){

        printArray(array);
        for(int index=0;index<ARR_SIZE;index++){
            int left, middle, right, code_num;
            if(index==0) {
                left=0; middle=array[index]; right=array[index+1];
            }
            else if(index==ARR_SIZE-1){
                left=array[index-1]; middle=array[index]; right=0;
            }
            else{
                left=array[index-1]; middle=array[index]; right=array[index+1];
            }
            code_num=left*4+middle*2+right*1;
            temp[index]=rule_table[RULE_SIZE-1-code_num];
        }
        for(int j=0;j<ARR_SIZE;j++) array[j]=temp[j]; //substitude back
 
    }
}