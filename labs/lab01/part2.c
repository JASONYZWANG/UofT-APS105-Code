#include <stdlib.h>
#include <stdio.h>
int main(void){
    printf("Enter the daily rate: ");
    double daily_rate;
    if (scanf("%lf",&daily_rate) != 1) { fputs("Invalid or incomplete input.\n", stderr); exit(EXIT_FAILURE); }

    printf("Enter the rental period (in days): ");
    int num_day;
    if (scanf("%d",&num_day) != 1) { fputs("Invalid or incomplete input.\n", stderr); exit(EXIT_FAILURE); }
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
