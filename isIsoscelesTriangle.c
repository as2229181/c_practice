# include <stdio.h>

void checkIsoscelesTriangle(int sideA, int sideB, int sideC) {
    if (!(sideA == sideB || sideB == sideC || sideA == sideC)){
        printf("this is not a isosceles triangle\n");
    }
    if (!(sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)){
        printf("this is not a triangle\n");
    }
    printf("this is a isosceles triangle\n");
}