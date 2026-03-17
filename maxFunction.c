# include <stdio.h>

int max(int a, int b);

int main() {
    printf("Please enter three number: ");
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The max number is %d\n",max(max(num1, num2), num3));
    return 0;
}

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}