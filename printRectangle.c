# include <stdio.h>

int main() {
    int row = 0;
    int col = 0;
    printf("Please enter square row: ");
    scanf("%d", &row);
    printf("Please enter square col: ");
    scanf("%d", &col);
    // for (int i = 0; i < row; i++){
    //     for (int j = 0; j < col; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // return 0;

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}