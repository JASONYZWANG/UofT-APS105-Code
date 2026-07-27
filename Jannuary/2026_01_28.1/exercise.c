// #include <math.h>
// #include <stdio.h>
// const double foot_cm=30.48;
// const double inch_cm=foot_cm/12.0;
// void getInput(int*,int*);
// void Print(int,int,int,int);
// void Convert_unit(int,int,int*,int*);
// int main(void) {
//     int input_feet, input_inches, result_metre, result_cm;
//     getInput(&input_feet,&input_inches);
//     Convert_unit(input_feet,input_inches,&result_metre,&result_cm);
//     Print(input_feet,input_inches,result_metre,result_cm);
// }
// void getInput(int *outFeet, int *outInches){
//     printf("Please enter the feet and inches to convert: ");
//     scanf("%d %d",outFeet,outInches);
// }
// void Convert_unit(int feet, int inches, int *outMetres, int *outCentimetres){
//     double cm=rint(feet*foot_cm+inches*inch_cm);
//     *outMetres=(int)(cm)/100;
//     *outCentimetres=(int)(cm)-100*(*outMetres);
// }
// void Print(int feet, int inches, int metres, int centimetres){
//     printf("%d feet %d inches is %d metres and %d centimetres\n",feet,inches,metres,centimetres);
// }
#include <stdio.h>
void sumAndProductOfMultiples(int,int,int,int*,int*);
void Input(int*,int*,int*);
int main(void){
    int multi1,multi2,max,sum_result,product_result;
    Input(&multi1,&multi2,&max);
    sumAndProductOfMultiples(multi1,multi2,max,&sum_result,&product_result);
    printf("m1 = %d, m2 = %d, max = %d, sum = %d, product = %d\n",multi1,multi2,max,sum_result,product_result);
    return 0;
}
void Input(int* in_multi1, int* in_multi2, int* in_max){
    printf("Please input 3 numbers:\n");
    scanf("%d %d %d", in_multi1,in_multi2,in_max);
}
void sumAndProductOfMultiples(int multiple1, int multiple2, int max,int* sumPtr, int* productPtr){
    *productPtr=1;
    *sumPtr=0;
    for(int i=multiple1;i<max;i+=multiple1) {*productPtr*=i; *sumPtr+=i;}
    for(int i=multiple2;i<max;i+=multiple2) {*productPtr*=i; *sumPtr+=i;}
}