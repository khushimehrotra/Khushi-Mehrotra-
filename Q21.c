#include<stdio.h>
//Q21. Write a C program to calculate the average of n numbers stored in an array using a function.
float average(int arr[], int n){
    int sum =0;
    for(int i=0; i < n; i++){
        sum += arr[i];
    }
    return (float)sum/n;
}
int main() {
    int n;
    printf("Enter the number of elements(n):");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter %d numbers: \n", n);
    for (int i = 0; i<n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf( "%d" , &numbers[i]);
    }

    float avg = average(numbers, n);
    printf("The average of the numbers is : %2f\n", avg);
    return 0;
}