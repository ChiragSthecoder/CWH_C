#include <stdio.h>

void hard_coded(int *length, int *breadth);  // Use pointers
void user_input(int *length, int *breadth);  // Use pointers

int main()
{
    int length = 0, breadth = 0;  // Declare length and breadth in main
    
    hard_coded(&length, &breadth);  // Pass addresses of length and breadth
    user_input(&length, &breadth);  // Pass addresses of length and breadth
    
    return 0;
}

void hard_coded(int *length, int *breadth) {
    *length = 10;  // Dereference pointers to modify values
    *breadth = 10;  // Dereference pointers to modify values
    int area = (*length) * (*breadth);
    printf("This is hard coded\n");
    printf("The area of rectangle with length %d and breadth %d is %d\n", *length, *breadth, area);
}

void user_input(int *length, int *breadth) {
    printf("Enter the length of rectangle\n");
    scanf("%d", length);  // Read value directly into memory address
    printf("Enter the breadth of rectangle\n");
    scanf("%d", breadth);  // Read value directly into memory address
    int area = (*length) * (*breadth);
    printf("This is from user inputs\n");
    printf("The area of rectangle with length %d and breadth %d is %d\n", *length, *breadth, area);
}
