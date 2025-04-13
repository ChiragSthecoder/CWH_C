#include <stdio.h>

int main() {
    printf("Enter the 4 numbers : \n");
    int a,b,c,d,greatest;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    greatest = a;
    if(greatest<b)
        greatest = b;
    else if(greatest<c)
        greatest = c;
    else if(greatest<d)
        greatest = d;   
    printf("The greatest of all numbers is %d\n",greatest);             
    return 0;
}