# include <stdio.h>

int main(){
    int a, b;
    char operator;
    printf("Please enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    while (operator){
        printf("Please enter two number to calculate: ");
        scanf("%d%d", &a, &b);
        switch (operator) {
            case '+':
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case '-':
                printf("%d - %d = %d\n", a, b, a - b);
                break;
            case '*':
                printf("%d * %d = %d\n", a, b, a * b);
                break;
            case '/':
                printf("%d / %d = %d\n", a, b, a / b);
                break;
            default:
                printf("Invalid operator");
                break;
        }
    }
}