# include <stdio.h>

int maxArr(int v[], int length);

int main(){
    int v[3] = {1, 5 ,3};
    printf("size of element %zu\n", sizeof(v[0]));
    printf("size of array %zu\n",sizeof(v));
    printf("max number in array is %d\n", maxArr(v, 3));
    int v2[5] = {31, 6 ,7, 8, 20};
    printf("size of element %zu\n", sizeof(v2[0]));
    printf("size of array %zu\n",sizeof(v2));
    printf("max number in array is %d\n", maxArr(v2, 5));
    return 0;
}

int maxArr(int v[], int length){
    printf("address array %ld\n", sizeof((int *)v));
    int max = v[0];
    for(int i = 1; i < length; i++){
        if (v[i] > max){
            max = v[i];
        }
    }
    return max;
}
