# include <stdio.h>

int fib(int n){
    if (n <=1) return 1;
    return fib(n-1) + fib(n-2);
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d\n", fib(number));
    return 0;
}