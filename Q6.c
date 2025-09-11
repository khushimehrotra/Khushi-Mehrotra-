#include<stdio.h>

//Q6. Given three values, write a program to read three values from keyboard and print out the largest of them.
int main(){
    int a , b , c , largest ;
    printf("enter values :");
    scanf("%d %d %d" , &a, &b , &c);
    largest = ( a > b ? (c > a ? c : a) : (c > b ? c : b));
    printf("largest is %d" , largest);
        
    return 0;
}