# include <stdio.h>

void countTo3(int n){
    if (n <= 3){
        printf("%d\n", n);
        countTo3(n+1);
    }
}

void countTo3Tail(int n){
    if (n <= 3){
        countTo3Tail(n+1);
        printf("%d\n", n);
    }
}


int main(){
    countTo3(1);
    countTo3Tail(1);
    return 0;
}