# include <stdio.h>


void addOne(int *num){
    *num += 1;
}

int main() {
    int a = 10;
    int *p = &a; // pointer value, pointer to a, if you get value of p you get the value of a
    int result = *p;
    int result2 = *&a;
    printf("address of a is %p\n, get int a address\n", &a);
    printf("address of a is %p\n get int p value\n", p);
    printf("result is %d\n", result);
    printf("result2 is %d\n", result2);
    addOne(&a);
    printf("add one: %d\n", a);
}
