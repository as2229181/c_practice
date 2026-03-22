# include <stdio.h>

int main(){
    int n[10];
    int q;
    int max = -1;
    printf("please enter 10 numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }
    printf("enter q to search for the max number\n");
    scanf("%d", &q);
    for (int i = 0; i < 10; i++){
        if (n[i] < q && n[i] > max){
            max = n[i];
        }
    }
    printf("the max number is %d\n", max);
    return 0;
}