#include <stdio.h>

int main() {
    int salary;
    float tax;

    // Prompt user to enter salary
    printf("Enter your salary: ");
    if (scanf("%d", &salary) != 1) {
        printf("Invalid input.\n");
        return 1; // Exit the program if input is invalid
    }

    // Validate salary
    if (salary < 0) {
        printf("Salary must be a positive number.\n");
        return 1;
    }

    // Tax calculation based on salary
    if (salary > 250000 && salary <= 500000) {
        tax = 0.05 * salary; // 5% tax
        printf("Tax amount to be paid is %.2f for the salary %d\n", tax, salary);
    } else if (salary > 500000 && salary <= 1000000) {
        tax = 0.2 * salary; // 20% tax
        printf("Tax amount to be paid is %.2f for the salary %d\n", tax, salary);
    } else if (salary > 1000000) {
        tax = 0.3 * salary; // 30% tax
        printf("Tax amount to be paid is %.2f for the salary %d\n", tax, salary);
    } else {
        printf("No tax applicable for salary %d\n", salary); // No tax if salary is <= 250000
    }

    return 0;
}
