#include <stdio.h>

int main() {
    printf("Enter the number that you want factorial of : ");
    int number,factorial=1;
    scanf("%d",&number);
    if(number==0) factorial=1;
    int i=number;
    while (i)
    {
        factorial*=i;
        i--;
    }
    printf("The factorial of the number %d is %d\n",number,factorial);

    return 0;
}