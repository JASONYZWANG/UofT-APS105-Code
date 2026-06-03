#include <stdio.h>
int main(void){
    const double inch_meter=0.0254;
    double meter;
    printf("Please provide a distance in metres:\n");
    scanf("%lf",&meter);

    double length=meter/inch_meter; //total length in inch
    int length_int=(int)(meter/inch_meter); 
    int yard_int=length_int/36;
    int feet_int=(length_int-yard_int*36)/12;
    int inch_int=length_int-yard_int*36-feet_int*12;
    double inch_double=length-yard_int*36-feet_int*12-inch_int;

    printf("%d yards, %d feet, %d inches, %.2lf inches remainder\n",yard_int,feet_int,inch_int,inch_double);
}