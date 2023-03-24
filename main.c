#include <stdio.h>

void one() {
    int *p;
    int a = 5;
    double *dp;
    char *cp;
    // & - address of variable

    printf("%d\n", a);  // value
    printf("%p\n", &a); // address

    p = &a;

    printf("%p\n", p); // address of a
    printf("%d\n", *p); // value of a
}

void two() {
    int grade1 = 60;
    int grade2 = 70;

    printf("Grade 1: %d, GRADE 2: %d\n", grade1, grade2);
    printf("Grade 1 address: %p, Grade 2 address: %p\n", &grade1, &grade2);
}

void three(){
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;

    printf("num1 = %d, num2 = %d \n", num1, num2);

    ptrA = &num1;
    ptrB = &num2;
    printf("num1 = %d, num2 = %d \n", num1, num2);

    *ptrA = *ptrA + 1;
    *ptrB = *ptrB + 3;
    printf("num1 = %d, num2 = %d \n", num1, num2);

    ptrA = ptrB;
    ptrB = ptrA;
    printf("num1 = %d, num2 = %d \n", num1, num2);
    printf("*ptrA = %d, *ptrB = %d \n", *ptrA, *ptrB);

    num1 = *ptrB;
    num2 = num1-3;
    printf("num1 = %d, num2 = %d \n", num1, num2);

}

int four(int num1, int num2){
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void getMinMax(int num1, int num2, int *min, int *max){
    if (num1 > num2){
        *min = num2;
        *max = num1;
    } else {
        *min = num1;
        *max = num2;
    }
}

int main() {
    //    one();
    //    two();
    //    three();
    //    max = four(a, b);

    int min, max, a, b;
    a = 13;
    b = 5;

    getMinMax(a, b, &min, &max);
    printf("Min: %d, Max: %d", min, max);
    return 0;
}
