#include <stdio.h>
#include <stdlib.h>

//Created By Rendi Aigo Brandon_23343082

#define MAX_VERTICES 100

// Definisi struktur Queue
struct Queue {
    int items[MAX_VERTICES];
    int front;
    int rear;
};

// Fungsi untuk membuat queue baru
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

// Fungsi untuk memeriksa apakah queue kosong
int isEmpty(struct Queue* q) {
    return q->rear == -1;
}

// Fungsi untuk menambahkan elemen ke dalam queue
void enqueue(struct Queue* q, int value) {
    if (q->rear == MAX_VERTICES - 1)
        printf("Queue is full\n");
    else {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}

// Fungsi untuk menghapus elemen dari queue
int dequeue(struct Queue* q) {
    int item;
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        item = -1;
    } else {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            q->front = q->rear = -1;
        }
    }
    return item;
}

// Definisi struktur Node
struct Node {
    int vertex;
    struct Node* next;
};

// Fungsi untuk membuat node baru
struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Definisi struktur Graph
struct Graph {
    int numVertices;
    struct Node** adjLists;
    int* visited;
};

// Fungsi untuk membuat graph baru
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    // Mengalokasikan memori untuk array adjacency lists dan array visited
    graph->adjLists = (struct Node**)malloc(vertices * sizeof(struct Node*));
    graph->visited = (int*)malloc(vertices * sizeof(int));

    // Menginisialisasi adjacency lists dan array visited
    int i;
    for (i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0; // Set semua simpul sebagai belum dikunjungi
    }

    return graph;
}

// Fungsi untuk menambahkan edge (sisi) antara dua simpul dalam graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Tambahkan dest ke adjacency list dari src
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // Jika graph tidak berarah, tambahkan juga edge dari dest ke src
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

// Fungsi untuk melakukan Breadth First Search (BFS)
void bfs(struct Graph* graph, int startVertex) {
    // Membuat queue baru untuk menyimpan simpul yang akan dikunjungi
    struct Queue* q = createQueue();

    // Tandai startVertex sebagai telah dikunjungi dan tambahkan ke queue
    graph->visited[startVertex] = 1;
    enqueue(q, startVertex);

    // Melakukan penelusuran selama queue tidak kosong
    while (!isEmpty(q)) {
        // Mengambil simpul yang pertama kali dimasukkan ke dalam queue
        int currentVertex = dequeue(q);
        printf("Visited %d\n", currentVertex);

        // Menelusuri semua simpul yang bertetanggaan dengan currentVertex
        struct Node* temp = graph->adjLists[currentVertex];
        while (temp) {
            int adjVertex = temp->vertex;
            if (graph->visited[adjVertex] == 0) {
                // Jika simpul belum dikunjungi, tandai sebagai telah dikunjungi dan masukkan ke queue
                graph->visited[adjVertex] = 1;
                enqueue(q, adjVertex);
            }
            temp = temp->next;
        }
    }
}

int main() {
    // Membuat graph baru dengan 6 simpul (vertices)
    struct Graph* graph = createGraph(6);
    
    // Menambahkan edge (sisi) antara simpul-simpul dalam graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);
    addEdge(graph, 3, 5);
    addEdge(graph, 4, 5);

    // Menampilkan hasil penelusuran BFS dimulai dari simpul 0
    printf("BFS traversal starting from vertex 0:\n");
    bfs(graph, 0);

    return 0;
}
