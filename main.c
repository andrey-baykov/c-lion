#include <stdio.h>

//#define SIZE 3
//
//int main() {
//    int date[SIZE] = {1, 2, 2000};
//    int date2[SIZE];
//    int i;
//    for (i = 0; i < SIZE; i++) {
//        date2[i] = date[i];
//    }
//    for (i=0;i<SIZE;i++){
//        printf("original_date[%d] = %d\n", i, date[i]);
//        printf("copied_date[%d] = %d\n", i, date2[i]);
//    }
//
//    return 0;
//}
//
//#define SIZE 5
//
//int main() {
//    int arr[SIZE] = {1, 2, 3,2, 1};
//    int arrL[SIZE / 2], arrR[SIZE / 2], i, j, pal;
//
//    for (i = 0; i < SIZE / 2; i++) {
//        arrL[i] = arr[i];
//    }
//    j = 0;
//    for (i = SIZE - 1; i >= SIZE / 2; i--) {
//        arrR[j] = arr[i];
//        j++;
//    }
//
//    for (i = 0; i < SIZE / 2; i++) {
//        if (arrL[i] == arrR[i]) {
//            pal = 1;
//        } else {
//            pal = 0;
//        }
//
//    }
//
//    if (pal == 1)
//        printf("Palindrome\n");
//    else
//        printf("Not palindrome\n");
//    return 0;
//}

//#define SIZE 5
//
//int main() {
//    //int arr[SIZE] = {1, 4, 3, 7, 1};
//    int arr[SIZE] = {5, 7, 1, 5, 2};
//    int i, sum = 0, num1, num2;
//
//    for (i = 0; i < SIZE - 1; i++) {
//        if (arr[i] + arr[i + 1] > sum) {
//            sum = (arr[i] + arr[i + 1]);
//            num1 = i;
//            num2 = i + 1;
//        }
//    }
//
//    printf("Pair: arr[%d]=%d, arr[%d]=%d, sum: %d\n", num1, arr[num1], num2, arr[num2], sum);
//    return 0;
//}
//#define SIZE 5
//
//int main(){
//    int arr[SIZE] = {1,2,3,7, 10};
//    int i, notSorted=0, reallySorted=0, sorted=0;
//
//    for (i=0;i<SIZE-1;i++){
//        if (arr[i]<arr[i+1]){
//            reallySorted =1;
//        } else if (arr[i]==arr[i+1]){
//            sorted=1;
//        } else {
//            notSorted=1;
//        }
//    }
//
//    if (notSorted==1){
//        printf("Not sorted!");
//    } else if (sorted==1){
//        printf("Sorted!\n");
//    } else {
//        printf("Really sorted!\n");
//    }
//    return 0;
//}

#define SIZE 10

int main(){
    int arr[SIZE]={5,5,4,3,3,6,4,3,8,4};
    int i, j, sum, sumOfUnique=0;

    for (i=0;i<SIZE;i++){
        sum=arr[i];
        for (j=0;j<SIZE;j++){
            if (arr[i] == arr[j] && i != j){
                sum = sum + arr[i];
            }
        }
        if (sum == arr[i]){
            printf("Unique number: %d\n", arr[i]);
            sumOfUnique = sumOfUnique + sum;
        }
    }
    printf("Summa: %d\n", sumOfUnique);

    return 0;
}