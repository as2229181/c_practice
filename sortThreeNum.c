# include <stdio.h>

int main() {
    int a, b, c, tmp;
    printf("Please enter three numbers to sorted:");
    scanf("%d%d%d", &a, &b, &c);
    if (b < a){
        tmp = a;
        a = b;
        b = tmp;
        printf("%d %d %d\n", a, b, c);
        
    }
    if (c < a){
        tmp = a;
        a = c;
        c = tmp;
        printf("%d %d %d\n", a, b, c);
    }

    if (c < b){
            tmp = b;
            b = c;
            c = tmp;
            printf("%d %d %d\n", a, b, c);
        }

    printf("%d %d %d\n", a, b, c);
    return 0;
}