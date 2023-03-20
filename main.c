#include <stdio.h>

//int main() {
//    char myChar1 = 'a';
//    printf("Character: %c \n", myChar1);
//    printf("Decimal ASCII Code: %d \n", myChar1);
//    printf("Hexadecimal ASCII Code: %X \n", myChar1);
//    return 0;
//}

//int main() {
//    char myChar1 = 'a';
//    char myChar2 = 97;
//    char myChar3 = 0x61;
//    char myChar4 = 0b01100001;
//
//    printf("Character: %c %c %c %c \n", myChar1, myChar2, myChar3, myChar4);
//
//    return 0;
//}

//int main(){
//    int year, month, day;
//    printf("Enter year: ");
//    scanf("%d", &year);
//    printf("Enter month: ");
//    scanf("%d", &month);
//    printf("Enter day: ");
//    scanf("%d", &day);
//    printf("Year: 0x%X\n", year);
//    printf("Month: 0x%X\n", month);
//    printf("Day: 0x%X\n", day);
//    return 0;
//}

int main(){
    char userChar;
    printf("Enter character: ");
    scanf("%c", &userChar);
    if (97 <= userChar && userChar <= 122)
        printf("Lowercase Letter\n");
    else if (65 <= userChar && userChar <= 90)
        printf("Upper Letter\n");
    else if (48 <= userChar && userChar <= 57)
        printf("Digit\n");
    else
        printf("Other\n");
    return 0;
}