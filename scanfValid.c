#include <stdio.h>
int main() {
    int n;
    printf("Please enter integer: ");
    
    while(1) {
        // 如果成功讀取 1 個整數
        if (scanf("%d", &n) == 1) {
            break; // 成功讀取就跳出迴圈
        } else {
            // 如果讀取失敗 (輸入非數字)
            printf("Please enter again\n");
            
            // 重要：清空輸入緩衝區內錯誤的字元，直到遇到換行符號為止
            // 否則不管跑幾次迴圈，scanf 都會卡在同一個錯誤字元上
            while (getchar() != '\n'); 
        }
    }
    
    printf("The integer is %d\n", n);
    return 0;
}