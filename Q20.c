#include<stdio.h>

 //Q20. Write a C program to reverse the elements of an array using a function.
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n -1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end++;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array is:");
    for (int i=0; i < n ; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    
    reverseArray(arr, n );
    printf("Reversed array is:");
    for(int i=0; i<n; i++){
        printf("%d",  arr[i]);
    }
    printf("\n");
    return 0;

}