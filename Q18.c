#include<stdio.h>
int main() {
    /*Q18.Write a C program for a simple calculator that repeatedly asks the user
    for two numbers and an operation (+, -, *, /) until the user chooses to exit.
    Must use a do while loop to repeat until exit. */
    double num1 , num2 , answer;
    char op , yes_no;
    do {
        printf("Enter an operator (+,-,*,/) : ");
        scanf("%c", &op);
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);
        switch (op){
            case '+':
            answer = num1 + num2;
            printf("Answer is %2lf\n " , answer);
            break;
            case '-':
            answer = num1 - num2;
            printf("Answer is %2lf\n " , answer);
            break;
            case '*':
            answer = num1 * num2;
            printf("Answer is %2lf\n " , answer);
            break;

            case '/' :
            if(num2 != 0){
                answer = num1 / num2;
            printf("Answer is %2lf\n " , answer);
            } else {
                printf("Error! \n ");
            }
            break;
            default :
            printf("Invalid operator \n");
        }
        printf("continue or not? (y/n):");
        scanf( " %c", &yes_no);
    } while (yes_no == 'y');
    return 0;
}