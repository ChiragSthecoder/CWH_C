#include <stdio.h>

int main() {
    int i=1, n;
    printf("Enter the number that you want multiplication table of : ");
    scanf("%d",&n);
    for ( i = 1; i <=20 ; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
    return 0;
}