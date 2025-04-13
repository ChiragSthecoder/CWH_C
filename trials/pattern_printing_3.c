#include <stdio.h>

void pattern_print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*i + 1);j++){
            printf("* ");
        }printf("\n");
    }
}

int main() {
    printf("Enter the number of lines : ");
    int n;
    scanf("%d",&n);
    pattern_print(n);
    return 0;
}