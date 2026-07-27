#include <stdio.h>
int main(void){
    printf("Enter the daily rate: ");
    double daily_rate;
    scanf("%lf",&daily_rate);

    printf("Enter the rental period (in days): ");
    int num_day;
    scanf("%d",&num_day);
    printf("\n");

    int num_freeday;
    num_freeday=num_day/4;
    printf("Your total free day(s) in this rental is: %d\n",num_freeday);
    
    double price;
    const double tax_rate=0.13;
    price=(num_day-num_freeday)*daily_rate*(1+tax_rate);
    printf("Your total charge including taxes is: %.2lf\n",price);
    
    return 0;
}