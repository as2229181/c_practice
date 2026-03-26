# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void arrayRand(int arr[]);
void arrayPrint(int arr[]);
int arrayMax(int arr[]);

int main(){
    srand(time(0));
    int arr[10];
    arrayRand(arr);
    arrayPrint(arr);
    printf("Max is %d\n", arrayMax(arr));
    return 0;
}

void arrayRand(int arr[]){
    for (int i = 0; i < 10; i++){
        arr[i] = rand() % 100 + 1;
    }
}

void arrayPrint(int arr[]){
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int arrayMax(int arr[]){
    int max = arr[0];
    for (int i = 1; i < 10; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
