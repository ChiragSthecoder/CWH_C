#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Enter the marks of the three subjects:\n");
    int subject1, subject2, subject3,total,max;
    scanf("%d%d%d",&subject1,&subject2,&subject3);
    
    total=subject1+subject2+subject3;
    float percentage = (total*100)/300;

    bool pass = true;

    if(subject1>=33 && subject2>=33 &&subject3>=33 && percentage>=40)
        printf("The student has passed all tests\n");
    else
        printf("The student has not passed all tests\n");

    return 0;
}