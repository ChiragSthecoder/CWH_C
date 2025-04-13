#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i;
    printf("Enter the number to check if prime or not : \n");
    scanf("%d",&num);
    bool prime;
    if(num<2){
        printf("Invalid entry\n");
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if(num % i == 0){
            prime = false;
            printf("%d is not a prime number\n", num);   
            return 0;
        } 
                     
    }
    prime = true;
    printf("%d is a prime number\n", num);
    return 0;
}