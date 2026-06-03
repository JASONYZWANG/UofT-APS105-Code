// #include <stdio.h>
// void Print_Row(int n);
// int main(void){
//     int number;
//     scanf("%d",&number);
//     for(int row=1;row<=number;row++){
//         Print_Row(row);
//     }
//     return 0;
// }
// void Print_Row(int n){
//     for(int i=0;i<n;i++,printf("* ")){};
//     printf("\n");
// }
// #include <stdio.h>
// int Power(int x, int n);
// int main(void){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("%d\n",Power(a,b));
//     printf("%d\n",result);
//     return 0;
// }

// int Power(int x, int n){
//     int result=1;
//     for(int i=0;i<n;i++,result*=x){};
//     return result;
// }
// #include <stdio.h>

// void skipSpace(int n) {
//   for (int i = 1; i <= n; i++) printf(" ");
// }

// void printLeft(int n) {
//   for (int i = 1; i <= n; i++) printf("/");
// }

// void printRight(int n) {
//   for (int i = 1; i <= n; i++) printf("\\");
// }

// int main(void) {
//   const int TSize = 5;
//   int i;
//   skipSpace(TSize);
//   printf("*\n");
//   for (i = 0; i < TSize - 2; i++) {
//     skipSpace(TSize - 1 - i);
//     printLeft(i + 1);
//     printf("|");
//     printRight(i + 1);
//     printf("\n");
//   }
//   skipSpace(TSize);
//   printf("|");
//   return 0;
// }
// #include <stdio.h>
// char Mid(char a, char b, char c);
// int main(void){
//     char a,b,c;
//     scanf("%c%c%c",&a,&b,&c);
//     printf("%c\n",Mid(a,b,c));
// }
// char Mid(char a, char b, char c){
//     char mid;
//     if((b>=a && b<=c)||(b>=c && b<=a)) mid=b; //abc or cba
//     else mid=((a>=b && a<=c)||(a>=c && a<=b)) ? a : c;
//     return mid;
// }
// #include <stdio.h>
// int Reverse(int n){
//     int result=0,temp=n;
//     while(temp>0){
//         result=(result+temp%10)*10;
//         temp/=10;
//     }
//     return result/10;
// }
// int main(void){
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",Reverse(n));
// }
// #include <stdio.h>
// #include <math.h>
// double Arctan(double n);
// int main(void){ 
//     printf("Pi = %.10lf\n",4*(4*Arctan(1.0/5.0)-Arctan(1.0/239.0)));
//     return 0;
// }
// double Arctan(double n){
//     double result=0.0;
//     for(int i=0;i<=150;result+=( (pow(n,i*2+1)/(i*2+1))*(pow(-1,i)) ),i++){};
//     return result;
// }
#include <stdio.h>
#include <math.h>
void pythagoreanTriples (int x);
int main(void){
    int a;
    scanf("%d",&a);
    pythagoreanTriples(a);
}
void pythagoreanTriples (int x) {
    double z;
    int y;
    int existence=0;
    for(y=1;y<100;y++){
        z=pow(x*x+y*y,0.5);
        if(z-ceil(z)==0.0000 && y<z){//which means z is integer
            printf("x = %d, y = %d, z = %.0lf\n",x,y,z);
            existence++;
        }
    }
    if(!existence){
        printf("no solution exists.\n");
    }
    
}