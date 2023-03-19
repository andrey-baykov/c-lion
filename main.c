#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2;
    char mathOperation;

    printf("Enter math operation (+, -,..): ");
    scanf("%c", &mathOperation);
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (mathOperation) {
        case '+':
            printf("%d %c %d = %d\n", num1, mathOperation, num2, num1+num2);
            break;
        case '-':
            printf("%d %c %d = %d\n", num1, mathOperation, num2, num1-num2);
            break;
        case '/':
            if (num2==0)
                printf("Cant divide to 0\n");
            else
                printf("%d %c %d = %d\n", num1, mathOperation, num2, num1/num2);
            break;
        case '*':
            printf("%d %c %d = %d\n", num1, mathOperation, num2, num1*num2);
            break;
        default:
            printf("Unfamiliar sign\n");
    }
    return 0;
}
