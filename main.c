#include <stdio.h>

void printGreeting() {
    printf("Hello!\n");
    printf("Welcome to study C!\n");
    printf("Good luck!\n");
}

void printMinMax(int a, int b) {
    if (a < b) {
        printf("Min: %d\n", a);
        printf("Max: %d\n", b);
    } else {
        printf("Min: %d\n", b);
        printf("Max: %d\n", a);
    }
}

float avgNumber() {
    float num1, num2, num3, sum;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter second number: ");
    scanf("%f", &num3);
    sum = num1 + num2 + num3;
    return sum / 3.0;
}

int main() {
//    printGreeting();
//    printMinMax(23, 7);
    float max;
    max = avgNumber();
    printf("Max: %f", max);
    return 0;
}
