# include <stdio.h>


void printArray(int (*p)[5]){
    for(int i = 0; i < sizeof(*p)/sizeof(*p[0]); i++){
        printf("%d\n", (*p)[i]);
    }
}

int main(){
    int arr1[5] = {0, 1, 2, 3, 4};
    int *p[5] = {&arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4]};
    // for(int i = 0; i < 5; i++){

    //     printf("p[%d] = %p, address of arr1[%d] = %p, value of arr1[%d] = %d\n", i, p[i], i, &arr1[i], i, *p[i]);
    // }
    printArray(&arr1);
    return 0;
}