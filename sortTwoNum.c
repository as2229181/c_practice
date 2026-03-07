# include <stdio.h>

int main() {
    int a, b;
    printf("Please enter two number to sorted:");
    scanf("%d%d", &a, &b);
    if (a > b) {
        int temp_a = a;
        a = b;
        b = temp_a;
    }
    printf("%d %d\n", a, b);
    return 0;
}