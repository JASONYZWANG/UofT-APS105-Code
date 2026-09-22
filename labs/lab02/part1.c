#include <stdlib.h>
#include <stdio.h>
#include <math.h>
const double pi=3.1415926;
int main(void){
    double a,b,c;
    double alpha,beta,gamma;

    printf("Enter the length of side A: ");
    if (scanf("%lf",&a) != 1) { fputs("Invalid or incomplete input.\n", stderr); exit(EXIT_FAILURE); }
    printf("Enter the length of side B: ");
    if (scanf("%lf",&b) != 1) { fputs("Invalid or incomplete input.\n", stderr); exit(EXIT_FAILURE); }
    printf("Enter the measure of angle alpha in degrees: ");
    if (scanf("%lf",&alpha) != 1) { fputs("Invalid or incomplete input.\n", stderr); exit(EXIT_FAILURE); }

    alpha*=(pi/180.0); //convert to rad
    beta=asin(b*sin(alpha)/a);
    gamma=pi-beta-alpha;
    c=a*sin(gamma)/sin(alpha);

    //convert rad to deg
    alpha*=(180.0/pi);
    beta*=(180.0/pi);
    gamma*=(180.0/pi);

    printf("Results:\n");
    printf("Side A: %.2lf\nSide B: %.2lf\nSide C: %.2lf\n",a,b,c);
    printf("Angle Alpha: %.2lf degrees\nAngle Beta: %.2lf degrees\nAngle Gamma: %.2lf degrees\n",alpha,beta,gamma);

    return 0;
}
