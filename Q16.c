#include<stdio.h>
int main() {
    //Q16.  Write a program to count how many digits a number has using a while loop.
    int n , i;
    i = 0;
    printf("enter a number :");
    scanf("%d", &n);
    while(n> 0){
        n/=10;
        i++;
    }
    printf("Number of digits is %d \n",i);
    return 0;

}