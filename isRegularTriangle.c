# include <stdio.h>

int main() {
    int sideA, sideB, sideC;
    printf("Please enter the lengths:");
    scanf("%d%d%d", &sideA, &sideB, &sideC);
    if (sideA == sideB && sideB == sideC){
        printf("this is a regular triangle\n");
    }
    else{
        printf("this is not a regular triangle\n");
    }
    return 0;
}