#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool prime_number(int);
void find_prime_number(int,int**);

int main(void){
    int* array=(int*)malloc((size_t)0*sizeof(int));
    if(array==NULL) printf("Fail to create space\n");
    printf("input the range: "); 
    int range; scanf("%d",&range);

    find_prime_number(range,&array);
    
    free(array);
    array=NULL;
}

bool prime_number(int n){
    if(n<=1) return false;
    else if(n==2) return true;
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
    }
    return true;
}

void find_prime_number(int range,int** p_array){
    int counter=0;
    for(int number=1;number<=range;number++){
        if(prime_number(number)==true){
            counter++;
            int* temp=(int*)realloc(*p_array,(size_t)counter*sizeof(int));
            if(temp!=NULL){*p_array=temp;temp=NULL;}
            else{printf("fail to expand space\n");break;}
            (*p_array)[counter-1]=number;
        }
    }
    for(int* i=*p_array;i<*p_array+counter;printf("%d ",*i),i++);
    printf("\n");
}