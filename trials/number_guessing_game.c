#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand()%100) + 1 , num_of_guesses = 0;

    int guessed_number;
    while(guessed_number!=randomNumber){
        printf("Guess the number : ");
        scanf("%d",&guessed_number);
        if(guessed_number<randomNumber) printf("Guess a bigger number\n");
        if(guessed_number>randomNumber) printf("Guess a smaller number\n");
        num_of_guesses++;
    }
    num_of_guesses++;
    printf("You guessed the correct number in %d guesses\n", num_of_guesses);
    return 0;
}