# include <stdio.h>

int main() {
    char c;
    printf("Please enter an alphabet to transform:");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z'){
        c -= 32;
    }
    else if (c >= 'A' && c <= 'Z'){
        c += 32;
    }
    else {
        printf("The input is not an alphabet.\n");
        return 1;
    }
    printf("The transformed alphabet is: %c\n", c);
    return 0;
}