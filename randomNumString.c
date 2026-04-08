# include <stdio.h>
# include <string.h>

int main(){
    char str[100][5];
    char input[5];
    int len = 0;
    while(1){
        scanf("%s", input);
        if(strcmp(input, "end") == 0){
            break;
        }
        strcpy(str[len], input);
        len ++;
    }
    for(int i = 0; i < len; i++){
        printf("%s\n", str[i]);
    }
    return 0;
}