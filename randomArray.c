# include <stdio.h>
# include <stdlib.h>
# include <time.h>


// int main(){
//     srand(time(0));
//     int nums[10];
//     int isUsed = 0;
//     for (int i = 0; i < 10; i++){
//         do {
//             nums[i] = rand() % 10 + 1;
//             isUsed = 0;
//             for(int j = 0; j < i; j++){
//                 if(nums[j] == nums[i]){
//                     isUsed = 1;
//                     break;
//                 }
//             } 
//         } while (isUsed == 1);
//     }
//     for (int i = 0; i < 10; i++){
//         printf("%d ", nums[i]);
//     }
//     return 0;
// }


int main(){
    srand(time(0));
    int nums[10];
    int count[11] = {0};
    for (int i = 0; i < 10; i++){
        do {
            nums[i] = rand() % 10 + 1;
        } while (count[nums[i]] == 1);
        count[nums[i]]++;
    }
    for (int i = 0; i < 10; i++){
        printf("%d ", nums[i]);
    }
    return 0;
}