# include <stdio.h>
# include <math.h>

int main() {
    int num = 0;
    printf("請輸入一個正整數：");
    scanf("%d", &num);
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            printf("%d 不是質數\n", num);
            return 0;
        }
    }
    printf("%d 是質數\n", num);
    return 0;
}