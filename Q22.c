#include<stdio.h>
//Q22. Write a C program to count how many even and odd numbers are present in an array using functions.
int countEven(int arr[], int size) {
    int even = 0;
    for (int i =0; i< size; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
    }
    return even;
}

int countOdd(int arr[], int size) {
    int odd = 0;
    for (int i =0; i<size; i++){
        if(arr[i] %2 != 0) {
            odd++;
        }
    }
    return odd;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenNum = countEven(arr, size);
    int oddNum = countOdd(arr, size);
    printf("Total Even Numbers: %d\n" , evenNum);
    printf("Total Odd Numbers: %d \n", oddNum);
    return 0;

}