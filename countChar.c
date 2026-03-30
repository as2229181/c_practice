# include <stdio.h>

int counter(char *chr){
    int count = 0;
    while (chr[count] != '\0'){
        count ++;
    }
    return count;
}

int main(){
    char chr[] = "Hello World";
    printf("length of char array %zu\n", sizeof(chr));
    printf("number of characters is %d\n", counter(chr));
    return 0;
}