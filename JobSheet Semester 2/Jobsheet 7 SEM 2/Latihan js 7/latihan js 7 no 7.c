#include <stdio.h>
#include <stdlib.h>

//Created By Rendi Aigo Brandon_23343082

#define BENAR 1
#define SALAH 0
#define PENUH 10

struct node {
    int data;
    struct node *next;
};

struct queue {
    int count;
    struct node *front;
    struct node *rear;
};

typedef struct queue queue;

void inisialisasi(queue *q) {
    q->count = 0;
    q->front = NULL;
    q->rear = NULL;
}

int isempty(queue *q) {
    return (q->rear == NULL);
}

void enqueue(queue *q, int value) {
    if (q->count < PENUH) {
        struct node *tmp;
        tmp = (struct node*)malloc(sizeof(struct node));
        tmp->data = value;
        tmp->next = NULL;
        if (!isempty(q)) {
            q->rear->next = tmp;
            q->rear = tmp;
        } else {
            q->front = q->rear = tmp;
        }
        q->count++;
    } else {
        printf("Antrian penuh\n");
    }
}

int dequeue(queue *q) {
    struct node *tmp;
    int n = q->front->data;
    tmp = q->front;
    q->front = q->front->next;
    q->count--;
    free(tmp);
    return n;
}

void display(struct node *head) {
    if (head == NULL) {
        printf("NULL\n");
    } else {
        printf("%d ", head->data);
        display(head->next);
    }
}

int main() {
    queue *q;
    q = (queue*)malloc(sizeof(queue));
    inisialisasi(q);
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    printf("Queue sebelum proses dequeue: ");
    display(q->front);
    dequeue(q);
    printf("\nQueue setelah proses dequeue: ");
    display(q->front);
    return 0;
}
