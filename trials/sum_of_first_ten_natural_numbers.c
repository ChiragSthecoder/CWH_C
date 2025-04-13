// #include <stdio.h> //while loop

// int main() {
//     int i=0,sum = 0;
//     while(i<=10){
//         sum+=i;
//         i++;
//     }
//     printf("The sum of first ten natural numbers is %d\n", sum);
//     return 0;
// }

// #include <stdio.h> // for loop

// int main() {
//     int i=0, sum = 0;
//     for(i=10;i;i--)
//         sum+=i;
//     printf("The sum of first ten natural numbers is %d\n", sum);    
//     return 0;
// }

#include <stdio.h>

int main() {
    int i=0,sum=0;
    do{
        sum+=i++;
    }while(i<=10);
    printf("The sum of first ten natural numbers is %d\n", sum);
    return 0;
}