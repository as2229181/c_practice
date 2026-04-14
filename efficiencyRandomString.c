# include <stdio.h>
# include <string.h>


int main(){
    char raw[5000];
    char *str[100];
    char input[50];
    int len = 0;
    int index = 0;
    while(1){
        scanf("%s", input);
        if(strcmp(input, "end") == 0) break;
        str[index] = &raw[len];
        strcpy(str[index], input);
        len += strlen(input) + 1;
        index ++;
    }
    for(int i = 0; i < index; i++){
        printf("%s ", str[i]);
    }
    return 0;
}