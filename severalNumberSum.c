# include <stdio.h>

int main() {
    int n;
    int sum = 0;
    do {
        printf("Please enter number to sum: (enter 0 to quit)\n");
        scanf("%d", &n);
        sum += n;
    } while (n != 0);
    printf("The sum of the numbers is %d\n", sum);
    return 0;
}