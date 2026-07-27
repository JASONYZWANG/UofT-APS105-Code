#include <stdio.h>
int main(void){
    //input the money
    printf("Please enter an amount in dollars ($): ");
    int money;
    scanf("%d",&money);
    while(money%5!=0){
        printf("The amount should be a multiple of $5: ");
        scanf("%d",&money);
    }

    //get the integer number of 100,50,20
    int num_100,num_50,num_20,num_10,num_5;
    num_100=money/100;
    num_50=(money-num_100*100)/50;
    num_20=(money-num_100*100-num_50*50)/20;
    num_10=(money-num_100*100-num_50*50-num_20*20)/10;
    num_5=(money-num_100*100-num_50*50-num_20*20-num_10*10)/5;
    
    //if number != 0, print it out.
    if(num_100!=0) printf("$100: %d\n",num_100);
    if(num_50!=0) printf("$50: %d\n",num_50);
    if(num_20!=0) printf("$20: %d\n",num_20);
    if(num_10!=0) printf("$10: %d\n",num_10);
    if(num_5!=0) printf("$5: %d\n",num_5);

    return 0;
}