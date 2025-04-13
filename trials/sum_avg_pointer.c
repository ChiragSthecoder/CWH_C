#include <stdio.h>

void sum_and_average(float, float, float*, float*);

int main() {
    float a, b, sum, average;

    printf("Enter the two numbers: \n");
    scanf("%f %f", &a, &b);

    sum_and_average(a, b, &sum, &average);

    printf("The sum and average of %f and %f is %f and %f\n", a, b, sum, average);
    return 0;
}

void sum_and_average(float a, float b, float* sum, float* average) {
    *sum = a + b;
    *average = *sum / 2;
}
