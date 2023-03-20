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

int doWhile(){
    int userInput;

    do {
        printf("Input number: ");
        scanf("%d", &userInput);
    } while (userInput > 0);
    printf("Buy!\n");
    return  0;
}

int forLoop(){
    int number, power, powerLog, result, i;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter power: ");
    scanf("%d", &power);
    powerLog = power;
    result = 1;
    for (i=0; i < power; i++){
        result = result * number;
    }

    printf("Result: %d ^ %d = %d", number, powerLog, result);

    return 0;
}

int main() {
//    asterisks();
//    power();
//    doWhile();
    forLoop();
    return 0;
}

