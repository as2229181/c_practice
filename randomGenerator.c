# include <stdio.h>
# include <time.h>

static unsigned int next_ = 1;

int rand(){
    next_ = next_ * 1103515245 + 12345;
    return next_/ 655346 % 32768;
}


void srand(unsigned int seed){
    next_ = seed;
}


int main(){
    srand(time(0));
    for (int i = 0; i < 10; i++){
        printf("%d ", rand());
    }
    return 0;
}