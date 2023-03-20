#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    int userInput;
    printf("Enter count of asterisks: ");
    scanf("%d", &userInput);
    while (count < userInput){
        printf("*");
        count ++;
    }
    return 0;
}
