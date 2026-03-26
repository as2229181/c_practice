# include <stdio.h>

void increase(int arr[3]);

int main(){
    int arr[3] = {1, 2, 3};
    increase(arr);
    for (int i = 0; i < 3; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void increase(int arr[3]){
    for (int i = 0; i < 3; i++){
        arr[i]++;
    }
}