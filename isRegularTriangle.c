# include <stdio.h>

void checkRegularTriangle(int sideA, int sideB, int sideC) {
    if (sideA == sideB && sideB == sideC){
        printf("this is a regular triangle\n");
    }
    else{
        printf("this is not a regular triangle\n");
    }
}