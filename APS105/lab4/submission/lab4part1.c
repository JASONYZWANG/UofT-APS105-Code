#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
bool inSafeZone(double,double);
double randDouble(void);
int main(void){
    srand(67);
    //input number of iterations
    printf("Number of Monte Carlo iterations: ");
    int iterations; 
    scanf("%d",&iterations);
    int sum_safe;
    for(int i=0;i<iterations;i++){
        double x=randDouble()*2.0-1.0;
        double y=randDouble()*2.0-1.0; //convert [0,1] into [-1,1]
        if(inSafeZone(x,y)) sum_safe++;
    }
    printf("Probability of safe landing: %.4lf\n",(double)sum_safe/iterations);
}

//judge whether location is in safe zone
bool inSafeZone(double x,double y){
    if(x*x+y*y<=1) return true;
    return false;
}

//generate random number
double randDouble(void) { 
    return (double)rand() / ((double)RAND_MAX + 1); 
}
