#include <stdio.h>

void printGreeting() {
    printf("Hello!\n");
    printf("Welcome to study C!\n");
    printf("Good luck!\n");
}

void printMinMax(int a, int b){
    if (a < b){
        printf("Min: %d\n", a);
        printf("Max: %d\n", b);
    } else {
        printf("Min: %d\n", b);
        printf("Max: %d\n", a);
    }
}
int main() {
    printGreeting();
    printMinMax(23, 7);
    return 0;
}
