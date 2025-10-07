#include<stdio.h>
int main() {
    //Q17. Write a C program to find the factorial of a number using a while loop.
    int n, i, fact ;
    i = 1;
    fact = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(i <= n){
        fact *= i;
        i++;
    }
    printf("factorial is %d\n" , fact);
    return 0;
    
}