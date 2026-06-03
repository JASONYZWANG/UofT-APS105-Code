#include <stdio.h>
#include <time.h>
#include <math.h>
int main(void){
    double exchange_rate=0;
    printf("input the exchange rate: ");
    scanf("%lf",&exchange_rate);
    printf("input the amount of CAD: ");
    double CAD;
    scanf("%lf",&CAD);
    printf("the amount of the RMB is %.2lf\n",exchange_rate*CAD);
    return 0;  
}
