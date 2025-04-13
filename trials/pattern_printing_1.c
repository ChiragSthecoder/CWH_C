#include <stdio.h>

void pattern(int n){
    if(n==0) return;
    for (int i = 0; i < n; i++)
    {
        printf("* ");
    }
    printf("\n");
    pattern(n-1);
}

int main() {
    printf("Enter the number of lines : ");
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}