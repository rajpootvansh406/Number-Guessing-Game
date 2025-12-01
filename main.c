#include <stdio.h>

int main() {
    int number, guess, attempts = 0;

    printf("Player 1, enter a number between 1 and 100: ");
    scanf("%d", &number);

    printf("\n\n--- Now give the computer to Player 2 and Player 1 cover the input number on the screen with your hands ---\n\n");
    printf("Player 2, try to guess the number!\n");

    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess == number) {
            printf("Correct! You guessed the number in %d attempts.\n", attempts);
            break;
        }

        // Checking if close
        int diff = number - guess;
        if(diff > 0 && diff <= 5) {
            printf("Close but low! Try again.\n");
        }
        else if(diff < 0 && diff >= -5) {
            printf("Close but high! Try again.\n");
        }
        else if(guess < number) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("Too high! Try again.\n");
        }
    }

    return 0;
}

