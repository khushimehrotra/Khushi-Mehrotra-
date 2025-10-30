#include<stdio.h>
void findMinMax(int arr[], int n, int *max, int *min){
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < n ; i++){
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
int main() {
    //Q19. Write a C program to find the maximum and minimum elements in an array using functions.
    int arr[] = {12, 5, 89, 34, 7, 61};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maximum, minimum;
    findMinMax(arr, n, &maximum, &minimum);
    printf("Maximum element in the array: %d\n", maximum);
    printf("Minimum element in the array is: %d\n", minimum);
    return 0;
}