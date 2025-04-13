#include <stdio.h>

int main(){
    printf("Enter the temperature in celsius:\n");
    float celsius,fahrenheit;
    scanf("%f", &celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("Fahrenheit : %f\n", fahrenheit);
    return 0;
}