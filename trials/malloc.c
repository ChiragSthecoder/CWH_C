#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter the number of integers needed in the array : \n");
    int n;
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the numbers in the array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");
    free(ptr);

    return 0;
}