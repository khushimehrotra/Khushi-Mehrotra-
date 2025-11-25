#include<stdio.h>
#include <string.h>

/*Q23.Write a C program to read a string from the user and print it in reverse order using a character array.*/

int main() {
    char str[100]; 
    int length;

   
    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);
    printf("The reversed string is: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n"); 

    return 0;
}
