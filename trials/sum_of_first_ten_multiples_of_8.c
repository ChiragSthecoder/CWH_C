#include <stdio.h>

int main() {
    int sum = 0;
    for(int i=10;i;i--){
        sum += 8*i; 
    }
    printf("Sum of first ten multiples of 8 is %d\n",sum);
    return 0;
}