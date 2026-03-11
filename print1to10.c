# include <stdio.h>

int main() {
    int count = 0;
    // while (count<= 9){
    //     printf("%d\n", count+1);
    //     count++;
    // }
    do {
        printf("%d\n", count+1);
        count++;
    } while (count < 10);
    return 0;
}