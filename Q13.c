#include<stdio.h>
int main() {
    /*Q13. Write a C program that takes two numbers and an operator (+, -, *, /) 
    from the user and performs the operation using a switch case. */
     
    
    char op; 
    double num1, num2; 

    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); 

    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2); 

    
    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break; 
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break; 
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break; 
        case '/':
            
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            
            printf("Error! operator is not correct\n");
    }

    return 0; 
}
