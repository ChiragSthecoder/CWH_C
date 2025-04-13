#include <stdio.h>

typedef struct employee{
    int score;
    int salary;
} emp;

int main(){
    emp e;
    emp* ptr = &e; //address of structure e
    (*ptr).score = 75;//same as saying e.score as (*ptr) yields e. remember * should be inside () and not *(ptr)
    ptr -> salary = 100000;//both the methods are correct
    printf("The score and salary if the employee is %d, %d\n",ptr->score,ptr->salary);
    return 0;
}