# include <stdio.h>
# include <stdlib.h>

int main() {
    int *result = NULL;
    int count = 0;
    int min = 0;
    int max = 0;
    printf("請輸入一個正整數範圍：");
    scanf("%d %d", &min, &max);
    for (int i = min; i <= max; i++) {
        if (i % 3 ==2 && i % 5 == 3 && i % 7 == 2) {
            count++;
            result = (int*)realloc(result, count*sizeof(int));
            result[count-1] = i;
        }
    }
    printf("%d到%d的解有%d個\n", min, max, count);
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}