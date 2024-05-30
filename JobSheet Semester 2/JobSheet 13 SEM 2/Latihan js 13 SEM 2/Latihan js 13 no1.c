#include <stdio.h>
#include <stdlib.h>

// Created By_23343082_Rendi Aigo Brandon

// Node structure to represent a vertex in the adjacency list
struct node {
    int vertex;
    struct node* next;
};

// Function to create a new node
struct node* createNode(int v);

// Graph structure
struct Graph {
    int numVertices;
    int* visited;
    struct node** adjLists; // Array of linked lists to store adjacency lists
};

// Function prototypes
struct Graph* createGraph(int vertices);
void addEdge(struct Graph* graph, int src, int dest);
void printGraph(struct Graph* graph);
void DFS(struct Graph* graph, int vertex);

int main() {
    // Create a graph with 4 vertices
    struct Graph* graph = createGraph(4);
    
    // Add edges
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);

    // Print the adjacency list representation of the graph
    printGraph(graph);
    
    // Perform DFS starting from vertex 2
    DFS(graph, 2);

    return 0;
}

// Function to perform Depth-First Search
void DFS(struct Graph* graph, int vertex) {
    struct node* adjList = graph->adjLists[vertex];
    struct node* temp = adjList;

    graph->visited[vertex] = 1;
    printf("Visited %d \n", vertex);

    while (temp != NULL) {
        int connectedVertex = temp->vertex;

        if (graph->visited[connectedVertex] == 0) {
            DFS(graph, connectedVertex);
        }
        temp = temp->next;
    }
}

// Function to create a node
struct node* createNode(int v) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    if (graph == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }
    graph->numVertices = vertices;

    graph->adjLists = (struct node**)malloc(vertices * sizeof(struct node*));
    if (graph->adjLists == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }

    graph->visited = (int*)malloc(vertices * sizeof(int));
    if (graph->visited == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }

    for (int i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge from src to dest
    struct node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // Add edge from dest to src (since the graph is undirected)
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

// Function to print the adjacency list representation of the graph
void printGraph(struct Graph* graph) {
    for (int v = 0; v < graph->numVertices; v++) {
        struct node* temp = graph->adjLists[v];
        printf("\n Adjacency list of vertex %d\n ", v);
        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}
