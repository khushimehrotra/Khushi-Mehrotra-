#include<stdio.h>
int main() {
    /*Q11. Using else-if ladder
Write a C program that asks the user to enter marks (0–100) and assigns a grade based on the following conditions:
90–100  Grade A
75–89  Grade B
50–74  Grade C
Below 50  Grade F*/

int marks;
printf("enter your marks");
scanf("%d " , &marks);
if (marks>=50 && marks<75){
    printf("Grade C");
} 
else if (marks>=75 && marks<90){
    printf("Grade B");
}
else if (marks>=90 && marks<=100){
    printf("Grade A");
}
else
printf("Grade F");
return 0;

}