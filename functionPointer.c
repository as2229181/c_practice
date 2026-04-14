# include <stdio.h>

int main(){
    void hello();
    void (*func)() = &hello;
    (*func)();
    printf("address of hello: %p\n", &hello);
    printf("address of func: %p\n", func);
    printf("address of func: %p\n", &func);
    return 0;
}

void hello(){
    printf("Hello World\n");
}
