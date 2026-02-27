# include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Please enter first integer!");
    scanf("%d", &num1);
    printf("Please enter second integer!");
    scanf("%d", &num2);
    printf("Please enter third integer!");
    scanf("%d", &num3);
    double average;
    // need to divid by float
    average = (num1 + num2 + num3)/3.;
    printf("Average is %f", average);
    return 0;
}
