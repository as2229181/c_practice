# include <stdio.h>

int main() {
    int guess;
    int answer = 30;
    int count = 0;
    while (guess != answer) {
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count ++;
        if (guess > answer) {
            printf("Too big! Try again.\n");
        } else if (guess < answer) {
            printf("Too small! Try again.\n");
        }
    }
    printf("Your answer is correct!\n");
    printf("You guess %d times\n", count);
    return 0;
}