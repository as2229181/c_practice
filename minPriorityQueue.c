# include <stdio.h>
# include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} MinHeap;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void push(MinHeap *heap, int val){
    if (heap->size == heap->capacity){
        int newCapacity = heap->capacity * 2;
        int *newData = (int*)realloc(heap->data, sizeof(int)*newCapacity);
        if (newData == NULL){
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Heap resized from %d to %d\n", heap->capacity, newCapacity);
        heap->data = newData;
        heap->capacity = newCapacity;
    }

    int i = heap->size;
    heap->data[i] = val;
    heap->size++;
    while (i != 0 && heap->data[(i-1)/2] > heap->data[i]){
        swap(&heap->data[i], &heap->data[(i-1)/2]);
        i = (i-1)/2;
    }
}

int pop(MinHeap *heap){
    if (heap-> size == 0) return -1;
    // --heap->size minus 1 and return in here would be zero
    if (heap-> size == 1) return heap->data[--heap->size];
    
    int root = heap-> data[0];
    // move last element to root
    heap->data[0] = heap->data[--heap->size];
    int i =0;
    while (1){
        int left = i * 2 + 1;
        int right = i * 2 + 2;
        int smallest = i;
        if (left < heap-> size && heap->data[left] < heap->data[smallest]){
            smallest = left;
        }
        if (right < heap-> size && heap->data[right] < heap->data[smallest]){
            smallest = right;
        }
        if (smallest != i){
            swap(&heap->data[i], &heap->data[smallest]);
            i = smallest;
        }else{
            break;
        }
    }
    return root;
}


MinHeap* createMinHeap(int capacity){
    MinHeap *heap = (MinHeap*)malloc(sizeof(MinHeap));
    if (heap == NULL){
        return NULL;
    };
    heap->data = (int*)malloc(sizeof(int)*capacity);
    if (heap->data == NULL){
        free(heap);
        return NULL;
    }
    heap->size = 0;
    heap->capacity = capacity;
    return heap; 
}

int top(MinHeap *heap){
    if (heap->size == 0) return -1;
    return heap->data[0];
}

int main() {
    MinHeap* myHeap = createMinHeap(3);
    if (myHeap == NULL) return 1;


    printf("Pushing: 15, 5, 20, 3, 10\n");
    push(myHeap, 15);
    push(myHeap, 5);
    push(myHeap, 20);
    push(myHeap, 3);
    push(myHeap, 10);


    printf("Popping values in order:\n");
    while (myHeap->size > 0) {
        printf("%d ", pop(myHeap));
    }
    printf("\n");

    free(myHeap->data);
    free(myHeap);

    return 0;
}