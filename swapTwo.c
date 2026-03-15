# include <stdio.h>

// using tmp
// int main() {
//     int integer1;
//     int integer2;
//     int tmp;
//     printf("Please enter the first integer:");
//     scanf("%d", &integer1);
//     printf("Please enter the second integer:");
//     scanf("%d", &integer2);
//     tmp = integer2;
//     integer2 = integer1;
//     integer1 = tmp;
//     printf("integer1, %d\n", integer1);
//     printf("integer2, %d\n", integer2);
//     return 0;
// }

// not use tmp
int main() {
    int integer1;
    int integer2;
    int tmp;
    printf("Please enter the first integer:");
    scanf("%d", &integer1);
    printf("Please enter the second integer:");
    scanf("%d", &integer2);
    // use add (only fit in integer)
    integer1 = integer1 + integer2;
    integer2 = integer1 - integer2;
    integer1 = integer1 - integer2;

    printf("integer1, %d\n", integer1);
    printf("integer2, %d\n", integer2);
    return 0;
}
