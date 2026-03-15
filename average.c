# include <stdio.h>

int main() {

    int nunber;
    int sum = 0;
    int count = 0;
    printf("Please enter number to calculate average: (0 to quit)\n");
    scanf("%d", &nunber);
    while (nunber != 0) {
        sum += nunber;
        count ++;
        scanf("%d", &nunber);
    }
   if (count != 0) {
       printf("The average is %f\n", (float)sum / count);
   }
   else {
       printf("The average is N/A.\n");
   }
   return 0;
}
