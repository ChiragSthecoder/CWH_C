#include <stdio.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int main() {
    printf("Enter the two numbers : \n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The values of a and b are %d and %d\n",a,b);
    swap(&a,&b);
    printf("The values of a and b after swapping are %d and %d\n",a,b);
    return 0;
}