#include<stdio.h>

//Q1. WAP to calculate the area and perimeter of a rectangle based on its length and width
int main() {
    int length = 2 , width = 4;
    printf("Area of rectangle : %d" , length*width);
    printf("\n Perimeter of rectangle : %d" , 2*(length + width));
    



//Q2. WAP to convert temperature from celsius to fahrenheit using the formula F= (C*9/5) +32


    int C = 32 , F = (C * 9/5) + 32;
    printf("\n celsius value is : %d" , C);
    printf("\n fahrenheit value is : %d" , F);
    


//Q3. WAP to add two numbers and print the sum , input from user
    
    int a , b , sum ;
    printf("\n enter first value :");
    scanf("%d" , &a);

    printf("\n enter second value :");
    scanf("%d", &b);

    sum = a+b ;
    printf("sum is : %d\n " , sum );
    return 0;

}

    
