#include <stdio.h>
int main(void){
    //input the temp and threshold
    const int Water=100,Mercury=357,Copper=1187,Silver=2193,Gold=2660;
    int threshold;
    printf("Enter the threshold in Celsius: ");
    scanf("%d",&threshold);
    int temp;
    printf("Enter the observed boiling point in Celsius: ");
    scanf("%d",&temp);

    //judge according to  temp+-threshold
    if(temp<=Water+threshold && temp>=Water-threshold){
        printf("The substance you tested is: Water\n");
    }
    else if(temp<=Mercury+threshold && temp>=Mercury-threshold){
        printf("The substance you tested is: Mercury\n");
    }
    else if(temp<=Copper+threshold && temp>=Copper-threshold){
        printf("The substance you tested is: Copper\n");
    }
    else if(temp<=Silver+threshold && temp>=Silver-threshold){
        printf("The substance you tested is: Silver\n");
    }
    else if(temp<=Gold+threshold && temp>=Gold-threshold){
        printf("The substance you tested is: Gold\n");
    }
    else{
        printf("Substance unknown.\n");
    }

    return 0;

}