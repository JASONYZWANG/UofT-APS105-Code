#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool prime_number(int n){
	if(n<=1) return false;
	else if(n==2) return true;
	else if(n%2==0) return false;
	else{
		for(int i=2;i<=(int)(n/2);i++){
			if(n%i==0){
				return false;
			}
		}
	}
	return true;
}
int main(void){
	int n1,n2;
	printf("Input the range: \n");
	scanf("%d%d",&n1,&n2);
	for(int i=n1;i<=n2;i++){
		if(prime_number(i)==true){
			printf("%d is a prime number\n",i);
		}
	}
	return 0;
}

