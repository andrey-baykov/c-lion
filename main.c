#include <stdio.h>

//int main() {
//    char myChar1 = 'a';
//    printf("Character: %c \n", myChar1);
//    printf("Decimal ASCII Code: %d \n", myChar1);
//    printf("Hexadecimal ASCII Code: %X \n", myChar1);
//    return 0;
//}

int main() {
    char myChar1 = 'a';
    char myChar2 = 97;
    char myChar3 = 0x61;
    char myChar4 = 0b01100001;

    printf("Character: %c %c %c %c \n", myChar1, myChar2, myChar3, myChar4);

    return 0;
}
