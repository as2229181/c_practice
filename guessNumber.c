# include <stdio.h>

int main() {
    int guess;
    int answer = 102;
    printf("Guess the number, please enter the number:");
    scanf("%d", &guess);
    if (guess == answer){
        printf("Correct answer\n");
    }else if (guess > answer){
        printf("Too large\n");
    }else {
        printf("Too small\n");
    }
    return 0;
}