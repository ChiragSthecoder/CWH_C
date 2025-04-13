#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter the number of integers needed in the array : \n");
    int n;
    scanf("%d",&n);
    int *ptr = (int*)calloc(n,sizeof(int));
    printf("Enter the numbers in the array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");
    printf("Enter the number of additional blocks needed : ");
    int a;
    scanf("%d",&a);
    ptr = (int*)realloc(ptr,(n+a)*sizeof(int));
    printf("Enter the numbers in the new blocks of array : \n");
    for (int i = n; i < (n+a); i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The new array is : \n");
    for(int i=0;i<n+a;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");
    
    free(ptr);

    return 0;
}