# include <stdio.h>

// int main() {
//     int number1;
//     int number2;
//     printf("Please enter the first integer:");
//     scanf("%d", &number1);
//     printf("Please enter the second integer:");
//     scanf("%d", &number2);
//     printf("Sum is %d\n", number1 + number2);
//     return 0;
// }

// memory friendly usage
int main() {
    int number;
    int sum = 0;
    int reply;
    do {
        printf("Please enter number need to sum\n");
        scanf("%d", &number);
        sum += number;
        printf("Sum is %d\n", sum);
        printf("Need to continue? Enter 1 to continue, enter 0 to stop\n");
        scanf("%d", &reply);
    }while(reply);
    return 0;
}
