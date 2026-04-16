# include <stdio.h>
int add(int a, int b);
int mul(int a, int b);

int calculator(int (*func)(int, int));

int main(){
    char op;
    printf("Please enter an operator (+ or *): ");
    scanf("%c", &op);
    if(op == '+'){
        printf("%d\n", calculator(&add));
    }else if(op == '*'){
        printf("%d\n", calculator(&mul));
    }
    return 0;
}

int add(int a, int b){
    return a + b;
}

int mul(int a, int b){
    return a * b;
}

int calculator(int (*func)(int, int)){
    int total = 1;
    for(int i = 0; i < 10; i++){
        total = func(total, i);
    }
    return total;
}