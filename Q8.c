#include<stdio.h>
int main(){
/*Q8. Write a C program to demonstrate the use of pre-increment(++x) and post-increment (x++) on a variable.Print 
the value of the variable before and after each operation */
    int x ;
    x = 5;
    printf("initial value of x is %d \n" , x);
    printf("post increment value is %d \n" , x++);
    printf("pre increment value is %d \n" , ++x );

    return 0;
}