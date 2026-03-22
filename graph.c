# include <stdio.h>
# include <stdlib.h>

typedef struct AdjNode{
    int dest;
    int weight;
    struct AdjNode* next;
} AdjNode;

typedef struct Graph{
    int numVertices;
    AdjNode** adjLists;
} Graph;


AdjNode* createNode(int dest, int weight){
    AdjNode* newNode = (AdjNode*)malloc(sizeof(AdjNode));
    if (newNode == NULL){
        printf("Error: Memory allocation failed\n");
        return NULL;
    }
    newNode-> dest = dest;
    newNode-> weight =weight;
    return newNode;
}


Graph* createGraph(int vertices){
    Graph* newGraph = (Graph*)malloc(sizeof(Graph));
    if (newGraph == NULL){
        printf("Error: Memory allocation failed\n");
        return NULL;
    }
    newGraph->numVertices = vertices;
    newGraph->adjLists = (AdjNode**)malloc(sizeof(AdjNode*)*vertices);
    if (newGraph->adjLists == NULL){
        printf("Error: Memory allocation failed\n");
        return NULL;
    }
    for(int i = 0; i < vertices; i++){
        newGraph->adjLists[i] = NULL;
    }
    return newGraph;
}


void addEdge(Graph* graph, int src, int dest, int weight){
    AdjNode* newNode = createNode(dest, weight);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;
}


void printGraph(Graph* graph){
    for(int i = 0; i < graph->numVertices; i++){
        AdjNode* temp = graph->adjLists[i];
        while(temp != NULL){
            printf("%d -> ", temp->dest);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}


void freeGraph(Graph* graph){
    for(int i = 0; i < graph->numVertices; i++){
        AdjNode* temp = graph->adjLists[i];
        while(temp != NULL){
            AdjNode* temp2 = temp;
            temp = temp->next;
            free(temp2);
        }
    }
    free(graph->adjLists);
    free(graph);
}


int main(){
    Graph* graph = createGraph(5);
    addEdge(graph, 0, 1, 10);
    addEdge(graph, 0, 4, 5);
    addEdge(graph, 1, 2, 1);
    addEdge(graph, 1, 4, 2);
    addEdge(graph, 2, 3, 4);
    addEdge(graph, 3, 2, 6);
    addEdge(graph, 3, 0, 7);
    addEdge(graph, 4, 1, 3);
    addEdge(graph, 4, 2, 9);
    addEdge(graph, 4, 3, 2);
    printGraph(graph);
    freeGraph(graph);
    return 0;
}