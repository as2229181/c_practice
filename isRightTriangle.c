# include <stdio.h>

void checkRightTriangle(int slideA, int slideB, int slideC) {
    if (slideA * slideA + slideB * slideB == slideC * slideC ||
        slideA * slideA + slideC * slideC == slideB * slideB ||
        slideB * slideB + slideC * slideC == slideA * slideA){
        printf("this is a right triangle\n");
    }
    else{
        printf("this is not a right triangle\n");
    }
}