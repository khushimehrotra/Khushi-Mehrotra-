#include<stdio.h>
int main(){
    //Q14. Write a program in C to calculate the sum of the first n natural numbers using a for loop
    int n, i,sum;
    sum = 0;
    printf("Enter number :");
    scanf("%d" , &n);
    for (i=1; i <=n; i++ ){
    sum += i;
    }
    printf("sum is %d \n", sum);
    return 0;
}