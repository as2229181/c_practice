# include <stdio.h>

int main() {
    int slideA, slideB, slideC;
    printf("Please enter lengths:\n");
    scanf("%d%d%d", &slideA, &slideB, &slideC);
    if (slideA * slideA + slideB * slideB == slideC * slideC ||
        slideA * slideA + slideC * slideC == slideB * slideB ||
        slideB * slideB + slideC * slideC == slideA * slideA){
        printf("this is a right triangle\n");
    }
    else{
        printf("this is not a right triangle\n");
    }
    return 0;
}