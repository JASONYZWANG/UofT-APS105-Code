#include <stdio.h>
void Pretty_number(int*, int*);
int main(void){
    int n, counter=0;
    do{
        printf("Input an integer (0 to stop): ");scanf("%d",&n);
        int temp=n;
        Pretty_number(&temp,&counter);
    }while(!(n==0));
    printf("You entered %d pretty number(s)!\n",counter);
}
void Pretty_number(int* target, int* counter){
    if(*target<0) (*target)*=(-1);
    int seven_number=0;
    while(*target>0){
        if(*target%10==7) seven_number++;
        *target/=10;
    }
    if(seven_number>=3) (*counter)++;
}