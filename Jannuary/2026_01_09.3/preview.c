// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(void) {
//     int max, min;
//     scanf("%d%d",&max,&min);
//     srand(time(NULL));
//     printf("%d\n",rand()%(max-min+1)+min);
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// int main(void) {
//   double rate;
//   printf("Enter the exchange rate (1 CAD = ? USD): ");
//   scanf("%lf",&rate);
//   const double exchange_rate=rate;
  
//   printf("Enter the value in US dollars: ");
//   double USD;
//   scanf("%lf",&USD);
  
//   printf("The value in Canadian dollars is %.6lf.\n", rint((USD/exchange_rate)*100.0)/100.0);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(void){
//     srand(time(NULL));
//     for(int i=0;i<100;i++){
//        int randomChoice = (rand()%(75+75+1)-75)*2;
//     printf("%d  ",randomChoice); 
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void) {
//   char letter = ' ';
//   printf("Enter an alphabet letter: ");
//   scanf("%c", &letter);
  
//   if (!(((letter >= 'A') && (letter <= 'Z')) ||
//         ((letter >= 'a') && (letter <= 'z')))) {
//     printf("You didn't enter an alphabet.");
//   }
//   return 0;

// }
// if (y != 0) {
//   if (x % y < 10) {
//     // do something
//   }
// }

// if (y != 0 && x % y < 10) {
//   // do something
// }
//   if (age < 14) {
//     printf("You are not yet eligible to work in Ontario.");
//   } else if (age >= 14 &&
//              age <= 16) {  // Can omit age >=14, since it is redundant
//     printf("You are eligible to work only outside school hours.");
//   } else {
//     printf("You are eligible to work in Ontario.");
//   }
#include <stdio.h>
int main(void){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b && a>c){
        printf("%lf is max\n", a);
    }else if(b>c && b>a){
        printf("%lf is max\n", b);
    }else printf("%lf is max\n", c);
    return 0;
}
