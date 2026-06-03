#include <stdio.h>
#include <math.h>
int main(void){
    const double K=8.9875e9;
    double charge1,charge2,distance;

    //input and initialize charge 1,2 and distance;
    printf("Enter the value of the two charges separated by a space: ");
    char a,b,c,d; //temperary char to determine unit for charge 1,2
    scanf("%lf %c %c %lf %c %c",&charge1,&a,&b,&charge2,&c,&d);
    if(a=='n') charge1*=(1e-9);
    else if(a=='u') charge1*=(1e-6);
    if(c=='n') charge2*=(1e-9);
    else if(c=='u') charge2*=(1e-6);
    printf("Enter distance between charges in metres: ");
    scanf("%lf",&distance);

    //judge value
    double force=fabs((K*charge1*charge2)/(distance*distance));
    if(force<1e-6){
        printf("The force between charges is %.2lfnN (less than 1uN)\n",force/1e-9);
    }
    else if(force<1e-3){
        printf("The force between charges is %.2lfuN (less than 1mN)\n",force/1e-6);
    }
    else if(force<1){
        printf("The force between charges is %.2lfmN (less than 1N)\n",force/1e-3);
    }
    else if(force){
        printf("The force between charges is %.2lfN (1N or greater)\n",force/1.0);
    }
    return 0;
}