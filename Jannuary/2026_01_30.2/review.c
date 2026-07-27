// #include <stdio.h>
// int main(void){
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int b[]={1,2,3,4,5,6};
//     printf("%ld\n",sizeof(a));
//     printf("%ld\n",sizeof(b));

//     return 0;
// }

// #include <stdio.h>
// const int size=10;
// int main(void){
//     int a[size]={0};
//     for(int i=0;i<10;printf("%d\n",a[i]),i++){};
//     return 0;
// }

// #include <stdio.h>
// #define size 10
// int main(void){
//     int a[size]={1};
//     for(int i=0;i<10;printf("%d\n",*(a+i)),i++){};
//     return 0;
// }
// #include <stdio.h>
// int main(void){
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int* parr_a=&a;
//     printf("%p\n",parr_a);
//     return 0;
// }
// #include <stdio.h>

// int main(void) {
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int* p1 = a;               // point to the first element in array (int*)
//     int (*p2)[10] = &a;        // point to the whole array  (int (*)[10])
//     printf("p1 的地址: %p, p1+1 的地址: %p (跳过 4 字节)\n", (void*)p1, (void*)(p1 + 1));
//     printf("p2 的地址: %p, p2+1 的地址: %p (跳过 40 字节)\n", (void*)p2, (void*)(p2 + 1));
//     return 0;
// }
// #include <stdio.h>
// int main(void){
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int* pa=a;
//     for(int i=0;i<(int)sizeof(a)/4;i++){
//         printf("%d\n",*(pa+i));
//     }
// }
// #include <stdio.h>
// void swap(int*,int*);
// int main(void){
//     int a[6]={2, 5, 7, 8, 9, 12};
//     int* parr=a;
//     for(int i=0; i<(int)sizeof(a)/4/2; swap(parr+i,parr+(int)sizeof(a)/4-i-1),i++){};
//     for(int i=0; i<(int)sizeof(a)/4; printf("%d, ",*(parr+i)),i++);
//     return 0;
// }
// void swap(int* a, int* b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// #include <stdio.h>
// int main(void){
//     int a[5];
//     int* pa=a;
//     for(int i=0;i<5;i++){
//         printf("%p\n",(void*)(pa+i));
//     }
// }
// #include <stdio.h>
// #define Size 100
// int main(void){
//     int a[Size];
//     int* end=&(a[Size-1]);
//     printf("%ld\n",end-a);
//     return 0;
// }