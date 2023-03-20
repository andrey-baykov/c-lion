#include <stdio.h>

int asterisks(){
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

int power(){
    int num, pow, powLog;
    int result = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &powLog);
    pow = powLog;

    while (pow > 0){
        result = result * num;
        pow --;
    }
    printf("Result: %d ^ %d = %d", num, powLog, result);

}

int main() {
//    asterisks();
    power();
    return 0;
}

