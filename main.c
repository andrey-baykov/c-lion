#include <stdio.h>

int main() {
//    int age;
//    int currentYear;
//    double temp;
//    age = 42;
//    temp = 36.6;
//    printf("My age: %d", age);
//    int grade1;
//    int grade2;
//    scanf("%d", &age);
//    scanf("%d", &currentYear);
//    printf("Born in: %d\n", currentYear - age);
// ------------------------------------
//    double height, width;
//    double aria;
//    printf("Enter height: ");
//    scanf("%lf", &height);
//    printf("Enter width: ");
//    scanf("%lf", &width);
//    aria = height * width;
//    printf("The area: %.2lf\n", aria);
//--------------------------------------

    double height;
    double width;
    double perimeter;

    printf("Enter size of height: ");
    scanf("%lf", &height);
    printf("Enter size of width: ");
    scanf("%lf", &width);
    perimeter = (height + width) * 2;
    printf("Perimeter: %.2lf", perimeter);
    return 0;
}
