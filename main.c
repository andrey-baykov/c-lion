#include <stdio.h>
/*
int main() {
    int a=5, b=2;
    double result;
    result = (double)a / b;
    printf("result = %lf\n", result);
    printf("%d\n", (int)2.5);
    return 0;
}
*/

//int main(){
//    int grade1, grade2, grade3;
//    double average;
//    printf("Enter grade1 ");
//    scanf("%d", &grade1);
//    printf("Enter grade2 ");
//    scanf("%d", &grade2);
//    printf("Enter grade3 ");
//    scanf("%d", &grade3);
//    average = (double)(grade1+grade2+grade3)/3;
//    printf("Average = %.2lf\n", average);
//    return 0;
//}
//
//int main(){
//    double temp_c, temp_f;
//    printf("Enter temperature in C: ");
//    scanf("%lf", &temp_c);
//    printf("Temperature in F: %.2lf\n", temp_c*1.8 + 32);
//    printf("Enter temperature in F: ");
//    scanf("%lf", &temp_f);
//    printf("Temperature in F: %.2lf\n", (temp_f-32)/1.8);
//    return 0;
//}


int main(){ //SWAP
    double a, b;
    printf("Enter A: ");
    scanf("%lf", &a);
    printf("Enter B: ");
    scanf("%lf", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("A: %.2lf, B: %.2lf", a, b);
    return 0;
}