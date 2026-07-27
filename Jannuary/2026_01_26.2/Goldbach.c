#include <stdio.h>
#include <math.h>
unsigned int judge_goldbach(unsigned int);
unsigned int prime_number(unsigned int);

int main(void){
    unsigned int n;
    do{//input the even number larger than 2
        printf("input the number: \n");
        scanf("%u",&n);
    }while(n<=2 || n%2!=0);

    unsigned int result_secondpart=judge_goldbach(n);
    if(result_secondpart>0) printf("%u=%u+%u\n",n,n-result_secondpart,result_secondpart);
    else if(result_secondpart==0) printf("Rejected\n");
    return 0;
}

//judge the prime number
unsigned int prime_number(unsigned int a){
    if(a<=1) return 0;
    else if(a==2) return 1;
    else{
        for(unsigned int i=2;i<(unsigned int)(pow(a,0.5))+1;i++){
            if(a%i==0) return 0;
        }
    }
    return 1;
}

//find the goldbach prime number pair
unsigned int judge_goldbach(unsigned n){
    unsigned int first_part=2, second_part=n-first_part;
    if(prime_number(second_part)) return second_part;
    first_part=3;
    for( ;first_part<=n/2+1;first_part+=2){
        second_part=n-first_part;
        if(prime_number(second_part) && prime_number(first_part)) return second_part;
    }
    return 0;
}