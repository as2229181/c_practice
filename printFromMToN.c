# include <stdio.h>

int main() {
    int m, n;
    printf("Please enter two number:");
    
    scanf("%d %d", &m, &n);
    if (m > n) {
        printf("Invalid input\n");
        return 0;
    }
    while (m <= n) {
        printf("%d\n", m);
        m++;
    }
    return 0;
}