#include <stdio.h>

int main(void){
    int a=10;
    int* pa=&a;
    printf("%p\n",(void*)pa);
    return 0;
}
