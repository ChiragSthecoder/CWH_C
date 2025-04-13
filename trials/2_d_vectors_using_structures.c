#include <stdio.h>
#include <string.h>

typedef struct vector_using_structures{
    int i;
    int j;
} vector;

int main(){
    vector v1 = {100,-100};
    printf("Vector = %di + %dj\n",v1.i,v1.j);
    return 0;
}