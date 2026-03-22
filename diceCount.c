# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
    srand(time(0));
    int counter[6] = {0};
    int i;
    for (i = 0; i < 6000; i++){
        int dice = rand() % 7 / 1;
        switch(dice){
            case 1:
                counter[0]++;
                break;
            case 2:
                counter[1]++;
                break;
            case 3:
                counter[2]++;
                break;
            case 4:
                counter[3]++;
                break;
            case 5:
                counter[4]++;
                break;
            case 6:
                counter[5]++;
                break;
        }
    }
    for (i = 0; i < 6; i++){
        printf("%d: %d\n", i + 1, counter[i]);
    }
    return 0;
}
