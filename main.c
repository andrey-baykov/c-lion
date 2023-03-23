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

int main() {
// one();
    two();
    return 0;
}
