#include <stdio.h>
#include "triangle.h"

int main() {
    int sideA, sideB, sideC;
    printf("Please enter the lengths:");
    scanf("%d%d%d", &sideA, &sideB, &sideC);
    checkIsoscelesTriangle(sideA, sideB, sideC);
    checkRegularTriangle(sideA, sideB, sideC);
    checkRightTriangle(sideA, sideB, sideC);
    return 0;
}