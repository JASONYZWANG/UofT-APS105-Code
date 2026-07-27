#include <stdio.h>
#include <stdbool.h>
bool judge_prettynumber(int);
int main(void){
    int counter=0,number;
    do{//input number
        printf("Input an integer (0 to stop): ");
        scanf("%d",&number);
        if(judge_prettynumber(number)) counter++;
    }while(!(number==0));
    printf("You entered %d pretty number(s)!\n",counter);
}
bool judge_prettynumber(int n){
    int num_seven=0,temp=n;
    if(n<0) temp*=(-1);//make number positive 
    while(temp>0){
        if(temp%10==7) num_seven++;
        temp/=10;
    }
    if(num_seven>=3) return true;
    return false;
}