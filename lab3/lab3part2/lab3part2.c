#include <stdio.h>
#include <math.h>
int main(void){
    const double PI=3.1415926,g=9.810;
    const int L=2,speed=20;
    double H,d;

    //input H,d
    do{
        printf("Please enter the horizontal distance from the wall between 3 and 30 m:\n");
        scanf("%lf",&d);
    }while(d<3 || d>30);
    do{
        printf("Please enter the target height between 3 and 6 m:\n");
        scanf("%lf",&H);
    }while(H<3 || H>6);
    
    double speed_x,speed_y,time,height,rad;
    for(double i=0.00;i<=90.00;i+=1.00){
        rad=(i/360.0)*(2.0*PI);
        speed_x=speed*cos(rad);
        speed_y=speed*sin(rad);
        time=d/speed_x;
        height=L+speed_y*time+(0.5)*(-g)*(time*time);
        if(fabs(height-H)<0.30){
            printf("The angle should be %.2lf\n",i);
            break;
        }
    }
    return 0;
}