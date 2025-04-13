#include <stdio.h>

int fibonacci(int);

int main(){
    printf("Enter the place of number in fibonacci series : ");
    int place;
    scanf("%d",&place);
    printf("The %dth number in fibonacci series is %d\n",place,fibonacci(place));
    return 0;
}

int fibonacci(int place){
    if(place==1||place==2) return place-1;
    return fibonacci(place-1) + fibonacci(place-2);
}