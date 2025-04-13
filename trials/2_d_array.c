#include <stdio.h>

int main() {
    printf("Enter the number of rows and columns in array : \n");
    int row, column;
    scanf("%d%d",&row,&column);
    int array_2d[row][column];
    printf("Enter the numbers in the array \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&array_2d[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",array_2d[i][j]);
        }printf("\n");
    }
    return 0;
}