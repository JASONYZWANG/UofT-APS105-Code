#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void){
    int n,a,b,c,d;
    printf("Enter an encrypted 4-digit combination: ");
    if (scanf("%d",&n) != 1) { fputs("Invalid or incomplete input.\n", stderr); exit(EXIT_FAILURE); }
    //seperate number
    d=n%10;
    c=n/10%10;
    b=n/100%10;
    a=n/1000;
    //printf("%d%d%d%d",a,b,c,d);

    int swap=a; a=d; d=swap;//swap a,d
    printf("The real combination is: %d%d%d%d\n",a,(9-b),(9-c),d);
}
