// #include <stdio.h>
// int main(void){
//     int a;
//     char b;
//     double c;
//     long long d;

//     int* pa=&a;
//     char* pb=&b;
//     double* pc=&c;
//     long long* pd=&d;
//     printf("%ld %ld %ld %ld\n", sizeof(a),sizeof(b),sizeof(c),sizeof(d));
//     printf("%ld %ld %ld %ld",sizeof(pa),sizeof(pb),sizeof(pc),sizeof(pd));
// }
// #include <stdio.h>
// int main(void){
//     int a=12;
//     int* pa=&a;
//     printf("%ls\n%ls\n",&a,pa);
//     return 0;
// }
// #include <stdio.h>

// int main(void) {
//     int a = 12;
//     int* pa = &a;
//     printf("Address using &a: %p\n", &a);
//     printf("Address using pa: %p\n", pa);
//     printf("%d\n",*pa);
//     return 0;
// }
// #include <stdio.h>
// int main(void){
//     int a=110;
//     double f=3.1415;
    
//     int* pa=&a;
//     double* pf=&f;
    
//     int** Ppa=&pa;
//     double** Ppf=&pf;

//     printf("%p %p\n", pa,pf);
//     printf("%p %p\n", Ppa,Ppf);
//     printf("%p %p\n", *Ppa,*Ppf);
//     printf("%d %lf\n", *pa,*pf);
// }
// #include <stdio.h>
// void swap(int*, int*);
// int main(void){
//     int a,b; scanf("%d%d",&a,&b);
//     swap(&a,&b);
//     printf("%d %d",a,b);
// }
// void swap(int* pa, int* pb){
//     int temp=*pa;
//     *pa=*pb;
//     *pb=temp;
// }
//swap函数里面的所有的变量，包括指针便偏高pa pb全都是临时的，函数结束的一瞬间就没有用了
//这里，是通过主函数中传输过来的a,b的内存地址，直接再内存角度再swap函数中进行值得交换。
// #include <stdio.h>
// int main(void){
//     double a[10]={0};
//     double* pArra=&a;
//     for(int i=0;i<10;i++){
//         printf("%p\n",pArra+i);
//     }
//     for(int i=0;i<10;*(pArra+i)=i*i,i++){};
//     for(int i=0;i<10;printf("%.2lf\n",*(pArra+i)),i++){};
//     return 0;
// }
#include <stdio.h>
int* Address(void);
int main(void){
    printf("%d\n",Address());
}
int* Address(void){
    int a=10;
    int* pa=&a;
    (*pa)*=6;
    return pa;
}
