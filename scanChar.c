# include <stdio.h>

void strRead(char *chr);

int main(){
    char chr[100];
    strRead(chr);
    return 0;
}

void strRead(char *chr){
    printf("Please enter a string: ");
    int i = 0;
    while (1){
        scanf("%c", &chr[i]);
        if (chr[i] == '\n'){
            break;
        }
        i++;
    }
    chr[i] = '\0';
    printf("You entered: %s\n", chr);
}