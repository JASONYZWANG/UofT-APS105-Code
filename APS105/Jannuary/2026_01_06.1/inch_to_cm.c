#include <stdio.h>
#include <math.h>
int main(void){
  // const double pi=3.1415926;
  // double r,h,V;
  // printf("Please input raduis and height: ");
  // scanf("%lf%lf",&r,&h);
  // V=pi*(r*r)*h;
  // printf("The volume is %.3lf\n", V);
  // return 0;
  double discount,price,num;
  printf("Please imput the price, number and discount rate: ");
  scanf("%lf%lf%lf",&price,&num,&discount);
  printf("\n");
  double total_price=0;
  total_price=(price*discount)*num;
  printf("The total price should be: %lf\n", total_price);
  return 0;
}
