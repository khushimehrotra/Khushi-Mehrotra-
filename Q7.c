#include<stdio.h>

/*Q7 . Write a C program that takes an integer input and uses the bitwise AND (&) operator along with a ternary operator to check
whether the number is even or odd */
int main() {
    int a ;
    printf("Enter the number :");
    scanf("%d ", &a );
    (a&1 ? printf("odd") : printf("even")) ; 
    return 0;
} 
 