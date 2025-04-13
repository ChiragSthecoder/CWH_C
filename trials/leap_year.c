#include <stdio.h>

int main() {
    printf("Enter the year:");
    int year;
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==0))
        printf("The year is a leap year\n");
    else    
    printf("The year is not a leap year\n");        
    return 0;
}