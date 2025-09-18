#include<stdio.h>
int main() {
    /*Q9. Write a C program that takes an integer input from the user and checks whether 
    the number is even or odd using an if - else statement.*/

    int a;
    printf("enter an integer:");
    scanf("%d", &a);
    if(a%2 == 0) {
        printf("integer is even \n");
    } else {
        printf("integer is odd \n");
    }
    return 0;
}