# include <stdio.h>

void printString(char *str){
    for(int i = 0; str[i] != '\0'; i++){
        printf("index %d\n", i);
        printf("%c\n", str[i]);
    }
    printf("\n");
}


int main() {
    char chr[] = "Hello World";
    printString(chr);
    return 0;
}