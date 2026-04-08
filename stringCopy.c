# include <stdio.h>
# include <string.h>

int main(){
    char strA[5] = "test";
    // char *strB; // 錯誤示範：若只有宣告指標而未分配記憶體，使用 strcpy 時會導致 segmentation fault。strcpy 需要目標變數是已明確配置足夠空間的 char array 或記憶體區塊。
    char strB[5];
    strcpy(strB, strA); 
    printf("strA: %s\n", strA);
    printf("strB: %s\n", strB);
    return 0;
}