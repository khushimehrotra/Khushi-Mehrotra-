#include<stdio.h>

int main() {
  //Q4. WAP to add two numbers and print the sum , input from user
    
    int a , b , sum ;
    printf("\n enter first value :");
    scanf("%d" , &a);

    printf("\n enter second value :");
    scanf("%d", &b);

    sum = a+b ;
    printf("sum is : %d\n " , sum );
    return 0;  
}