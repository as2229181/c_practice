# include <stdio.h>
# include <stdlib.h>

typedef struct {
    int id;
    int data;
} Node;

typedef struct {
    Node *node;
    int size;
    int capacity;    
} MinHeapNode;

void swap(Node *a, Node *b){
    Node tmp = *a;
    *a = *b;
    *b = tmp;
}

void push(MinHeapNode *heap, Node *node){
    if (heap->size == heap->capacity){
        int newCapacity = heap->capacity * 2;
        heap->node = (Node*)realloc(heap->node, sizeof(Node)*newCapacity);
        if (heap->node == NULL){
            printf("Memory allocation is failed\n");
            exit(1);
        }
        heap->capacity = newCapacity;
    }
    int i = heap->size;
    heap->node[i] = *node;
    heap->size++;
    while (i != 0 && heap->node[(i-1)/2].data > heap->node[i].data){
        swap(&heap->node[i], &heap->node[(i-1)/2]);
        i = (i-1)/2;
    } 
}

int pop(MinHeapNode *heap){
    int root = heap->node[0].data;
    heap->node[0] = heap->node[--heap->size];
    int i = 0;
    while (1){
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int smallest = i;
        if (left < heap->size && heap->node[left].data < heap->node[smallest].data){
            smallest = left;
        }
        if (right < heap->size && heap->node[right].data < heap->node[smallest].data){
            smallest = right;
        }
        if(smallest != i){
            swap(&heap->node[i], &heap->node[smallest]);
            i = smallest;
        }else{
            break;
        }
    }
    return root;
}

int main(){
    MinHeapNode *heap = (MinHeapNode*)malloc(sizeof(MinHeapNode));
    if (heap == NULL) return 1;
    heap->node = (Node*)malloc(sizeof(Node)*10);
    if (heap->node == NULL){
        free(heap);
        return 1;
    }
    heap->size = 0;
    heap->capacity = 10;
    Node *node1 = (Node*)malloc(sizeof(Node));
    Node *node2 = (Node*)malloc(sizeof(Node));
    Node *node3 = (Node*)malloc(sizeof(Node));
    Node *node4 = (Node*)malloc(sizeof(Node));
    Node *node5 = (Node*)malloc(sizeof(Node));

    node1->id = 1;
    node1->data = 10;
    node2->id = 2;
    node2->data = 20;
    node3->id = 3;
    node3->data = 30;
    node4->id = 4;
    node4->data = 40;
    node5->id = 5;
    node5->data = 50;

    push(heap, node1);
    push(heap, node2);
    push(heap, node3);
    push(heap, node4);
    push(heap, node5);

    while (heap->size > 0){
        printf("%d ", pop(heap));
    }
    printf("\n");

    free(heap->node);
    free(heap);
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);

    return 0;
}