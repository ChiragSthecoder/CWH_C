#include <stdio.h>
int main(){
    printf("Enter the divisor : \n");
    int divisor,dividend;
    scanf("%d",&divisor);
    int i=1;
    do{
        printf("Enter the dividend\n");
        scanf("%d",&dividend);
        // if((dividend%divisor) == 0){
        //     printf("The number %d is divisible by number %d\n",dividend,divisor);
        // }else{
        //     printf("The number %d is not divisible by number %d\n",dividend,divisor);
        // }
        ((dividend%divisor) == 0)?printf("The number %d is divisible by number %d\n",dividend,divisor): printf("The number %d is not divisible by number %d\n",dividend,divisor);
        //ternary operation
        printf("Enter 1 to continue or 0 to exit\n");
        scanf("%d",&i);
    }while(i==1);
    return 0;
}