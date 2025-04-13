#include <stdio.h>
#include <string.h>

typedef struct vector_using_structures{
    int i;
    int j;
} vector;

vector sumVector(vector v1, vector v2){
    vector v3 = {v1.i+v2.i, v1.j+v2.j};
    return v3;
}

int main(){
    vector v1 = {100,-100}, v2 = {100,100}, vt;
    printf("Vector 1 = %di + %dj\n",v1.i,v1.j);
    printf("Vector 2 = %di + %dj\n",v2.i,v2.j);
    vt = sumVector(v1,v2);
    printf("The sum of vector 1 and 2 is %di + %dj\n",vt.i,vt.j);
    return 0;
}