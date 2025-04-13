#include <stdio.h>

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    printf("Enter the number of lines : ");
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}