#include <stdio.h>

int sum_n(int);

int main() {
    printf("Enter n: ");
    int n,sum;
    scanf("%d",&n);
    sum=sum_n(n);
    printf("The sum of %d natural numbers is %d\n",n,sum);
    return 0;
}

int sum_n(int n){
    if (n == 0)  // Base case: Sum of first 0 numbers is 0
        return 0;
    else
        return n + sum_n(n - 1);  // Recursive case
}