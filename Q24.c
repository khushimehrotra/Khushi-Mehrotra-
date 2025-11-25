#include<stdio.h>
/*Q24.Write a C program to count the number of vowels, consonants, digits, and 
special characters in a given character array (string).*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100]; 
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (isalpha(ch)) {
            ch = tolower(ch); 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } 
        
        else if (isdigit(ch)) {
            digits++;
        } 
        else if (isspace(ch)) {
            continue; 
        }
        else {
            specialChars++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}
