#include<stdio.h>
#include<string.h>
/*Q26. Write a C program to define a structure called Student with the following members: name(string of max 50 characters)
SAP ID(integer), marks(float). Create an array of 5 students, take input for each, and display the details of all students.
*/
struct Student {
    char name[50];
    int sapID;
    float marks;
};
int main() {
    struct Student Student[5];
    int i;
    printf("Enter details for 5 students : \n");
    for(i=0;i<5;i++){
        printf("Student %d\n", i + 1);
        printf("Enter name of student: \n");
        scanf("%s", &Student[i].name);
        printf("Enter SAP ID:");
        scanf("%d",&Student[i].sapID);
        printf("Enter marks:\n");
        scanf("%f", &Student[i].marks);
    }
 
    printf(" \n --- Student Details --- \n");
    for(i =0; i<5; i++){
        printf("\n Student %d: \n", i + 1);
        printf("Name: %s\n", Student[i].name);
        printf("SAP ID: %d\n", Student[i].sapID);
        printf("Marks: %2f\n", Student[i].marks);
    }
    return 0;

}