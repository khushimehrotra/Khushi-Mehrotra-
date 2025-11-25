#include<stdio.h>
#include <string.h>
/*Q27.Define a union called Data that contains the following members: int i; float f; char str[20];
Write a program to : Assign values to each member of the union one by one. Print all members after each assignment.
*/

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    printf("Assigning integer...\n");
    data.i = 10;
    printf("data.i: %d\n", data.i);
   
    printf("\n");

    printf("Assigning float...\n");
    data.f = 220.5;
   
    printf("data.f: %f\n", data.f);
  
   
    printf("\n");

   
    printf("Assigning string...\n");
   
    strcpy(data.str, "Hello");
   
    printf("data.str: %s\n", data.str);
    printf("\n");

    return 0;
}
