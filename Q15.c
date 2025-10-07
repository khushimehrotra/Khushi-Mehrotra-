#include<stdio.h>
int main(){
    //Q15. Write a C program using a loop to check if a number is prime or not.
    int num, i, is_prime=1;
    printf("Enter a positive integer:");
    scanf("%d",&num);
    if(num==0 || num==1){
        is_prime=0;
    }
    for(i=2;i<=num/2; ++i){
        if(num%i == 0){
            is_prime=0;
            break;
        }
    }
    if(is_prime == 0){
        printf("%d is not a prime",num);
    } else if(is_prime == 1){
        printf("%d is a prime", num);
    }
    return 0;
}