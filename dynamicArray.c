# include <stdio.h>
# include <stdlib.h> // 需要載入此標頭檔來使用 malloc, realloc, free

int main(){
    int *numbers = NULL; // 初始化為 NULL
    int length = 0;
    while(1){
        int input;
        scanf("%d", &input); // 把 \n 拿掉，這會干擾輸入
        if (input == 0) break;
        
        // 使用 realloc 動態擴充記憶體空間（配置在 Heap）
        int *larger = realloc(numbers, (length + 1) * sizeof(int));
        if (larger == NULL) {
            printf("記憶體配置失敗！\n");
            break;
        }
        
        numbers = larger; // 將擴充好的空間指派回 numbers
        numbers[length] = input;
        length ++;
    }
    
    printf("The numbers are: ");
    for (int i = 0; i < length; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n"); // 補上換行方便終端機閱讀
    
    // 使用完記憶體記得釋放
    free(numbers); 
    
    return 0;
}