#include <stdio.h>

void snake_water_gun(int a, int b) {
    if (a == b) {
        printf("Tie\n");
        return;
    }

    if ((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1)) {
        printf("Player 1 wins\n");  
    } else {
        printf("Player 2 wins\n");
    }
}

int main() {
    int a, b;
    printf("Enter\n1: Snake\n2: Water\n3: Gun\n");
    
    printf("Player 1 choose: ");
    scanf("%d", &a);

    printf("Player 2 choose: ");
    scanf("%d", &b);

    if (a < 1 || a > 3 || b < 1 || b > 3) {
        printf("Invalid input. Please enter 1, 2, or 3 only.\n");
    } else {
        snake_water_gun(a, b);
    }

    return 0;
}
