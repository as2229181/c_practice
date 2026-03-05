# include <stdio.h>

int main() {
    int sideA, sideB, sideC;
    printf("Please enter the lengths:");
    scanf("%d%d%d", &sideA, &sideB, &sideC);
    printf("%d %d %d\n", sideA, sideB, sideC);
    if (!(sideA == sideB || sideB == sideC || sideA == sideC)){
        printf("this is not a isosceles triangle\n");
        return 0;
    }
    if (!(sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)){
        printf("this is not a triangle\n");
        return 0;
    }
    printf("this is a isosceles triangle\n");
    return 0;
}