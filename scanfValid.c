#include <stdio.h>
int main() {
    int n;
    printf("Please enter integer: ");
    
    while(1) {
        if (scanf("%d", &n) == 1) {
            break;
        } else {

            printf("Please enter again\n");

            while (getchar() != '\n'); 
        }
    }
    
    printf("The integer is %d\n", n);
    return 0;
}