#include <stdio.h>

typedef struct complex_number
{
    int i;
    int j;
} comp;


int main(){
    comp c1[5];
    printf("Enter the complex number values as (int)i (int)j : \n");
    for(int i=0;i<5;i++){
        scanf("%d%d",&c1[i].i,&c1[i].j);
    }
    printf("The complex numbers are : \n");
    for(int i=0;i<5;i++){
        printf("%di + %dj\n",c1[i].i,c1[i].j);
    }
    printf("\n");
    return 0;
}