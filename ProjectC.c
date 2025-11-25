#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "employees.dat"

struct Employee {
    int id;
    char name[50];
    char designation[50];
    float basicSalary;
    float hra;
    float da;
    float pf;
    float tax;
    float grossSalary;
    float netSalary;
};


void addEmployee() {
    struct Employee emp;
    FILE *fp;

    printf("\n--- Add New Employee ---\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name); 

    printf("Enter Designation: ");
    scanf(" %[^\n]", emp.designation);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    
    emp.hra = 0.15 * emp.basicSalary; 
    emp.da = 0.10 * emp.basicSalary;  
    emp.pf = 0.12 * emp.basicSalary;  
    emp.tax = 0.05 * emp.basicSalary; 

    emp.grossSalary = emp.basicSalary + emp.hra + emp.da;
    emp.netSalary = emp.grossSalary - emp.pf - emp.tax;

    fp = fopen(FILENAME, "ab"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee added successfully!\n");
}


void generateSalarySlip() {
    int searchId;
    struct Employee emp;
    FILE *fp;
    int found = 0;

    printf("\n--- Generate Salary Slip ---\n");
    printf("Enter Employee ID to generate slip: ");
    scanf("%d", &searchId);

    fp = fopen(FILENAME, "rb"); 
    if (fp == NULL) {
        printf("No employee records found.\n");
        return;
    }

    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        if (emp.id == searchId) {
            found = 1;
            printf("\n-----------------------------------------\n");
            printf("            SALARY SLIP                  \n");
            printf("-----------------------------------------\n");
            printf("Employee ID: %d\n", emp.id);
            printf("Name: %s\n", emp.name);
            printf("Designation: %s\n", emp.designation);
            printf("-----------------------------------------\n");
            printf("Earnings:\n");
            printf("  Basic Salary: %.2f\n", emp.basicSalary);
            printf("  HRA (15%%):    %.2f\n", emp.hra);
            printf("  DA (10%%):     %.2f\n", emp.da);
            printf("  Gross Salary: %.2f\n", emp.grossSalary);
            printf("-----------------------------------------\n");
            printf("Deductions:\n");
            printf("  PF (12%%):     %.2f\n", emp.pf);
            printf("  Tax (5%%):     %.2f\n", emp.tax);
            printf("-----------------------------------------\n");
            printf("Net Pay:        %.2f\n", emp.netSalary);
            printf("-----------------------------------------\n");
            break;
        }
    }

    if (!found) {
        printf("Employee with ID %d not found.\n", searchId);
    }

    fclose(fp);
}


void viewAllEmployees() {
    struct Employee emp;
    FILE *fp;
    int count = 0;

    printf("\n--- All Employee Records ---\n");

    fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("No employee records found.\n");
        return;
    }

    printf("ID\tName\t\tDesignation\tBasic Salary\tNet Salary\n");
    printf("-----------------------------------------------------------------------\n");

    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        printf("%d\t%s\t\t%s\t\t%.2f\t\t%.2f\n", emp.id, emp.name, emp.designation, emp.basicSalary, emp.netSalary);
        count++;
    }

    if (count == 0) {
        printf("No employees to display.\n");
    }

    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n--- Employee Salary Slip Generator ---\n");
        printf("1. Add New Employee\n");
        printf("2. Generate Salary Slip\n");
        printf("3. View All Employees\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                generateSalarySlip();
                break;
            case 3:
                viewAllEmployees();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}