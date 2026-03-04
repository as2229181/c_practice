# include <stdio.h>

int main() {
    int guessNumber, totalMealPrice;
    int mealPrice = 300;
    float discount = 0.8;
    int thershold = 3000;
    printf("Please enter the guess number:");
    scanf("%d", &guessNumber);
    totalMealPrice = guessNumber * mealPrice;
    if (totalMealPrice >= thershold){
        totalMealPrice = totalMealPrice * discount;
    }
    printf("Discounted price: %d\n", totalMealPrice);
    return 0;
}