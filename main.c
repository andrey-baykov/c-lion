#include <stdio.h>

//int main() {
//    double a1;
//    double d;
//    int n;
//    printf("Enter A1: ");
//    scanf("%lf", &a1);
//    printf("Enter d: ");
//    scanf("%lf", &d);
//    printf("Enter n: ");
//    scanf("%d", &n);
//    printf("Max: %lf", a1+(n-1)*d);
//
//    return 0;
//}

int main() {
    float a1, d, an, sn;
    int n;
    printf("Enter A1: ");
    scanf("%f", &a1);
    printf("Enter d: ");
    scanf("%f", &d);
    printf("Enter n: ");
    scanf("%d", &n);
    an = a1+(n-1)*d;
    sn = (a1 + an)*n/2;
    printf("Max: %f", sn);

    return 0;
}