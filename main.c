#include <stdio.h>

int main()
{
    char myChar;
    myChar = ' ';
    while (myChar != 'q')
    {
        printf("Enter character: ");
        scanf("%c", &myChar);
        printf("Go again!\n");
    }
    return 0;
}
