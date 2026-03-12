# include <stdio.h>

// int main() {
//     printf("Please enter a number to print from 1 to N:\n");
//     int n;
//     scanf("%d", &n);
//     for(int count=0; count <n; count++) {
//         printf("%d\n", count+1);
//     }
//     return 0;
// }

int main() {
    for(int count=0; count < 10; count++) {
        if ((count + 1) % 2 == 0) {
            continue;
        }
        printf("%d\n", count + 1);
    }
    return 0;
}