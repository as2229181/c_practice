# include <stdio.h>

int main(){
    char strA[] = "test";
    char *strB = "test";
    printf("first string %c\n", strA[0]);
    strA[0] = 'a';
    printf("first string %c\n", strA[0]);
    printf("first string of B %c\n", strB[0]);
    strB[0] = 'a'; // literal constant is stored in read-only memory, so it will cause a segmentation fault
    printf("first string of B %c\n", strB[0]);
    
    strA = "test2"; // strA is an array, so it can't be assigned a new value, you must use pointer object
    strB = "test2"; // strB is a pointer, so it can be assigned a new value
    printf("first string %c\n", strA[0]);
    printf("first string of B %c\n", strB[0]);
    return 0;
}